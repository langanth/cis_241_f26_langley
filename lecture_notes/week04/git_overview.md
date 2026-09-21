[[grep|Previous: GREP]]

# GIT

## How do you manage your code in a group project?
- google drive
- dropbox
- discord
- passing around a flashdrive

## What problems will you run into?
- merging
- multiple editors at once
- history of files
- integration into workflow
- lost flash drive

## Solution?
- Git
	- Version control software
	- free and [open source]([https://github.com/git/git](https://github.com/git/git))

## Version Control Systems
- software that tracks all changes to a "repository" of files
	- a.k.a. a repo
- Benefits
	- Full history
		- rollbacks, traceability
	- working concurrently
	- mergin
	- no files ever fully deleted

## Distributed version control
- Each user has a local copy of all files, including full history
- allows for working offline
- should make merging easer

# Git vs Github

- git
	- software
	- handles the version control
	- operates locally
- Github
	- website/server
	- stores git repositories
	- additional features
		- public sties
		- github actions
- **BOTH ARE FREE**

## Some notes
- git has a lot of moving parts
- You will mess up
	- I have, and still do (on a regular basis)
	- most mistakes are easily recoverable
- Don't worry about all the details
	- Feel comfortable with the big picture
	- look things up when you need to know or are just curious

REVIEW SLIDES FOR IMAGES

## What you need to do
- install git
	- probably already installed
	- [https://github.com/git-guides/install-git](https://github.com/git-guides/install-git)
	- Do not use use GitHub desktop
- To test, run git version (should be 2. something)
- Create a GitHub account (We will be using this later)
- Configure git
	- `git config --global user.name "Your Name"`
	- `git config --global user.email "name@example.com"`