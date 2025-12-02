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

# On macOS, cmake does not set CMAKE_CROSSCOMPILING when building for osx-arm64 on osx-64
if [[ "${CONDA_BUILD_CROSS_COMPILATION:-0}" == "1" ]]; then
  CMAKE_FLAGS+=("-DCMAKE_CROSSCOMPILING=ON")
  if [[ -n "${CROSSCOMPILING_EMULATOR:-}" ]]; then
    CMAKE_FLAGS+=("-DCMAKE_CROSSCOMPILING_EMULATOR=${CROSSCOMPILING_EMULATOR}")
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

# ROOT uses these flags. Without them, we get relocation truncated to fit: R_PPC64_REL24 errors when lirking libCling
if [[ "${target_platform}" == "linux-ppc64le" ]]; then
  export CXXFLAGS="${CXXFLAGS} -fplt"
  export CFLAGS="${CFLAGS} -fplt"
fi

cmake ${CMAKE_FLAGS[@]} ../src
make

cd ..

# Install cppyy-cling and some Python bits into site-packages/cppyy_backend.
python -m pip install . --no-deps --no-build-isolation -vv
