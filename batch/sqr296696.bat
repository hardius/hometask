@echo off
set /a i = 0
:begin
set /a i = i + 1
set /a sqr = i * i
echo ( )
set /a ost = %sqr% %% 1000
echo %ost%,  sqr %i% = %sqr%
if %ost% equ 296 (goto end) else (goto begin)


:end
echo %i%
