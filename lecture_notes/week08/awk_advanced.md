# AWK - Advanced

## Associative Arrays
- do not need to initialize
- simply refer to elements
	- ex: arr[$1] = 1
- can test for inclusion:
	- ex: 2 in arr
	- tests if 2 is a key in arr

## Functions
- length(str) = number of characters
- int(num) = integer portion of num (not rounded)
- index(str1, str2) = starting index of str2 in str1 (1-based indexing)
- split(str, arr, del) = split str by del, place elements in arr (returns number of elements)
- mathematical functions are also available
- sprintf(fmt, args) = string formatting
- substr(str, pos, len) = access substring
- tolower(str) = convert to lowercase
- toupper(str) = convert to uppercase

## Other Predefined Variables
- OFS = output field separator (default space)
- ORS = output record separator (default newline)
- RS = input record separator (default newline)

```EXAMPLE
#! /usr/bin/env gawk -f
BEGIN {
    FS="\t"
    OFS=","
    SUM=0
    CNTNEW=0
}
$3 ~ /200[0-9]/ {
    SUM+=$5
    CNTNEW += 1
}
{makes[$1] += 1}
{print NR, toupper($2)}
END {
    print SUM, CNTNEW
    for (key in makes) print key, makes[key]
}
```