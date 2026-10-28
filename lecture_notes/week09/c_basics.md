# Type Conversion
- implicit type conversions
	- perform operation with mismatched types
	- assigning values to variables
	- calling functions with type other than specified
	- Examples:
		- int x = 5.0;
		- double y = 5.0/2
		- char c = 50
- Explicit Type Conversions
	- typecasting
	- (type) expression;

## Operators
- Assignment: =
- Mathematical: 
	- +, -, /, `*`
	- Mod (remainder): `%`
	- All can be combined with = to operate and assign
- Increment/decrement: i++, i--
- Comparison: `==`, !=, >, <, >-, <=

## Logical Operators
- Boolean not: !
- Boolean and: &&
- Boolean or: ||
- Combinations only execute as far as they need to
- Depending on C version, may not have bool
	- Introduced in C99
	- Need to `#`include <stdbool.h>
- Otherwise, itns act as bools (0 is false)

## Control Structures - if

```C
if (expression) {
	statement;
}
else {
	statement;
}

if (expression) statement;
```

## Ternary Operator
- shorthand for some ifs
- expression -- just chooses which expression based on value of another

```C
expression ? expression: expression
```

## Example

```C
#include <stdio.h>
#include <stdbool.h>
int main(void) {
    // Booleans
    bool b = true;
    bool b2 = 0;
    bool eq = (b==b2);
    printf("%d\n", eq);

    // Implicit type conversion
    int x = 70.0;
    double y = 1000.0/2;
    char c = 65;
    printf("x = %d, y = %f\n", x, y);
    printf("char = %c\n", c);
    printf("y casted to int = %d\n", (int)y);
    printf("x converted to char = %c\n", (char)x);

    // Operators
    x *= 2;
    printf("x = %d\n", x);

    // Conditionals
    if (x > y) {
        printf("x is greater\n");
    }
    else if (x < y) {
        printf("x is less\n");
    }
    else {
        printf("they are equal\n");
    }

    // Ternary operator
    double z = x>y ? x : y;
    printf("%f\n", z);

    return 0;
}
```