#include <stdio.h>

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

getchar();

printf();

*/


int main()
{
	int a = 10;
	int* p = &a;
	int** pp = &p;

	*p = a;

	p = &a;

	*pp = p;

	pp = &p;



}
