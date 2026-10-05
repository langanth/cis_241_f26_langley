# What is a bash script?
- basic: listing of commands to execute with Bash shell
- Bash is also a programming language - scripts can contain:
	- control structures -- loops, conditionals
	- variables
	- functions
	- arguments (parameters)
	- arrays

# Who uses them and why?
- Make life easier: automate or simplify tasks run regularly
- Efficiency - create script to perform repetitive tasks
- Examples:
	- sysadmins needing to check status and running the same commands on a regular basis
	- script to build and deploy personal website

# Creating and running
- open, edit, save file with program/list of commands
- convention for bash is to use .sh extension
- change the permissions to make executable
	- chmod u+x filename
	- chmod +x filename
- ./filename

# Pound-Bang
- aka shebang, hashbang
- first line tells the kernel what to program to use to run the script
- Why bother adding to script?
	- add portability - users don't need to know what to use to call script
	- easily run bash scripts from other shells
- Examples with bash:
	- #! /bin/bash
	- #! /user/bin/env bash
- Can also use with others like Python:
	- #! /usr/bin/env python3
- /usr/bin/env bash **vs** /bin/bash
	- env uses whatever version of the executable comes first in $PATH
	- env - users can have different behavior

# Mac users with homebrew
- use brew install bash to get updated version
- different path from pervious slide
	- could be: /usr/local/bin/bash

# Comments
- `#` begins a comment from there until end of line
- Exception:
	- pound-bang/shebang on first line of script

# Example

```
#! /usr/bin/env bash
echo "hello world"
echo "goodbye world"

```