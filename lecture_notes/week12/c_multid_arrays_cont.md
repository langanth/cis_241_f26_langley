# 2D Arrays Continued

## 2D Arrays - Dynamic Allocation
`int *mat = (int *) malloc(nrows*ncols*sizeof(int));`
- one contiguous block of memory
- can't use `[] []` notation:
- Can use `[]` notation
- Pointer Arithmetic

```C
int **mat = (int **) malloc (norws*sizeof(int *));
for (int i=0; i<nrows; i++){
	*(mat+i) = (int *) malloc(ncols*sizeof(int));
}
```
- Could also use `mat[i]` inside the loop
- can use `[] []` notation now
- No longer one contiguous block of memory

```C
int *A = (int *) malloc(nrows*ncols(sizeof(int));
int **mat = (int **) malloc(nrows*sizeof(int *));
for (int i=0; i<nrows; i++){
	mat[i] = A + i*ncols;
}
```
- Allows use of `[][]` notation
- Memory for actual entries is contiguous
## Example

```C
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int nrows = 3;
    int ncols = 4;

    // Option 1
    int *mat = (int *) malloc(nrows*ncols*sizeof(int));
    for (int i=0; i<nrows*ncols; i++) {
        *(mat+i) = i;
    }
    printf("mat[1] = %d\n", mat[1]);
    //mat[1][2] //can't do this
    // Important conversion from 2d to 1d index
    printf("mat[1][2] = %d\n", *(mat+1*ncols + 2));

    // Option 2
    int **mat = (int **) malloc(nrows*size(int *));
    for (int i=0; i<nrows; i++) {
        *(mat+i) = (int *) malloc(ncols*sizeof(int));
    }


    return 0;
}
```