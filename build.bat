@echo off
setlocal

REM Add MSYS2 to PATH
set PATH=C:\msys64\ucrt64\bin;%PATH%

REM Change to project directory
cd /d "%~dp0"

echo ================================
echo Building Gestion Club Project...
echo ================================
echo.

g++ -g -std=c++17 -Wall -Wextra ^
    "Src/Main.cpp" ^
    "Src/Etudiant.cpp" ^
    "Src/Club.cpp" ^
    "Src/Membre.cpp" ^
    "Src/GestionClub.cpp" ^
    "-IHeaders" ^
    -o "Main.exe"

if %errorlevel% equ 0 (
    echo.
    echo ================================
    echo Build successful! ✓
    echo ================================
    echo.
    echo Running program...
    echo ================================
    echo.
    Main.exe
    echo.
    echo ================================
    echo Program finished.
    echo ================================
) else (
    echo.
    echo ================================
    echo Build failed! ✗
    echo ================================
)

endlocal