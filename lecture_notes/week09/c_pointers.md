# C - Pointers

## Basic Idea
- What is a pointer?
	- A different variable type that stores a memory address
	- Associated with a specific variable type, aka
		- int pointer stores the memory address of an int
		- float pointers store the memory address of a float
		- char pointer stores the memory address of a char

## Relevant Operators
- & -> reference, aka "address of" operator
	- used to get the memory address of a variable
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

## Assigning Values
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

## Example
```c

#include <stdio.h>

int main(void) {
    /*
    int *iptr;
    char *cptr;
    float *fptr;
    */

    int a = 5;
    int b = 6;
    int c;
    int *iptr;
    int *jptr;

    //*jptr = 80; //this is bad!

    printf("iptr before initializing = %p\n", iptr);
    printf("jptr before initializing = %p\n", jptr);

    jptr = &a;
    iptr = &c;

    *iptr = 100;

    printf("iptr = %p\n", iptr);
    printf("value at iptr = %d\n", *iptr);
    printf("jptr = %p\n", jptr);
    printf("value at jptr = %d\n", *jptr);

    printf("address of b = %p\n", &b);
    printf("b = %d\n", b);

    return 0;
}
```

```C
#include <stdio.h>

int main (void) {

// A pointer is a reference to the memory address of a variable or value

// * is used to establish a pointer, but also pull the value found at
//  that reference
int age = 21;
int *agePtr;

printf("Age address: %p\n", age);
printf("agePtr address: %p\n", agePtr);

printf("Age address: %p\n", &age);
printf("Age value: %d\n", age);

printf("Value of age: %d\n", age);
printf("Value of agePtr: %d\n", *agePtr);

printf("Size of age: %d bytes\n", sizeof(age))
printf("Size of agePtr: %d bytes\n", sizeof(agePtr))
}
```