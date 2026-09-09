#include <stdio.h>
#include <conio.h>
// 연산자
/*
+
-
*
/
%
<<
>>
++
--

*/

// 제어문
/*
	if - else, if - else if - else, switch - case,

	for, while <- 안나옴

	for(int i = 0; i < n; ++i)
	{
		
	}

	if ()
	{
		
	}
	else
	{
		
	}

	switch ()
	{
	case 1:
		break;
	default:
		break;
	}

	sizeof() <- 자료형 크기 확인
*/

//입출력
/*
#include <conio.h>    <- 필ㅅ

_getch();

printf();

*/


//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** pp = &p;
//
//	*p = a;
//
//	p = &a;
//
//	*pp = p;
//
//	pp = &p;
//
//	int s = _getch();
//}

//int main()
//{
//
//	for (int i = 1; i <= 10; i++)
//	{
//		//printf("%-5d", i); //<- 좌정렬
//		printf("%5d", i);  //<-   우정렬
//	}
//	printf("\n");
//}

//#include <stdio.h>
//
//int main()
//{
//	// 논리 연산자
//	// 비트 (논리) 연산자 : AND(&) OR(|) XOR(^) NOT(~)
//	int a = 5; // 0101
//	int b = 3; // 0011
//
//	printf("%d\n", a & b); // 0001
//	printf("%d\n", a | b); // 0111
//	printf("%d\n", a ^ b); // 0110
//	printf("%d\n", ~a); // 
//	printf("%08X\n", ~a);
//	printf("%d\n", ~b);
//	printf("%08X\n", ~b);
//}

//int main()
//{
//	int arr[4] = { 5, 3, 8, 1 };
//	int* p = &arr[3];
//	
//	for (int i = 3; i >= 0; --i)
//	{
//		printf("%d\n", p[-i]);
//	}
//
//}

#include <stdio.h>
void PrintArray(int arr[], int size)
{
	for (int i = 0; i < size; ++i)
		printf("%5d", arr[i]);
	printf("\n");
}
int main()
{
	int arr[10] = { 5, 7, 3, 4, 6, 2, 1, 9, 7, 3 };
	PrintArray(arr, 10);

	int a = 10, b = 20;
	int result = a + b;
	printf("result = %d\n", result);
	printf("result = %d\n", result);
	printf("result = %d\n", result);
}