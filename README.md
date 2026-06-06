# C++ Build & Run Helper

This workspace contains a simple C++ example in Array/reverse.cpp.

Quick commands (PowerShell):

Build:

```powershell
powershell -ExecutionPolicy Bypass -File .\build.ps1
```

Run (builds first if needed):

```powershell
powershell -ExecutionPolicy Bypass -File .\run.ps1
```

If you prefer to compile manually with g++:

```powershell
g++ -std=c++17 -O2 -Wall Array\reverse.cpp -o Array\reverse.exe
.
Array\reverse.exe
```

If using Visual Studio's `cl.exe` from Developer Command Prompt:

```powershell
cl.exe /EHsc /Fe:Array\reverse.exe Array\reverse.cpp
Array\reverse.exe
```
