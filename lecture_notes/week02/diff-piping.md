#cis-241 #linux 

[[Compression|Prev (Compression)]]
# Diff/Piping
- Compare text files
- Options to ignore whitespace, blank lines, cases
- Example: diff file1 file2
- Show instructions for changing file1 to file2
- sdiff shows side-by-side

# Piping
- connects stdout of command to stdin of next command
- Same as using stdout redirection to file followed by stdin redirection
- Usage: `command1 [arguments] | command2 [arguments]`
- Examples:
	- `ls | wc -1: count number of files`
	
[[grep|Next (grep)]]
