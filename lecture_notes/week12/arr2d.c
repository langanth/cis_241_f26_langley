#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	//int mat[2][3];
	int mat[2][3] = {{1,2,3}, {4,5,6}};
	
	//1D Array
	int arr[7] = {1, 2, 3 ,4 ,5, 6, 7};
	
	//Standard [] Notation
	printf("arr[0] = %d, arr[1],= %d\n", arr[0], arr[1]);
	
	
	//pointer notation
	printf("arr = %p, *arr = %d, arr+1 = %p, *(arr+1) = %d\n", arr, *arr, arr+1, *(arr+1));
	

	//2D array [][] notation
	printf("mat[2][3] = %d\n", mat[2][3]);
	printf("mat[0][0] = %d\n", mat[0][0]);

	//2D pointer notation
	int *pm;
	pm = &mat[0][0];
	printf("pm = %p, mat = %p, mat[0] = %p\n", pm, mat, mat[0]);

	//2D pointer notation for rows
	printf("mat[1] = %p, &mat[1] = %p, mat+1 = %p, *(mat+1) = %p\n", mat[1], &mat[1], mat+1, *(mat+1));

	//pointer arithmetic to access columns
	printf("*(mat[2] + 3) = %d\n", *(mat[2] + 3));
	printf("*(mat[2] + 3) = %p\n", (mat[2] + 3));
	printf("*(mat[1] + 2) = %d\n", *(mat[1] + 2));	

	return 0;
}

