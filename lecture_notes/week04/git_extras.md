# Mergetools
- There are external tools to help with merge conflicts
- For example: meld
	- git config --global merge.tool meld
	- git config --global mergetool.keepBackup false
- After encountering a conflict with git merge, run git merge tool
- Still need to add and commit files afterward

# Stashing changes
- what if you have changes you want to maybe keep, but you don't want to commit? git stash!
- git stash - saves both staged and unstaged changes and saves them for later
	- Add a -u to store untracked files, too!
- git stash pop
	- bring back changes
- There are more advanced features if you're interested!

# Reverting Changes
- my group partner pushed an awful commit but you said not to rewrite history. What do i do?
- git revert commit
- This does not rewrite history, it adds new history that reverses the mentioned commit
	- this is much better for syncing with other people

# View previous states
- I want to look at an old version of a file (but not bring back that old version):
	- git show commit:filepath
- I want to bring back a previous version of a file:
	- git restore --source=<commit/branch> filepath
	- Old way
		- git checkout commit filepath
- Be careful, checking out just a commit will detach HEAD