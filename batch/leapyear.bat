@echo off
setlocal

set /P "year=Enter year: "
set /A "leap=(year%%4)"
if %leap% equ 0 (
echo %year% is a leap year
) else (
echo %year% is NOT a leap year
)

endlocal