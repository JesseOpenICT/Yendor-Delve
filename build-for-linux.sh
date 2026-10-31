#!/usr/bin/env bash
# Build Yendor Delve for Linux native
set -euo pipefail

PROJECT_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
BUILD_DIR="$PROJECT_ROOT/build"

echo "==> Generating Linux makefile..."
cd "$BUILD_DIR"
./premake5 --os=linux --graphics=opengl11 gmake2

echo "==> Cleaning stale objects..."
cd "$PROJECT_ROOT"
make clean 2>/dev/null || true

echo "==> Building..."
cd "$PROJECT_ROOT"
make -j"$(nproc)"

echo "==> Done. Binary should be in bin/Debug/ or bin/Release/."
