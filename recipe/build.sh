#!/bin/bash
set -exuo pipefail

export VERBOSE=1
export MAKEFLAGS="-j`nproc || sysctl -n hw.ncpu`"

# Do not perform auto-detection of CPU features
export EXTRA_CLING_ARGS=-O2

# enum-constexpr-conversion: to ignore this compile error on modern compilers: integer value 536870912 is outside the valid range of values [0, 63] for the enumeration type 'EProperty'
CXXFLAGS="$CXXFLAGS -Wno-enum-constexpr-conversion"

# Build Cling with cmake (we do not use the build in setup.py because it vendors LLVM and is also too opinionated to work on conda-forge)
mkdir -p builddir
cd builddir

declare -a CMAKE_FLAGS

if [[ "${target_platform}" != "${build_platform}" ]]; then
  if [[ -n "${CROSSCOMPILING_EMULATOR:-}" ]]; then
    CMAKE_FLAGS+=("-DCMAKE_CROSSCOMPILING_EMULATOR=${CROSSCOMPILING_EMULATOR}")
  else
    # We cannot invoke rootcling on this platform so we need to provide the required assets statically from previous runs.
    CMAKE_FLAGS+=("-DSTATIC_G_CORELEGACY_CXX=${RECIPE_DIR}/cross-compilation-assets/${target_platform}/G__CoreLegacy.cxx")
    CMAKE_FLAGS+=("-DSTATIC_LIBCORELEGACY_ROOTMAP=${RECIPE_DIR}/cross-compilation-assets/${target_platform}/libCoreLegacy.rootmap")
    CMAKE_FLAGS+=("-DSTATIC_G_THREADLEGACY_CXX=${RECIPE_DIR}/cross-compilation-assets/${target_platform}/G__ThreadLegacy.cxx")
    CMAKE_FLAGS+=("-DSTATIC_LIBTHREADLEGACY_ROOTMAP=${RECIPE_DIR}/cross-compilation-assets/${target_platform}/libThreadLegacy.rootmap")
    CMAKE_FLAGS+=("-DSTATIC_G_RIOLEGACY_CXX=${RECIPE_DIR}/cross-compilation-assets/${target_platform}/G__RIOLegacy.cxx")
    CMAKE_FLAGS+=("-DSTATIC_LIBRIOLEGACY_ROOTMAP=${RECIPE_DIR}/cross-compilation-assets/${target_platform}/libRIOLegacy.rootmap")
    # We cannot invoke llvm-tblgen on this platform so we need to provide the required assets statically from previous runs.
    CMAKE_FLAGS+=("-DSTATIC_CLING_OPTIONS_INC=${RECIPE_DIR}/cross-compilation-assets/${target_platform}/ClingOptions.inc")
  fi
fi

# builtin_cling: We want to build cling. That's why we're here.
CMAKE_FLAGS+=("-Dbuiltin_cling=ON")
# runtime_cxxmodules: (whatever that might be) leads to "error: unknown argument: '-fmodule-name'" during the build; also disabled by upstream's setup.py
CMAKE_FLAGS+=("-Druntime_cxxmodules=OFF")
# CMAKE_CXX_STANDARD: clang at least is using some C++17 features
CMAKE_FLAGS+=("-DCMAKE_CXX_STANDARD=17")
# CMAKE_INSTALL_PREFIX: we do not want to install this Cling into the CONDA_PREFIX directly. Instead cppyy-cling vendors this in its setup.py into site-packages/cppyy_backend.
CMAKE_FLAGS+=("-DCMAKE_INSTALL_PREFIX=`pwd`/install/cppyy_backend")
# Do not vendor LLVM but use our own ROOT-patched LLVM build
CMAKE_FLAGS+=("-Dbuiltin_llvm=OFF")
CMAKE_FLAGS+=("-DLLVM_PREFIX=$PREFIX")
# Do not vendor Clang but use our own ROOT-patched Clang build
CMAKE_FLAGS+=("-Dbuiltin_clang=OFF")
# Do not include debug info in build since we run out of disk space on Azure when building ppc64 otherwise
CMAKE_FLAGS+=("-DCMAKE_BUILD_TYPE=Release")
# Work around issues such as void cling::Transaction::addNestedTransaction(cling::Transaction*): Assertion `!m_Unloading && "Must not nest within unloading transaction"' failed.
# (Does not seem like a good idea, but upstream's setup.py sets the same flag.)
CMAKE_FLAGS+=("-DLLVM_ENABLE_ASSERTIONS=OFF")
# We are not building a Cling REPL so we do not need terminfo support. (Upstream sets the same flag.)
CMAKE_FLAGS+=("-DLLVM_ENABLE_TERMINFO=OFF")

# ROOT uses these flags. Without them, we get relocation truncated to fit: R_PPC64_REL24 errors when lirking libCling
if [[ "${target_platform}" == "linux-ppc64le" ]]; then
  export CXXFLAGS="${CXXFLAGS} -fplt"
  export CFLAGS="${CFLAGS} -fplt"
fi

# cling uses std::filesystem::path, see https://conda-forge.org/docs/maintainer/knowledge_base/#newer-c-features-with-old-sdk
export CXXFLAGS="${CXXFLAGS} -D_LIBCPP_DISABLE_AVAILABILITY"

cmake ${CMAKE_FLAGS[@]} ../src
make

cd ..

# Install cppyy-cling and some Python bits into site-packages/cppyy_backend.
python -m pip install . --no-deps --no-build-isolation -vv
