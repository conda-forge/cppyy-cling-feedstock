#!/bin/bash
set -exo pipefail

# Much of this file (and the entire recipe in fact) has been taken from the
# root-feedstock.

export VERBOSE=1

# Do not perform auto-detection of CPU features
export EXTRA_CLING_ARGS=-O2

# Manually set the deployment_target
# May not be very important but nice to do
OLDVERSIONMACOS='${MACOSX_VERSION}'
sed -i -e "s@${OLDVERSIONMACOS}@${MACOSX_DEPLOYMENT_TARGET}@g" src/cmake/modules/SetUpMacOS.cmake

declare -a CMAKE_PLATFORM_FLAGS

export AR=`which $AR`
export RANLIB=`which $RANLIB`

if [[ "${target_platform}" == linux* ]]; then
    CMAKE_PLATFORM_FLAGS+=("-DCMAKE_AR=${GCC_AR}")
    CMAKE_PLATFORM_FLAGS+=("-DCLANG_DEFAULT_LINKER=${LD_GOLD}")
    CMAKE_PLATFORM_FLAGS+=("-DDEFAULT_SYSROOT=${INSTALL_SYSROOT}")
    CMAKE_PLATFORM_FLAGS+=("-DRT_LIBRARY=${INSTALL_SYSROOT}/usr/lib/librt.so")
    CMAKE_PLATFORM_FLAGS+=("-DCMAKE_CXX_STANDARD=17")

    # Hide symbols from LLVM/clang to avoid conflicts with other libraries
    for lib_name in $(ls $PREFIX/lib | grep -E 'lib(LLVM|clang).*\.a'); do
        export CXXFLAGS="${CXXFLAGS} -Wl,--exclude-libs,${lib_name}"
    done
    echo "CXXFLAGS is now '${CXXFLAGS}'"
else
    CMAKE_PLATFORM_FLAGS+=("-Dcocoa=ON")
    CMAKE_PLATFORM_FLAGS+=("-DCLANG_RESOURCE_DIR_VERSION='9.0.1'")
    CMAKE_PLATFORM_FLAGS+=("-DCMAKE_CXX_STANDARD=17")

    # Print out and possibly fix SDKROOT (Might help Azure)
    echo "SDKROOT is: '${SDKROOT}'"
    echo "CONDA_BUILD_SYSROOT is: '${CONDA_BUILD_SYSROOT}'"
    export SDKROOT="${CONDA_BUILD_SYSROOT}"
fi

# Remove -std=c++XX from build ${CXXFLAGS}
CXXFLAGS=$(echo "${CXXFLAGS}" | sed -E 's@-std=c\+\+[^ ]+@@g')
CXXFLAGS=$(echo "${CXXFLAGS}" | sed -E 's@-isystem @-I@g')
export CXXFLAGS

# The cross-linux toolchain breaks find_file relative to the current file
# Patch up with sed
sed -i -E 's#(ROOT_TEST_DRIVER RootTestDriver.cmake PATHS \$\{THISDIR\} \$\{CMAKE_MODULE_PATH\} NO_DEFAULT_PATH)#\1 CMAKE_FIND_ROOT_PATH_BOTH#g' \
    src/cmake/modules/RootNewMacros.cmake

export CMAKE_CLING_ARGS=${CMAKE_PLATFORM_FLAGS[@]}

# Some flags that root-feedstock sets. They probably don't hurt when building cppyy…
export CMAKE_CLING_ARGS="${CMAKE_CLING_ARGS} -DCMAKE_PREFIX_PATH=${PREFIX} -DCMAKE_INSTALL_RPATH=${SP_DIR}/cppyy_backend/lib -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_RPATH_USE_LINK_PATH=ON -DCMAKE_SKIP_BUILD_RPATH=OFF -DCLING_BUILD_PLUGINS=OFF -DTBB_ROOT_DIR=${SP_DIR}/cppyy_backend -DPYTHON_EXECUTABLE=${PYTHON} -DCMAKE_INSTALL_PREFIX=${SP_DIR}/cppyy_backend -Dexplicitlink=ON -Dexceptions=ON -Dfail-on-missing=ON -Dgnuinstall=OFF -Dshared=ON -Dsoversion=ON -Dbuiltin-glew=OFF -Dbuiltin_xrootd=OFF -Dbuiltin_davix=OFF -Dbuiltin_afterimage=OFF -Drpath=ON -Dcastor=off -Dgfal=OFF -Dmysql=OFF -Doracle=OFF -Dpgsql=OFF -Dpythia6=OFF -Droottest=OFF"
# Variables that cppyy's setup.py usually sets, we might not actually want all of this 
export CMAKE_CLING_ARGS="${CMAKE_CLING_ARGS} -DLLVM_ENABLE_TERMINFO=0 -Dminimal=ON -Dasimage=OFF -Droot7=OFF -Dhttp=OFF -Dbuiltin_pcre=ON -Dbuiltin_freetype=OFF -Dbuiltin_zlib=OFF -Dbuiltin_xxhash=ON -Dbuiltin_cling=ON"
# Use conda-forge's clang & llvm
export CMAKE_CLING_ARGS="${CMAKE_CLING_ARGS} -Dbuiltin_llvm=OFF -Dbuiltin_clang=OFF"
# Use the cross ar and not the host's ar
export CMAKE_CLING_ARGS="${CMAKE_CLING_ARGS} -DCMAKE_AR=$AR"
# Use the cross ranlib and not the host's ranlib
export CMAKE_CLING_ARGS="${CMAKE_CLING_ARGS} -DCMAKE_RANLIB=$RANLIB"

if [[ "${python_impl}" == "pypy" ]]; then
    # CMake 3.17 needs some help to find Python. According to
    # https://cmake.org/cmake/help/v3.17/module/FindPython.html#module:FindPython,
    # we're supposed to set Python_LIBRARY but actually, looking at the code,
    # we need to set PYTHON_LIBRARY. Much of this is changing in cmake 3.18,
    # so expect this to break again in future upgrades.
    CMAKE_CLING_ARGS="$CMAKE_CLING_ARGS -DPYTHON_LIBRARY=$PREFIX/lib/libpypy3-c.so"
fi

mkdir build
cd build

cmake $CMAKE_CLING_ARGS ../src
cmake --build . --target install --config Release

cd ..

python -m pip install . --no-deps -vv

echo "Check that generated files do not need to be updated in cross-compiled builds."
for item in `ls ${RECIPE_DIR}/rootcling`; do
  echo "Checking $item..."
  diff "${RECIPE_DIR}/rootcling/${item}" `find -name ${item}` || true
done

rm "${SP_DIR}/cppyy_backend/etc/allDict.cxx.pch" || true
