# Conditionals

```bash
if condition; then
	commands
elif condition; then
	commands
else
	commands
fi
```

# Expressing Conditions
- `[ $var1 == $var2 ]` - string comparison
- numerical comparison
	- -eq
	- -le
	- -ge
	- -lt
	- -gt
- To combine, both are in brackets and combine with &&
- Can also do arithmetic for condition
	- ((mynum1<mynum2))

```bash
#! /usr/bin/env bash

# Conditionals

mynum=6
mynum2=4

if [ $mynum -eq $mynum2 ]; then
    echo "they are equal"
elif [ $mynum -lt $mynum2 ]; then
    echo "mynum < mynum2"
else
    echo "mynum > mynum2"
fi

# Combining conditionals
mynum3=6
if [ $mynum -eq $mynum2 ] && [ $mynum2 -eq $mynum3 ]; then
    echo "all three are equal"
fi

# Using Arithmetic for Conditionals
if ((mynum2 < mynum)); then
    echo "num2 less than num"
fi
```