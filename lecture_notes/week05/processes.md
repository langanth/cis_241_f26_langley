# What is a process
- process: the execution of a program/command

# Viewing processes
- ps - list active processes
- ps -f for more info
- ps -e show processes beyond this terminal
- top for an interactive view

# Viewing processes - Advanced example
- ps -eo pcpu, pid, user, args | sort -nr | head -n 5

# Foreground and background
- we typically run things in the foreground
	- this takes over the shell until the process finishes
- to run something in the background:
	- command &
- To suspend a running process: ctrl + Z
- to resume suspended process in foreground: fg
- to resume suspended process in background: bg
- jobs to show foreground, background, and suspended processes

# Stopping a process
- ctrl + C to stop the process in the goreground
- Stopping a process in background/suspended:
	- kill pid (attempts to stop process gracefully)
	- kill -9 pid (force kill)

