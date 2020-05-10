# This script is meant to be run from the root of the project.

# Builds SpelunkyPSP natively on Windows, using following dependencies:
# * SDL as a vendor of creating window, retrieving OpenGL context, controls and sounds.

$ROOT = $(Get-Location)
$INSTALL_PATH = "$ROOT/tmp/install-windows"
$DEPS_PATH = "$ROOT/deps/SDL"

Remove-Item -Force -Recurse "$ROOT/tmp/build-windows"
New-Item -Path "$ROOT/tmp/build-windows" -ItemType "Directory"

cmake $ROOT `
    -B"$ROOT/tmp/build-windows" `
    -G "Visual Studio 16 2019" `
    -DCMAKE_INSTALL_PREFIX="$INSTALL_PATH" `
    -DCMAKE_PREFIX_PATH="$DEPS_PATH"
