#include <stdio.h>
#include <stdlib.h>


double sum(double, double);
void pointerfun(int *);

//factorial(5) -> 1 * 2 * 3 * 4 * 5 -> 120
long factorial(int);
long rFactorial(int);
void fib(int *arr, int size);
//Linear search: given an array return the element that the value
// can be found at

int linear_search(const int arr[], int n, int target);

int main(void){
	
	double num1 = 10.0;
	double num2 = 3.5;

	double tot = sum(num1, num2);
	printf("num1 = %f, num2 = %f, sum = %f\n", num1, num2, tot);
	

	int  *p = (int *) malloc(sizeof(int));
	*p = 4;
	printf("p val before = %d\n", *p);
	printf("p before = %p\n", p);
	pointerfun(p);
	printf("p after = %p\n", p);
	printf("p val after = %d\n", *p);

	free(p);
	int num = 5;
	int fact = factorial(num);
	int rfact = rFactorial(num);
	printf("fact factorial = %d\n", fact);
	printf("rfact rFactorial = %d\n", rfact);
	
	int arr[8];
	int length = sizeof(arr) / sizeof(int);
	fib(arr, length);
	for (int i=0; i < length; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	int nums[] = {5, 7, 3, 1, 2, 6, 4, 10};
	length = sizeof(nums) / sizeof(int);
	int result = linear_search(nums, length, 6);
	printf("6 can be found at index %d\n", result);

	return 0;

}

double sum(double a, double b){
	return a+b;
}

void pointerfun(int *p){
	*p = *p * 2;
	printf("p va in fun = %d\n", *p);
	p = p+1;
	printf("p in fun = %p\n", p);
}

long factorial(int n){
	long result  = 1;
	for  (int i = 2; i <= n; i++){
		result *= i;
	}
	return result;
}

long rFactorial(int n){
	if (n <= 1){
		return 1;
	}else{
		return n * rFactorial(n - 1);
	}
}
//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55
void fib(int *arr, int size){
	if (arr == NULL || size == 0){
		return;
	}
	for (int i=0; i < size; i++){
		if (i < 2){
			arr[i] = i;
		}else{
			arr[i] = arr[i - 2] + arr[i - 1];
		}
	}
}


int linear_search(const int arr[], int n, int target){
	for (int i=0; i < n; i++){
		if (arr[i] == target){
			return i;
		}
	}
	return -1;
}




