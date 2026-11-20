#include <stdio.h>
#include <stdlib.h>

//typical way
typedef struct Coord{
	double x;
	double y;
	int *list;
} Coord;

// define coord struct
/*struct Coord{
	double x;
	double y;
};

//after the fact typedef
typedef struct Coord Coord;
*/
int main(void){
	int a;
	Coord c;
	c.x = 1;
	c.y = 2;
	c.list = (int *) malloc(sizeof(int)*5);

	printf("(x=%f, y=%f)\n", c.x, c.y);
	
	Coord *cp;
	cp = (Coord *) malloc(sizeof(Coord));
	cp->x = 3;
	cp->y = 4;
	cp->list = (int *) malloc(sizeof(int)*5);
	//(*cp).x = 3;
	//(*cp).y = 4;
	printf("(x=%f, y=%f)\n", cp->x, cp->y);
	//printf("(x=%f, y=%f)\n", (*cp).x, (*cp).y);
	free(c.list);
	free(cp->list);
	free(cp);
	return 0;

}
