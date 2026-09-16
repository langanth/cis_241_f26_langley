[Previous: Introduction to CIS 241](intro_to_cis_241.md)

# SSH

## What is Linux?
- Not straightforward
- Linux is technically a **kernel**
	- core of the operating system
- Many operating systems use the Linux kernel
	- Ubuntu (EOS)
	- Arch, Kali, Gentoo, Fedora, Manjaro, Mint, etc.
- These OS's are often referred to as "Linux"
## Unix
- Earlier operating system
- Linux and other systems are heavily influenced by Unix
- We now use "Unix-like" systems:
	- Linux
	- macOS
	- FreeBSD
	- Solaris
	- Etc

## Windows
- Windows is not Unix-like
- Can you do your homework on a Windows machine?
	- not by default
	- WSL
		- Windows Subsystem for Linux
		- If you are on Windows you ***must*** install WSL

## Shell
- Terminal
- We are running a shell
- What is a shell?
	- A shell is a way to pass through commands to the operating system
	- Give command -> Computer go Brrrrrr

## What is echo?
- Think print
- $0
	- Command being run

## Connecting to another machine?
- ssh - **S**ecure **SH**ell
	- ssh allows us to securely connecto t a remote shell
	- How to use?
		- ssh username@address
- Once youy do this, you will be running commands on another computer!
- But why?
	- Efficiency
	- Necessity
		- Only have shell access
		- Tools only available from command line

## Wait! How do I leave?!
- exit
  
[Next: Linux Filesystem](linux_filesystem.md)
