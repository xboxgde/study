#include "printswap.h"

int main()
{
	int a = 10;
	int b = 20;

	Print(a, b);
	Swap(&a, &b);
	Print(a, b);

}