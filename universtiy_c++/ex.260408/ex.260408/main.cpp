#include <stdio.h>

void PrintAddress(int* a, int* b);
void PrintData(int a, int b);

int main()
{

	int n1 = 10;
	int n2 = 10;

	PrintData(n1, n2);
	PrintAddress(&n1, &n2);

}

void PrintAddress(int* a, int* b)
{
	printf("%p %p\n", a, b);
}

void PrintData(int a, int b)
{
	printf("%d %d\n", a, b);
}

//#include <stdio.h>
//
//void PrintData(int a, int* b);
//
//
//int main()
//{
//
//	int n1 = 10;
//	int n2 = 10;
//	
//	PrintData(n1, &n2);
//
//}
//
//void PrintData(int a, int* b)
//{
//	printf("%d, %d\n", a, *b);
//	a = 20;
//	*b = 20;
//}
