# Permissions
- Who can access your files?
	- Owner (you)
	- Group
	- Others (everyone)
- What can they do?
	- Read
	- Write
	- Execute
- How many yes no options do we have?
	- 9

# Viewing permissions
- How do we see what files we have?
	- `ls`
- ls has an extra flag to tell us more about files:
	- `ls -l`

# Breaking it down
- Look at slide and copy

# Examples
- What do each of these mean?
	- rwxrwxr-x
	- rw-r-----
	- ------rw-

# Changing permissions
- new command: chmod (CHange MODe)
- Usage 1: chmod (who) (op) (perms) file
	- `chmod u+r file`
	- chmod o-rw file
	- Who: owner (u), group (g), other (o), all (a)
	- Perms: read (r), write (w), execute (x)
- Usage 2: `chmod ### file`
- Where each # is a number [0, 7]
- Take each possible permission:
	- 4 = read
	- 2 = write
	- 1 = execute
- and sum them up for owner group or other

# Examples
- What is the number code for each of these?
	- rwxrwxr-x - 775
	- rw-r----- - 640
	- ------rw- - 006
	- 