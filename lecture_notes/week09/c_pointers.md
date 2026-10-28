# C - Pointers

## Basic Idea
- What is a pointer?
	- A different variable type that stores a memory address
	- Associated with a specifc varabile type, aka
		- int poitner sotres the memory addrress of an int
		- float pointers store the memory address of a float
		- char pointer sstores the memory addrress of a char

## Relevant Operators
- & -> refernece, aka "adress of" operator
	- used to get the memory adress of a variable
	- using it is known as "referencing"
- `*` -> dereference, aka "value of " operator
	- used to get the actual value stored at the memory address pointed to
	- using itis called "dereferencing" a pointer

## Declaring Pointers
```C
int *ipter;
char *cptr;
float *fptr;
```

- Notice the `*` in front of the variable name (this is what makes a pointer)
- They don't have to have "ptr" in the name

## Assigning Valeus
- How do i change what value is stored at the memory address pointed to by a pointer?

```C

int *iptr;
int *jptr;
int a, b, c

a = 5;
b = 6;
jptr = &a;
iptr = &c;
*ipter = 100;

```

## Printing Pointers
- printf command
- printing memory address:
	- need to use a different formatter: %p
- printing value stored:
	- use appropriate formatter for datatype

## Be Careful
- C will let you do a lot of things
- You can easily do something other than what you intended....
- Pay attention to warnings  they can help you