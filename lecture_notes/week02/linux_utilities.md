#cis-241 #linux

[[IO redirection|Prev (IO redirection)]]

# Basic File Manipulation
- cut - accessing specific fields from delimited files
- tr - translating characters in files
	- Examples:
		- Replace a's with b's tr a b
		- Upper to lower case
		```
		tr [:upper:] [:lower:] <
		inputfile
		tr [A-Z] [a-z] < inputfile
		```
		- Delete characters tr -d 'N' < inputfile

# WC
- Default (no options) outputs: lines, words, bytes Ex: `wc filename`
- No filename -> input from stdin
- Multiple files: separate with spaces
- Options to get only specific info:
	- Ex: `wc -l filename` - just number of lines
	- Ex: `wc -, filename` - number of chars

[[Compression|Next (Compression)]]

