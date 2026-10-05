# Arguments
- aka positional parameters
- reference by ${n} - where n is the position
- $0 - expands to command used to call program
- $1, $2, et. are 1st, 2nd, etc. arguments on the command line
- need to use braces for numbers with more than 1 digit, i.e. ${10}

# Arguments (continued)
- $# -> total number of arguments
- $@ -> array of arguments
- $* -> string with arguments separated by space
# Example

```
# Arguments
echo $1
echo $2
echo $3

# command used 
echo $0

echo ${10}
```