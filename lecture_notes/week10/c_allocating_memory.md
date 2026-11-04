# C - Dynamic Memory Allocation

## Allocating Memory
- malloc(size) -> request a certain number of bytes of memory
	- on the heap
	- contiguous
	- returns the address of start of block
	- needs to be cast to appropriate pointer
- memory for one int:

```C
int *p;
p = (int *) malloc(sizeof(int));
```

## Allocating More Memory
- Use malloc, but request more bytes
- Often used to malloc memory for an array
```C
int *p;
p = (int *) malloc(sixeof(int)*100);
```
- calloc(count, size)
	- count -> number of items
	- size -> size of item
	- allocated contiguously
	- initialized to 0

```C
int p*;
p = (int *) calloc(100, sizeof(int));
```
- realloc(ptr, sizw)
	- ptr -> current pointer to memory trying to resize
	- size -> overall size wanted
- may not be enough room to enlarge
	- creates new, copies to new, frees the old
	- additional not guaranteed to be 0 filled
```C
int *p = (int *) malloc(sizeof(int)*10);
p = (int *) realloc(ptr, sizeof(int)*20);
```

## Freeing Memory
- free(ptr)
```C
int p* = (int *) malloc(sixeof(int)*10);
free(p);
```

## Example
```C
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // don't have the right to memory it points to yet
    int *p;
    printf("p before malloc = %p\n", p);
    
    // malloc - asks for memory for single int
    p = (int *) malloc(sizeof(int));
    
    printf("p after malloc = %p\n", p);
    printf("value at p before setting = %d\n", *p);
    *p = 10; // changes value stored at emmory
    printf("value at p after setting = %d\n", *p);

    // malloc - asking for memory for many ints
    int *p3 = (int *) malloc(sizeof(int)*10);
    printf("p3 after malloc = %p\n", p3);

    // calloc - initialized to 0
    int *p2;
    p2 = (int *) calloc(100, sizeof(int));
    printf("p2 after calloc = %p\n", p2);
    printf("value at p2 before setting = %d\n", *p2);
    *p2 = 80;
    printf("value at p2 after setting = %d\n", *p2);

    char *pc;
    pc = (char *) malloc(20*sizeof(char));
    printf("pc after malloc = %p\n", pc);

    // realloc - try with 12 to see difference
    p3 = (int *) realloc(p3, sizeof(int)*1000);
    printf("p3 after realloc = %p\n", p3);

    // can't forget to free!
    free(p);
    free(p2);
    free(p3);
    free(pc);

    return 0;
}
```