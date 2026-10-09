# Functions
- Definition:

```bash
function_name() {
	commands
}
```
- Calling: just `function_name`
- Parameters:
	- call function name with arguments (like we'd call bash script with arguments)
	- Access within function like you access arguments to bash script
	- $1, $2, ...
# Example Code
```bash
#! /usr/bin/env bash

# function definition
hello_world () {
    echo "hello world"
}

hello_world () {
    echo "hello world $1 it is an $2 day"
}

# calling the function
hello_world
hello_world Bob awful
hello_world Alice good
```