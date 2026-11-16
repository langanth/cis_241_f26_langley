#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int nrows = 3;
	int ncols = 4;
	
	//Option 1 - Allocate all memory for 2D array
	int *mat1 = (int *) malloc(nrows*ncols*sizeof(int));
	for (int i=0; i<nrows*ncols; i++){
		*(mat1+i) = i;
	}
	printf("mat1[1] = %d\n", mat1[1]);
	//mat[1][2] is something we cannot do
	//conversion from 2d to 1d index
	printf("mat1[1][2] = %d\n", *(mat1+1*ncols + 2));

	//Option 2 - Using [][] notation, but no contiguous block
	// ** -> a pointer to a pointer
	
	int *A = (int *) malloc(nrows*ncols*sizeof(int));
	int **mat2 = (int **) malloc(nrows*sizeof(int *));	
	for (int i=0; i<nrows; i++){
		mat2[i] = A + i*ncols;
	}

	//Option 2.2
	int **mat3 = (int **) malloc(nrows*sizeof(int *));
	for (int i=0; i<nrows; i++){
		*(mat3+i) = (int *) malloc(ncols*sizeof(int));
	}
	
	return 0;
}
