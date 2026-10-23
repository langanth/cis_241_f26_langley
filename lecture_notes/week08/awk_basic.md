# AWK - Basic

## AWK Overview
- Pattern scanning and processing language
- data driven not procedural
	- describe data to work with
	- tell it what to do once matching data is found
- great for dealing with files with data in columns
- we'll focus on gawk the GNU implementation

## GAWK Program
- Program has the form:
```gawk
BEGIN { ... initialization gawk statements ... }
gawk commands to run on each line of the file
END { ... finalization gawk statements ... }
```
- each command has the form:
```gawk
pattern {action}
```
- action = one or more statements enclosed in braces
- pattern can be regex
- no pattern -> action performed on all lines

## Fields
- each line made up of fields
- field separator distinguishes fields
	- default = space
	- change value of FS to use other
	- or use -F option to change
- reference field by $# ($0 is entire line)
- NF = number of fields on current line
- NR = record number of current line

## Running GAWK
- gawk [options] program [input_files]
- gawk -f program_file [input_files]
- can also create script telling it to run with gawk instead
	- #! /usr/bin/env gawk -f
	- could also use path right to gawk
	- script needs to be executable
	- 

## AWK Patterns
- Patterns can be regex (/regex/)
	- ~ used for matching regex
	- !~ tests for not matching regex
- Pattern can also compare field or variable to value
	- `==`, !=, <, <=, >, >=
- BEGIN and END are special patterns
- nothing for pattern -> applies to all records
- can combine patterns with && (and), || (or)

## Variables
- can hold strings / numeric values
- typically initialized in BEGIN
- default = initialized  to empty string /0
- standard arithmetic operators available - (increment, decrement, modulo, multiply, etc.)
```EXAMPLE
#! /usr/bin/env gawk -f
BEGIN {
    FS="\t"
    CNTEXPENSIVE=0
    CNTNEW=0
}

# $3 ~ /200[0-9]/ {print NR, $0}
# $5 >= 10000 {print NR, $0}
# $3 ~/200[0-9]/ && $5 >= 10000 {print NR, $0}
$3 !~ /200[0-9]/ {CNTNEW += 1}
$5 >= 10000 {
    CNTEXPENSIVE+=1
}
NR % 5 == 0 {print $0}
END {
    print CNTEXPENSIVE
    print CNTNEW
}
```

