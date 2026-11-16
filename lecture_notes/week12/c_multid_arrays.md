# C - Multidimensional Arrays

## 2D Arrays
- Example `int mat[2][3];`
	- 2 rows, 3 columns
- Can initialize when declaring:
	- `int mat[2][3] = {{1,3,4}, {8,2,5}};`
- Access elements: `mat[row_num][column]`
- Declared on the stack
- One contiguous block of memory underneath
- `mat[i][j]` = an element of the 2d array
- mat = address of first element
- `mat[i]` = `&mat[i]` = address to first element of row i
- `mat + i` = `*mat+i` = ^ address to first element of row i
- Think of `mat[i]` as a pointer to an array (row)
- Doing pointer arithmetic on mat advances by the whole length of the sub arrays
- Can alsu use pointer arithmetic to access into certain col
- `*(mat[i] + j)` = `mat[i][j]`
- `*(*mat+i) + j)` = `mat[i][j]`
	- recall `*(mat+i)` is memory address to start of row i
	- advance this by j cols, then dereference to get actual value stored
- What about `mat+i + j`?

## Example

```C
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // 1D Array Recap
    int arr[7] = {1,2,3,4,5,6,7};
    // standard [] notation
    printf("arr[0] = %d, arr[1] = %d\n", arr[0], arr[1]);
    // pointer notation
    printf("arr = %p, *arr = %d, arr+1 = %p, *(arr+1) = %d\n", arr, *arr, arr+1, *(arr+1));

    // 2D array o
    int mat[3][4] = {{1,3,4,8},{10,9,7,2},{5,6,11,12}};

    printf("mat[2][3] = %d\n", mat[2][3]);

    int *pm;
    pm = &mat[0][0];
    printf("pm = %p, mat = %p, mat[0] = %p\n", pm, mat, mat[0]);
    printf("mat[1] = %p, &mat[1] = %p mat+1 = %p *(mat+i) = %p\n", mat[1], &mat[1], mat+1, *(mat+1));
    
    // pointer arithmetic to access columns
    printf("*(mat[2] + 3) = %d\n", *(mat[2]+3));
    printf("*(*(mat+2) + 3) = %d\n", *(*(mat+2)+3));
    
    // careful: not the same thing
    // kept advancing by rows
    printf("*((mat+2) +3) = %d\n", *((mat+2)+3)); 
    return 0;
}


```