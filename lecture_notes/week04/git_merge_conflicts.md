# So far we've had no merge conflicts
- When might we have merge conflict?
	- People editing the same line
	- file both edited and deleted

# Resolving merge commits (1)
- We have to manually edit files with conflicts
	- we decide what to keep
	- each conflicted marked by makers:
- git status will show which files have conflicts

# Resolving merge commits (2)
1. Decide what to keep
	a. Can be one version or a mixture
2. Edit the file to match
3. Remove markers
4. Repeat for all conflicts
5. Stage and commit files

# Resolving merge commits (3)
- shortcut for keeping one version
	- git restore --ours file
	- git restore --theirs file
	- ours = branch being merged into, theirs is opposite
- what if we mess up?
	- git merge --abort
- can delete changes in working directory
