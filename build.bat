@echo off
   setlocal

   set PATH=C:\msys64\ucrt64\bin;%PATH%
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
       "Src/Database.cpp" ^
       "-IHeaders" ^
       -I"C:/msys64/ucrt64/include/mysql" ^
       -L"C:/msys64/ucrt64/lib" ^
       -lmariadb ^
       -o "Main.exe"

   if %errorlevel% equ 0 (
       echo.
       echo ================================
       echo Build successful! ✓
       echo ================================
       echo.
       Main.exe
   ) else (
       echo.
       echo ================================
       echo Build failed! ✗
       echo ================================
   )

   pause
   endlocal