#include <stdio.h>

int main()
{
	int arr[4] = { 5, 3, 8, 1 };
	int* p = &arr[3];

	for (int i = 4; i >= 0; i--)
	{
		printf("%d\n", p[-i]);
	}

	printf("%d\n", p[-3]);
	printf("%d\n", p[-2]);
	printf("%d\n", p[-1]);
	printf("%d\n", p[-0]);
}