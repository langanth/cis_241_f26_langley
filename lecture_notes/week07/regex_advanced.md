# Regular Expression - Advanced
## Recall: GREP
- We used to search for lines containing certain string
- grep: global regular expression print
- Can search for patterns, not just specific strings by expressing regex
- Add -E to search for ERE pattern

## Misc Notes (Regex in general)
- Matches longest possible string
- can also use character classes (like with tr)
- examples
	- `[[:alpha:]]`
	- `[[:alnum:]]`
	- `[abc]`
	- `[^a-z]` everything except a through z
