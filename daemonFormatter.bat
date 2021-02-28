@echo off
echo %2:: > clickerDaemon.ahk
echo isRunning = 1 >> clickerDaemon.ahk
echo Loop { >> clickerDaemon.ahk
echo if(isRunning = 1) { >> clickerDaemon.ahk
echo MouseClick, %4 >> clickerDaemon.ahk
echo Sleep %1 >> clickerDaemon.ahk
echo } >> clickerDaemon.ahk
echo if(isRunning = 0) { >> clickerDaemon.ahk
echo break >> clickerDaemon.ahk
echo } >> clickerDaemon.ahk
echo } >> clickerDaemon.ahk
echo return >> clickerDaemon.ahk
echo %3:: >> clickerDaemon.ahk
echo isRunning = 0 >> clickerDaemon.ahk
echo return >> clickerDaemon.ahk
echo Escape:: >> clickerDaemon.ahk
echo ExitApp >> clickerDaemon.ahk
echo return >> clickerDaemon.ahk