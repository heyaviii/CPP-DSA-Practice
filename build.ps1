# Build script for C++ sources (PowerShell)
$scriptDir = Split-Path -Parent $MyInvocation.MyCommand.Definition
$src = Join-Path $scriptDir 'Array\reverse.cpp'
$out = Join-Path $scriptDir 'Array\reverse.exe'

if (!(Test-Path $src)) {
    Write-Error "Source file not found: $src"
    exit 1
}

if (Test-Path $out) { Remove-Item $out -Force }

Write-Host "Checking for g++..."
$gpp = Get-Command g++ -ErrorAction SilentlyContinue
if ($gpp) {
    Write-Host "Found g++; compiling with g++"
    & g++ -std=c++17 -O2 -Wall -Wextra -o $out $src
    if ($LASTEXITCODE -eq 0) { Write-Host "Build succeeded: $out"; exit 0 }
    Write-Error "g++ build failed with exit code $LASTEXITCODE"
    exit $LASTEXITCODE
}

Write-Host "g++ not found. Checking for MSVC cl.exe..."
$cl = Get-Command cl.exe -ErrorAction SilentlyContinue
if ($cl) {
    Write-Host "Found cl.exe; compiling with MSVC"
    & cl.exe /EHsc /Fe:$out $src
    if ($LASTEXITCODE -eq 0) { Write-Host "Build succeeded: $out"; exit 0 }
    Write-Error "cl.exe build failed with exit code $LASTEXITCODE"
    exit $LASTEXITCODE
}

Write-Error "No supported C++ compiler found. Install g++ (MinGW) or Visual Studio Build Tools."
exit 1
