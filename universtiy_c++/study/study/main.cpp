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

int main()
{

	for (int i = 1; i <= 10; i++)
	{
		//printf("%-5d", i); //<- 좌정렬
		printf("%5d", i);  //<-   우정렬
	}
	printf("\n");
}