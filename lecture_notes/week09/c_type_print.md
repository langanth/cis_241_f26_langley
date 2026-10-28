# C - Types/Print

## Data Types:
- Non-floating point
	- int - at least 16 bits
	- long - at least 32 bits
	- long long - at least 64
- Floating point
	- float - typically 32 bits
	- double - typically 64 bits
- Character
	- char

## Printing Output
- printf(controlstring [, data])
- controlstring indicates surrounding text to print, how to format variable printing
- data is optional - used when you want to print value of variable
	- says what variable to print
	- controlstring contains format specifiers for each data being printed

## Format Specifiers
- integer: %d (may also see %i)
	- can add additional formatting info
	- add number before d - specify min width %3d
	- specify 0-fill %03d
	- specify left justify %-3d
- float/double: %f, %e, %g
	- %f: fixed point notation
	- %e: exponential notation
	- %g: chooses between normal and exponential (drops trailing)
- number before decimal - total width to use
- number after decimal - # places after decimal pt
- use 0 for 0-fill, use - for left justify
- char: %c
- string: %s
	- same with int/float you can add
		- number to specify width
		- - to specify left-justify

## Example

```C
#include <stdio.h>
int main(void) {
    int x = 5;
    long l = 134903;
    long long ll = 390839829902920993;
    float f = 837.89;
    double num = 89481231.0990208;
    char c = 'h';
    char s[] = "hello";

    printf("hello world\n");
    printf("my int = %-5d\n", x);
    printf("%20.3f %15.2e %g\n", num, num, num);
    printf("my char = %c\n", c);
    printf("my msg = %s\n", s);
    return 0;
}
```