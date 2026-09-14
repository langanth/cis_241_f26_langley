#cis-241 #linux 
[[GREP|Prev (Grep)]]

# Launching VIM
- `vim`
- `vim <filename>`
- file can be new or existing

# Important commands
- `:q <enter>` - Exit
- `:w <enter>` - Save
- `:q! <enter>`- Quit without saving

# Modes
- Most Common
	- Normal
	- Insert
- Six Basic Modes
	- Normal
	- Visual
	- Select
	- Insert
	- Command-line mode
	- Ex mode

# Navigation
- Arrow keys
- h (left), j (down), k (up), l (right)
- w, b - move forward /backward one word
	- caps to ignore punctuation
- page up/down
- `gg` - first line
- `G` - last line
- `#gg` or `:#` - go to line `#`

# Deletion, Copy, Paste
- x - delete character
- dw - delete word
- dd - delete line
	- these all can be preceded by a number
- D - delete rest of line
- r - replace char with next replace
- R - enter replace mode
	- keeps replacing chars as you type
	- Escape to exit to normal mode
- yy - yank line (copy)
	- delete commands also command
- p - paste

# Undo/Redo
- u - undo
- r - redo
- Other ways to enter insert mode:
	- A - insert at end of line
	- I - insert at start of line
- Searching: /text or ?text
	- N to go to next result, n for previous
- Search and replace:
	- %s/toreplace/newstring
	- %s/toreplace/newstring/g - for all occurrences on each line

# Configuration
- you don't want to reconfigure vim each time
- ~/.vimrc controls your configuration
	- change tab stop
	- colors
	- custom commands
	- etc!

# Advanced
- tabs / buffers/ windows
- code folding
- marks
- visual mode
- spell check
- extensions
- sessions
- autocomplete
- and more...
