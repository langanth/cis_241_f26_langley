# Regular Expression

## Basic Idea
- regular expression: defines a set of one or more strings of characters
- simple string of characters -> represents itself
- special/metacharacters -> characters that do not represent themselves
- add in special characters -> match a pattern which can represent many strings

## Special Characters
- We'll focus on ERE (extended regular expression)
- delimiter:
	- marks beginning/end of expression,
	- often /
	- some utilities let you use other delimiters

| Char   | Use                               | Example                         |
| ------ | --------------------------------- | ------------------------------- |
| \      | escape special character          | a\+b matches "a+b"              |
| .      | wildcard -match any character     | .ord matches "word", "cord"     |
| [ ]    | character class                   | [bB]ob matches "bob", Bob"      |
| ^      | beginning of line                 | ^B matches "B" at start of line |
| $      | end of line                       | !$ matches "!" ending line      |
| *      | match 0 or more occurrences       | bo* matches "b", "boooo"        |
| ?      | match 0 or 1 occurrences          | bo+ matches "b", "bo"           |
| +      | match 1 or ore occurrences        | bo+ matches "bo", <br>"boooo"   |
| {n}    | match exactly n occurrences       | bo{2} matches "boo"             |
| {n, m} | match between n and m occurrences | bo{1,2} matches "bo", "boo"     |
| ()     | group characters                  | (da)* matches "da", "dada"      |
| \|     | match previous or next            | hi\|bye match "hi", "bye"       |
