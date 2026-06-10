#include <stdio.h>

void Print(int a, int b)
{
	printf("%d, %d\n", a, b);
}

void Swap(int* pa, int* pb)
{
	int t;

	t = *pa;
	*pa = *pb;
	*pb = t;
}