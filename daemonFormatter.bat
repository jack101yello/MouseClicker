@echo off
echo %2:: > clickerDaemon.ahk
echo Loop { >> clickerDaemon.ahk
echo MouseClick, %4 >> clickerDaemon.ahk
echo Sleep %1 >> clickerDaemon.ahk
echo } >> clickerDaemon.ahk
echo return >> clickerDaemon.ahk
echo %3:: >> clickerDaemon.ahk
echo ExitApp >> clickerDaemon.ahk
echo return >> clickerDaemon.ahk
clickerDaemon.ahk