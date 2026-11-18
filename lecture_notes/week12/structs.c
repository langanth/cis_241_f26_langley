#include <stdio.h>
#include <stdlib.h>

typedef struct Coord{
	double x;
	double y;
	int *list;
} Coord;


int main(void){
	
	Coord c1;
	c1.x = 5;
	c1.y = 10;
	c1.list = (int *) malloc(sizeof(int)*5);

	printf("(%f,%f)\n", c1.x, c1.y);
	
	free(c1.list);
	
	Coord *cp;
	cp = (Coord *) malloc(sizeof(Coord));
	//(*cp).x = 12;
	//(*cp).y = 8;
	cp->x = 12;
	cp->y = 8;
	cp->list = (int *) malloc(sizeof(int)*5);
	printf("(%f,%f\n", cp->x, cp->y);
	//printf("(%f,%f\n", (*cp).x, (*cp).y);

	free(cp->list);
	free(cp);
	


	return 0;
}
