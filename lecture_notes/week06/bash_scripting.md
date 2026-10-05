# Variables
- Assignment:
	- mynum=5
	- mycolor=hello
	- mylongmsg='hello world'
- Reading/Accessing Value: preced by $
	- echo $mynum
- Spacing is important

# Single vs Double Quotes
- single quotes -> everything treated literally
- double quotes -> expand variables inside

# Arithmetic Expansion
- can't just do 1 + 1 or var1 + var2
- $((1+1))
- $((num1+num2a))

# Examples
```
#! /usr/bin/env bash

# Variables
mynum=5
mynum2=2
mycolor=purple
mymsg="hello world"

echo $mynum
echo $mynum2
echo $mycolor
echo $mymsg
echo '1+1 = $((1+1))'
echo "1+1 = $((1+1))"
mysum=$((mynum+mynum2))
echo $mysum
```