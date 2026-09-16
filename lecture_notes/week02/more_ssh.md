[Previous: Transferring Files](../week01/transferring_files.md)

# SSH Hostname Aliases
- Allows you to type short name without username
- Edit `~/.ssh/config` - for each alias:
```
Host eos01
Hostname eos01.cis.gvsu.edu
User yourusername
```

# SSH Keys
- Annoying to enter password everytime
- Default locations (on machine ssh'ing from)
	- `~/.ssh/id_rsa` - private key
	- `~/.ssh/id_rsa.pub` - public key

# Setting up SSH Keys
- Check to see if you don't already have the keys
	- `ls -al ~/.ssh`
- Generate new keys
	- `ssh-keygen` --> generates keys
- Add public key to `~/.ssh/authorized_keys` file on remote server
	- `ssh-copy-id "username@hostname"`

# Issues with ssh-keys?
- Errors about the authorized keys file:
	- Not existing: make the file with 
		- `touch ~/.ssh/authorized_keys
	- Wrong permissions:
		- `chmod 600 ~/.ssh/authorized_keys
		- `chmod 700 ~/.ssh`
- If you can use `ssh` and `ssh-keygen` but don't have `ssh-copy-id`
	- move `id_rsa.pub` to remote machine:
	- `scp ~/.ssh/id_rsa.pub username@hostname:~`
	- SSH into remote machine and add public key to `authorized_keys`:
		`ssh username@hostname`
		`cat id_rsa.pub >> .ssh/authorized_keys`

[Next: Script/History](script_history.md)
