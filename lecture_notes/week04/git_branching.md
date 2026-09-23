# What are branches?
- like having multiple workspaces at once
- Branches have shared history
- Changing one does not immediately affect another

# Why would we use branches?
- we like to keep "main" branch working
- Quick bug fixes
- feature development
- coordination
	- you can branch off of branches

# What's the name of our default branch?
- Used to be "master"
- now often "main"

# How do we use branches?
- List branches, see current
	- git branch (shows all local)
	- git branch -a (also shows remote)
	- git status (also lists current branch)
- Create a new branch
	- git branch name (does NOT switch to branch)
	- git switch -c name (does switch)
- Switch to existing branch
	- git switch name
- Delete a branch
	- git branch -d name
- Merge branches
	- switch to target branch (one we're merging into)
	- git merge source_name

# How do we use branches? OLD
- create a new branch
	- git checkout -b name
- Switch to existing branch
	- git checkout name

