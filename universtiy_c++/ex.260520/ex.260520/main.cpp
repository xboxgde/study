#include <stdio.h>

int Add(int a, int b)
{
	return a + b;
}

void PrintData(int result)
{
	printf("%d\n", result);
}

int main()
{
	int a = 10, b = 20;
	int result = Add(a, b);

	PrintData(result);



}

//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main()
//{
//	int capacity = 15;
//	printf("input integer : ");
//	scanf("%d", &capacity);
//
//	int* arr = (int*)malloc(sizeof(int) * capacity);
//	
//	for (int i = 0; i < capacity; ++i)
//		arr[i] = i + 1;
//	
//	for (int i = 0; i < capacity; ++i)
//		arr[i] *= 10;
//		
//	for (int i = 0; i < capacity; ++i)
//		printf("%d\n", arr[i]); // 10, 20, 30, 40
//
//	free(arr);
//}

//#include <stdio.h>
//#include <stdlib.h>
//#define capacity 4 // 세미콜론( ; ) 안붙임
//
//int main()
//{
//
//	int arr[capacity] = { 0 }; 
//
//	for (int i = 0; i < capacity; ++i)
//		arr[i] = i + 1;
//
//	for (int i = 0; i < capacity; ++i)
//		arr[i] *= 10;
//	
//	for (int i = 0; i < capacity; ++i)
//		printf("%d\n", arr[i]); // 10, 20, 30, 40
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main()
//{
//	int n = 100;
//	double d = 9.99;
//	int* p1 = &n;
//	double* p2 = &d;
//	void* pv = NULL; // 어떤 타입이든 들어갈 수 있음.
//
//
//	// 참조할 때는 형식을 지정해 주어야함.
//	pv = &n;
//	printf("%d\n", *(int*)pv);
//	pv = &d;
//	printf("%g\n", *(double*)pv);
//
//
//	printf("%d, %g\n", n, d);
//	printf("%d, %g\n", *p1, *p2);
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main()
//{
//	int n = 0x44434241;
//	char* p = (char*)&n;
//	// %x 16진수, %o 8진수, %d 10진수
//	printf("%x %x %x %x\n", p[0], p[1], p[2], p[3]);
//	printf("%c %c %c %c\n", p[0], p[1], p[2], p[3]);
//	printf("%x %c \n", ((char*)&n)[0], ((char*)&n)[0]); //시험문제
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main()
//{
//	char c = 10;
//	int n = 10;
//
//	n = (int)c; // explicit 명시적 형식 변환 - 내가
//	// n = c; // implicit 암묵적 형식 변환 - 컴파일러
//	printf("%d %d\n", c, n);
//}