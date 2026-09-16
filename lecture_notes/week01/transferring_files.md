[Previous: Viewing Files](viewing_files.md)

# SCP
- `ssh` allowed us to securely access a shell on remote devices
- What about moving files?
	- `scp`
- Command Format:
	- `scp [[user@]src_host:]srcpath [[user@]dest_host:]destpath`
- Example: Transfer file to remote machine
	- `scp pathtofile username@hostname:~/some/remote/directory`
	- moving the other way?
		- swap the order

# RSYNC
- different alg for transfer
	- checks for changes and differences only transfers differences
- Command format (like scp):
	- `rsync [[user@src_host:] srcpath [[user@dest_host:]destpath`
- Example
	- `rsync filename username@hostname:~`
- Many options: recursive, delete, ...

[Next: More SSH](cis_241_f26/lecture_notes/week02/more_ssh.md)
