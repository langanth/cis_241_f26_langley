# Linux Cheat Sheet



## Navigation & File Management

### `pwd` — Print Working Directory

```bash
pwd
```

Shows the full path of your current directory.

### `cd` — Change Directory

```bash
cd /path/to/dir      # go to a specific path
cd ..                 # go up one level
cd ~                  # go to home directory
cd -                  # go to previous directory
```

### `ls` — List Directory Contents

```bash
ls                # basic listing
ls -l             # long format (permissions, size, date)
ls -a             # include hidden files
ls -lh            # long format, human-readable sizes
ls -R             # recursive listing
```

### `mkdir` — Make Directory

```bash
mkdir new_folder
mkdir -p a/b/c    # create nested directories at once
```

### `rm` — Remove Files/Directories

```bash
rm file.txt
rm -r folder/     # remove directory and contents
rm -f file.txt    # force remove, no prompt
rm -rf folder/    # force remove directory recursively (use with caution!)
```

### `cp` — Copy Files/Directories

```bash
cp file.txt dest/
cp -r folder/ dest/    # copy directory recursively
cp -v file.txt dest/   # verbose (show what's copied)
```

### `mv` — Move / Rename

```bash
mv old_name.txt new_name.txt   # rename
mv file.txt /path/to/dest/     # move
```

---

## Remote Access & Transfer

### `ssh` — Secure Shell (remote login)

```bash
ssh user@hostname
ssh -p 2222 user@hostname   # specify a port
ssh -i keyfile.pem user@hostname  # use a specific key
```

### `scp` — Secure Copy (over SSH)

```bash
scp file.txt user@host:/remote/path/       # local to remote
scp user@host:/remote/file.txt ./          # remote to local
scp -r folder/ user@host:/remote/path/     # copy directory
```

### `rsync` — Sync Files/Directories

```bash
rsync -av source/ dest/                     # local sync, archive mode + verbose
rsync -avz source/ user@host:/remote/path/  # sync to remote, compressed
rsync -av --delete source/ dest/            # mirror (deletes extra files in dest)
```

### `wget` — Download Files from the Web

```bash
wget https://example.com/file.zip
wget -O newname.zip https://example.com/file.zip   # save with a different name
wget -c https://example.com/file.zip                # resume a partial download
```

---

## Viewing & Reading Files

### `cat` — Concatenate/Print File Contents

```bash
cat file.txt
cat file1.txt file2.txt > combined.txt   # merge files
cat -n file.txt                          # show line numbers
```

### `less` — View File One Screen at a Time

```bash
less file.txt
```

Navigate: `Space` (next page), `b` (back), `/text` (search), `q` (quit).

### `more` — Similar to `less`, more limited

```bash
more file.txt
```

Navigate: `Space` (next page), `q` (quit). Mostly replaced by `less`.

### `tail` — Show End of a File

```bash
tail file.txt
tail -n 20 file.txt   # last 20 lines
tail -f logfile.txt   # follow file in real time (great for logs)
```

---

## Text Processing

### `sort` — Sort Lines of Text

```bash
sort file.txt
sort -r file.txt      # reverse order
sort -n file.txt      # numeric sort
sort -u file.txt      # sort and remove duplicates
```

### `uniq` — Report/Remove Duplicate Lines

```bash
uniq file.txt              # remove adjacent duplicates (input must be sorted first)
sort file.txt | uniq       # common pattern: sort then dedupe
uniq -c file.txt           # count occurrences of each line
```

### `diff` — Compare Files Line by Line

```bash
diff file1.txt file2.txt
diff -u file1.txt file2.txt   # unified format (easier to read, used in patches)
```

---

## Compression & Archiving

### `tar` — Archive Files

```bash
tar -cvf archive.tar folder/       # create archive
tar -xvf archive.tar               # extract archive
tar -czvf archive.tar.gz folder/   # create gzip-compressed archive
tar -xzvf archive.tar.gz           # extract gzip-compressed archive
tar -tvf archive.tar               # list contents without extracting
```

Flags: `c`=create, `x`=extract, `v`=verbose, `f`=filename, `z`=gzip, `j`=bzip2

### `gzip` / `gunzip` — Compress/Decompress (.gz)

```bash
gzip file.txt        # creates file.txt.gz, removes original
gunzip file.txt.gz   # decompresses, removes .gz file
```

> Note: the correct decompress command is `gunzip` (not `gnzip`).

### `bzip2` / `bunzip2` — Compress/Decompress (.bz2)

```bash
bzip2 file.txt         # creates file.txt.bz2, removes original
bunzip2 file.txt.bz2   # decompresses, removes .bz2 file
```

---

## Getting Help

### `man` — Manual Pages

```bash
man ls        # show manual for a command
man -k search_term   # search manual page descriptions
```

Navigate: `Space` (next page), `/text` (search), `q` (quit).

---

## Quick Reference Table

|Command|Purpose|
|---|---|
|`pwd`|Show current directory|
|`cd`|Change directory|
|`ls`|List files|
|`mkdir`|Create directory|
|`rm`|Remove files/directories|
|`cp`|Copy files/directories|
|`mv`|Move/rename|
|`ssh`|Remote login|
|`scp`|Copy files over SSH|
|`rsync`|Sync files/directories|
|`wget`|Download from web|
|`cat`|Print file contents|
|`less` / `more`|Page through file|
|`tail`|Show end of file|
|`sort`|Sort lines|
|`uniq`|Remove/count duplicate lines|
|`diff`|Compare files|
|`tar`|Archive files|
|`gzip` / `gunzip`|Compress/decompress .gz|
|`bzip2` / `bunzip2`|Compress/decompress .bz2|
|`man`|View manual pages|