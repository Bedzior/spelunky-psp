[CmdletBinding()]
param (
    [Parameter()][String]
    $Version="1.2.15",
    
    [Parameter()][String]
    $DepsDirectory="deps"
)

$ErrorActionPreference = "Stop"

Try {
    Invoke-WebRequest -Uri "https://www.libsdl.org/release/SDL-devel-$Version-VC.zip" -OutFile "SDL.zip"
    
    Add-Type -AssemblyName System.IO.Compression.FileSystem
    If (Test-Path $DepsDirectory) {
        Remove-Item "$DepsDirectory\SDL*" -Recurse -Force
    } 

    [System.IO.Compression.ZipFile]::ExtractToDirectory("SDL.zip", "$DepsDirectory\")
    
    New-Item -Path "$DepsDirectory\SDL\include\SDL" -ItemType "Directory"
    Move-Item -Path "$DepsDirectory\SDL-$Version\lib" -Destination "$DepsDirectory\SDL\" -Force
    Move-Item -Path "$DepsDirectory\SDL-$Version\include\*.h" -Destination "$DepsDirectory\SDL\include\SDL\" -Force
    Remove-Item -Path "$DepsDirectory\SDL-$Version" -Force -Recurse
}
Catch {
    
}
Finally {
    Remove-Item -path "SDL.zip"
}
