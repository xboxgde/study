#include <stdio.h>
//server <- 먼저 셍성

int FindData(int* pa, int size, int (*cmp)(int))
{
	for (int i = 0; i < size; ++i)
		if ( cmp(pa[i]) )
			return i;
	return -1;
}

//client <- server 이후 생성
int Predicate1(int key)
{
	return key > 50 && key % 5 == 0;
}


int main()
{
	int arr[10] = { 5, 64, 89, 12, 34, 32, 90, 29, 18, 37 };
	int index = FindData(arr, 10, Predicate1);

	if (index != -1)
	{
		printf("[%d] : %d\n", index, arr[index]);
	}
}

//#include <stdio.h>
////server <- 먼저 셍성
//void PrintData(const int* pa, int size, void (*pf)(int ))
//{
//	for (int i = 0; i < size; ++i)
//		pf(pa[i]); // server -> client (callback)
//	printf("\n");
//}
////client <- server 이후 생성
//void Print1(int data) // callback function
//{
//	if (data % 2 == 0)
//		printf("[%d] ", data);
//}
//void Print2(int data)
//{
//	printf("[%d] ", data);
//}
//void Print3(int data)
//{
//	printf("====");
//	printf("[%d]", data);
//	printf("====\n");
//}
//
//int main()
//{
//	int a[10] = { 10, 50, 80, 30, 45, 62, 21, 96, 31, 87 };
//	PrintData(a, 10, Print1); // client -> server (call)
//	PrintData(a, 10, Print2);
//	PrintData(a, 10, Print3);
//}

//#include <stdio.h>
//
//void Print(int a, int b)
//{
//	printf("%d, %d\n", a, b);
//}
//
//void Swap(int* pa, int* pb)
//{
//	int t;
//
//	t = *pa;
//	*pa = *pb;
//	*pb = t;
//}
//
//int main()
//{
//	int n = 10;
//	int* p1 = &n;
//
//	void (*p2)(int , int );
//
//	p2 = Print;
//
//	printf("%d\n", *p1);
//	Print(1, 2);
//	p2(1, 2);
//}