[Previous: DIFF/PIPING](diff-piping.md)

# GREP
- Search file for string
- Example: `grep word filename`
- Matches any occurence, to search for whole words:
	- `grep -w word filename`
- Options:
	- -i: ignore case
	- -r: recursive

# Wildcards
- Expand filename to any matching pattern
- Wildcards:
	- `*`: any number of any characters
	- `?`: any single character
	- `[]`: character class or range( includes `[[:upper:]], ...`)
	- `!`: can be used to specify complement
- More details: `man 7 glob` (on linux)
- globbing: pathname epansion
- commands only see list of matching filenames

[Next: VIM](VIM.md)
