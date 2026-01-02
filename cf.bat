@echo off

if "%~1"=="" (
    echo Usage: cf filename_without_extension
    exit /b 1
)

set FILE=%~1.cpp

if exist "%FILE%" (
    echo %FILE% already exists!
    exit /b 1
)

echo #include ^<bits/stdc++.h^> > "%FILE%"
echo using namespace std; >> "%FILE%"
echo. >> "%FILE%"
echo #define fast_io ios::sync_with_stdio(false); cin.tie(nullptr); >> "%FILE%"
echo. >> "%FILE%"
echo int main() { >> "%FILE%"
echo     fast_io; >> "%FILE%"
echo. >> "%FILE%"
echo     int t; >> "%FILE%"
echo     cin ^>^> t; >> "%FILE%"
echo     while (t--) { >> "%FILE%"
echo         // solve here >> "%FILE%"
echo     } >> "%FILE%"
echo. >> "%FILE%"
echo     return 0; >> "%FILE%"
echo } >> "%FILE%"

echo Created %FILE%
