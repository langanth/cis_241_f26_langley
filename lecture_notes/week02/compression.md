#cis-241 #linux 

[[Linux Utilities|Prev (Linux Utilities)]]
# Compressing Files
- Multiple different options
	- bzip2 - better compression
	- gzip - faster compression
- Decompress
	- bunzip2
	- gnzip
- Work on files( can work recursively on directories)
- How to get 1 single file for whole directory?

# Archiving
- Creating single file from multiple files
- tar command
- Examples:
	- pack (create)
	- tar -cvf all.tar file1, file2 ...
	- unpack tar -xvf all.tar
	- view table with contents
		- tar -tvf all.tar
- What does the -v stand for?

[[diff-piping|Next (diff/piping)]]
