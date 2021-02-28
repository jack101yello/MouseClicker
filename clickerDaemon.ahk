#j:: 
isRunning = 1 
Loop { 
if(isRunning = 1) { 
MouseClick, left 
Sleep 1000 
} 
if(isRunning = 0) { 
break 
} 
} 
return 
#k:: 
isRunning = 0 
return 
Escape:: 
ExitApp 
return 
