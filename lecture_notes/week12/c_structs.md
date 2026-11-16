
# Structs
- The closest you'll get to OO in C
- Allows you to group together multiple pieces of data

```C
typedef struct Coord{
	double x;
	double y;
} Coord;
```
- Previous just defines the struct
- need to actually declare one and set values
- Declare like any other variable except now with type Coord
- Access member with: .
- Have a pointer to struct, access member with: ->

```C
Coord c1
c1.x = 5;
c1.y = 10;
```
- Can contain regular data types, pointers, arrays, other structs
- Can allocate on stack or heap (dynamic with malloc)
- Can create pointers to structs

```
```
```C
#include <stdio.h>
#include <stdlib.h>


// typical way
typedef struct Coord {
    double x;
    double y;
    int *list;
} Coord;


/*
// define coord struct
struct Coord {
    double x;
    double y;
};

// after the fact typedef
typedef struct Coord Coord;
*/

int main(void) {
    int a;
    Coord c;
    c.x = 10;
    c.y = 5;
    c.list = (int *) malloc(sizeof(int)*5);

    printf("(%f,%f)\n", c.x, c.y);
  
    Coord *cp;
    cp = (Coord *) malloc(sizeof(Coord));
    cp->x = 12;
    cp->y = 8;
    cp->list = (int *) malloc(sizeof(int)*5);
    //(*cp).x = 12;
    //(*cp).y = 8;

    printf("(%f,%f)\n", cp->x, cp->y);
    
    free(c.list);
    free(cp->list);
    free(cp);
    return 0;
}

```