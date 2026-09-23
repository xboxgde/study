#include <stdio.h>
#include <stdlib.h>
#include "point.h"

void PrintPoint(PPoint value)
{
	printf("%d, %d\n", value->x, value->y);
}

void SetPoint(PPoint value, int n1, int n2)
{
	value->x = n1;
	value->y = n2;
}

PPoint AllocPoint()
{
	PPoint p = (PPoint)malloc(sizeof(Point));
	return p;
}

void FreePoint(PPoint p)
{
	free(p);
}
