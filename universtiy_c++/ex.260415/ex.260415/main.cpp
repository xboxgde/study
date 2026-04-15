#include <stdio.h>

void PrintArray(int*p, int num)
{
	for (int i = 0; i < num; ++i)
	{
		printf("%5d", p[i]);
	}
	printf("\n");

}

int main()
{

	int arr[4] = { 10, 20, 30, 40 };


	PrintArray(arr, 4);
	PrintArray(arr + 2, 2);
	PrintArray(arr, 2);


}

//#include <stdio.h>
//
//int main()
//{
//
//	int n = 10;
//	int* p1 = &n;
//	int* p2 = &n;
//	int* p3 = p1;
//	int** pp = &p1;
//
//	printf("%d %d %d %d %d\n", n, *p1, *p2, *p3, **pp);
//	printf("%p %p %p %p %p\n", &n, &*p1, &*p2, &*p3, &**pp);
//	printf("%p %p %p %p %p\n", n, p1, p2, p3, *pp);
//
//}