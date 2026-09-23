#include <stdio.h>
#include "point.h"

struct Point
{
	int x;
	int y;
};

typedef Point* PPoint;

void PrintPoint(PPoint p)
{
	printf("%d, %d\n", p->x, p->y);
}