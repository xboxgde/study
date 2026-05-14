#include <stdio.h>
#include <stdlib.h>

int* AllocArray(int cap)
{
	return (int*)malloc(sizeof(int) * cap);
}
void IntArray(int* p, int size)
{
	for (int i = 0; i < size; ++i)
		p[i] = (i + 1) * 10;
}
void PrintArray(int* p, int size)
{
	for (int i = 0; i < size; ++i)
		printf("%d", p[i]);
	printf("\n");
}
void FreeArray(int* p)
{
	free(p);
}

int main()
{
	int* p = AllocArray(4);

	IntArray(p, 4);
	PrintArray(p, 4);
	FreeArray(p);
}

//#include <stdio.h>
//#include <stdlib.h>
//
//int* AllocInteger(int cap)
//{
//	return (int*)malloc(sizeof(int) * cap);
//}
//void IntArray(int* p, int size)
//{
//	for (int i = 0; i < size; ++i)
//		p[i] = (i + 1) * 10;
//}
//void PrintArray(int* p, int size)
//{
//	for (int i = 0; i < size; ++i)
//		printf("%d", p[i]);
//	printf("\n");
//}
//void FreeInteger(int* p)
//{
//	free(p);
//}
//
//int main()
//{
//	int* p = AllocInteger(4);
//
//	IntArray(p, 4);
//	PrintArray(p, 4);	
//	FreeInteger(p);
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int n = 10;
//
//	int* p = (int*)malloc(4);
//	*p = 10;
//
//	printf("%d %d\n", n, *p);
//	free(p);
//
//}

//#include <stdio.h>
//
//int gn = 10; //전역변수 GD
//
//int main()
//{
//	const char* s = "Hello"; // s = stack, "Hello" = GD
//	int n = 10; // stack
//	int* p = &n; 
//	static int sn = 10; //정적 : GD
//
//	printf("%p %p %p\n", s, &gn, &sn);
//	printf("%p %p %p\n", &s, &n, &p);
//}