# Where are we?
- so far we've only been working locally
- Now we want to connect to a remote
- Remote - a git repo stored elsewhere on a network
- We will use repos stored on GitHub
- Other sites include GitLab and BitBucket

# Getting Connected
- generally advisable to using SSH keys to interact with GitHub: [https://docs.github.com/en/authentication/connecting-to-github-with-ssh/adding-a-new-ssh-key-to-your-github-account](https://docs.github.com/en/authentication/connecting-to-github-with-ssh/adding-a-new-ssh-key-to-your-github-account)
- If you have a local repo you want to push to GitHub:
	1. Create an empty repo on GitHub
	2. In your local repo, run:
		- git remote add origin remote_repo_url
		- git push --set-upstream origin main
- If you do not have a local repo:
	1. grab the repo url off GitHub
	2. git clone remote_repo_url

# Workflow
- editing files, staging changes, and commits are the same as when working locally!
- When you want to send your commits remote:
	- git push
	- git push remote branch (if needed)
- When you want to download changes from remote:
	- git fetch
	- git merge
- or
	- git pull

# Warning!
- Generally bad practice to rewrite history once it has been pushed to a remote
- Generally, don't:
	- rebase
	- reset to an earlier commit
	- commit from detached HEAD
	- Amend a commit that has been pushed