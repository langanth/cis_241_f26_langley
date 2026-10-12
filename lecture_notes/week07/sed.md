# Sed

## Overview
- sed -> stream editor
- used to edit files
- general form:

```bash
sed [options] '/pattern/ command'
input_file
sed [options] 'range command'
input_file
```

## Helpful Options
- `-E` -> use extended regular expression
- `-f program_filename` -> read sed commands from file named `program_filename`
- `--in-place [=suffix]` -> modify file in place, optionally give suffix to create backup file with suffix extension

## Common Uses
- Deleting lines:
	- `sed -E '/^Totals.*/ d'`
	- `sed '4 d'`
	- `sed '1, 4 d'`
- $ in range form =end of file
- Substituting Text:
	- `sed -E 's/pattern_to_match/replace_with/'`
	- `sed -E 's/ *$//' filename`
- default: only replaces 1st occurrence of pattern on each line
- can specify to replace others:
	- replace all occurrences
		- `sed -E 's/pattern_to_match/replace_with/g' fname.txt`
	- replace certain occurrence
		- `sed -E 's/pattern_to_match/replace_with/2' fname.txt`
- combine line range with substitution
	- `sed '1, 3 s/pattern_to_match/replace_with/' fname.txt`
- use matched pattern (or subexpression) in `replace_with`
	- `\1,\2,...` refer to sub-expressions grouped in parentheses
	- `&` -> entire pattern matched