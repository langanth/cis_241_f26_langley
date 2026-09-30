# Configuration files
- ~/.bashrc on your local machine
- runs when you start a terminal
- ~/.profile on EOS
	- runs when you ssh in
	- On EOS, this also runs your .bashrc
- To run updates after editing a file:
	- either re-login
	- or use source (source ~/.bashrc)
- These contain bash commands
	- we will talk more about similar files soon

# Aliases
- Common example: la
	- alias la='ls -A'
- Now, running "la" is the same as running "ls -A"
- Why does this need to be in ~/.bashrc/ ~/.profile?
- ideas for other useful aliases?

# Environment Variables
- variables that can be used in this shell and its child processes
- how to view our environment variables?
	- printenv
- what are they used for?
	- Example: PATH - where bash looks for programs to run

# Editing environment variables (e.g., PATH)
- Best to do this in ~/.bashrc
- Add a new line:
	- export PATH="newpath: $PATH"
- ":" allows us to have multiple values
- Note that bash searches PATH in order

# Installing software from source
- why might we want to do this?
- working through an example: sl
- First let's clone the repo:
	- git clone git@github.com:mtoyoda/sl.git
- If you don't have ssh keys setup on EOS:
	- git clone https://github.com/mtoyoda/sl
- Build the application, if necessary
- Modify PATH to include this directory
