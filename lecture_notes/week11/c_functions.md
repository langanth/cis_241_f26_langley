# Functions
- Can go or after main
- If after, must put function prototype before
	- double sum(double a, double b); or
	- double sum(double, double);
- functions that don't return anything have void return type
- can only return 1 value
- best to get in habit of using function prototype and defining later
	- will come up again when we look at bigger programs
- Pass-by-reference or Pass-by-value?
	- C is always pass-by-value
		- sometimes that value is a value
		- sometimes it is a pointer

## Functions and Pointers
- if you want to be able to change the variable:
	- pass a pointer
	- function declaration must specify argument is pointer
- Passing arrays
	- always passes a pointer
	- typically pass size as a separate argument
- returning arrays
	- either return pointer (or modify in place)

```C
#include <stdio.h>
#include <stdlib.h>

double sum(double, double);
void pointerfun(int *);

int main(void) {

    double d1 = 10.0;
    double d2 = 4.5;
    double tot = sum(d1,d2);
    printf("d1 = %f, d2 = %f, sum = %f\n", d1, d2, tot);

    int *p = (int *) malloc(sizeof(int));
    *p = 4;
    printf("p val before = %d\n", *p);
    printf("p before = %p\n", p);
    pointerfun(p);
    printf("p after = %p\n", p);
    printf("p val after = %d\n", *p);

    free(p);
    return 0;
}

double sum(double a, double b) {
    return a+b;
}

void pointerfun(int *p) {
    *p = *p * 2;
    printf("p val in fun = %d\n", *p);
    p = p+1;
    printf("p in fun= %p\n", p);
}
```