#include <stdio.h>
#include <stdlib.h>

int main(void){
	int nrows = 3;
	int ncols = 4;
	
	//Option 1
	int *mat = (int *) malloc(nrows*ncols*sizeof(int));	
	for (int i=0; i<nrows*ncols; i++){
		*(mat+i) = i;
	}
	
	for (int i=0; i<nrows*ncols; i++){
		printf("%d ", *(mat+i));
	}
	printf("\n");
	printf("mat[1][2] = %d\n", *(mat+1*ncols+2));
	printf("%p\n", mat);
	
	free(mat);	
	
	//Option 2.1
	//Using [][], but not in a contiguous block
	// ** -> pointer to a pointer
	
	int *A = (int *) malloc(nrows*ncols*sizeof(int));
	int **mat2 = (int **) malloc(nrows*sizeof(int *));

	for (int i=0; i<nrows; i++){
		mat2[i] = A + i*ncols;
	}
	
	for (int i=0; i<nrows; i++){
		for (int j=0; j<ncols; j++){
			mat2[i][j] = i * ncols + j; 
		}
	}
	printf("%p\n", &mat2[0][0]);	
	printf("%d\n", mat2[0][1]);

	//Option 2.2
	int **mat3 = (int **) malloc(nrows*sizeof(int*));
	for (int i=0; i<nrows; i++){
		*(mat3+i) = (int *) malloc(ncols*sizeof(int));
	}

	free(A);
	free(mat2);
	free(mat3);
	

	return 0;
}
