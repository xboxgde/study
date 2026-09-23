#include <stdio.h>
#include "point.h"

int main()
{
	Point* p1 = AllocPoint();
	Point* p2 = AllocPoint();

	SetPoint(p1, 1, 2);
	SetPoint(p2, 4, 5);

	PrintPoint(p1);
	PrintPoint(p2);


	FreePoint(p1);
	FreePoint(p2);

}
