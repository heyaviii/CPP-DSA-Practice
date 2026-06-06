$scriptDir = Split-Path -Parent $MyInvocation.MyCommand.Definition
$exe = Join-Path $scriptDir 'Array\reverse.exe'

if (!(Test-Path $exe)) {
    Write-Host "Executable not found; building first..."
    & powershell -ExecutionPolicy Bypass -File (Join-Path $scriptDir 'build.ps1')
    if ($LASTEXITCODE -ne 0) { Write-Error "Build failed; aborting run."; exit $LASTEXITCODE }
}

Write-Host "Running: $exe"
& $exe
