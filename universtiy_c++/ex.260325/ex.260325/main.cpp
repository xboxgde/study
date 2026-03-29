//ctrl + k + c -> 주석
//ctrl + k + u -> 주석 해제
#include <stdio.h>

int main()
{
	int sum = 0;

	for (int i = 1; i <= 10; i++)
	{
		if (i % 2 == 0)
		{
			sum += i;
			printf("%d\n", sum);
		}
		
	}
}

//#include <stdio.h>
//
//int main()
//{
//	for (int i = 1; i <= 10; i++)
//	{
//		if (i % 2 == 0)
//			printf("%d\n", i);
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	int sum = 0;
//
//	for (int i = 1; i <= 5; i++)
//	{
//		sum += i;
//		printf("sum = %d\n", sum);
//	}
//}

//#include <stdio.h>
//#include <conio.h>
//
//int main()
//{
//	int num = 1;
//	
//	while (num)
//	{
//		if (_getch() == 'q')
//			num = 0;
//		printf("hello\n");
//	}
//}

//#include <stdio.h>
//#include <conio.h>
//
//int main()
//{
//	while ( true )
//	{
//		if (_getch() == 'q')
//			break;
//		printf("hello\n");
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	
//	for (int i = 0; i < 5; i += 2)
//	{
//		printf("hello : %d\n", i);
//	}
//	printf("\n");
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (; ; )
//	{
//		printf("hello : %d\n", i);
//	}
//	printf("\n");
//}

//#include <stdio.h>
//
//int main()
//{
//	for (int i = 0; i < 5; i++)
//	{
//		printf("hello : %d\n", i);
//	}
//	printf("\n");
//}

//#include <stdio.h>
//
//int main()
//{
//	for (int i = 0; i < 5; i += 1)
//	{
//		printf("hello : %d\n", i);
//	}
//	printf("\n");
//	for (int i = 0; i < 5; i += 1)
//	{
//		printf("hello : %d\n", i);
//	}
//	printf("\n");
//	for (int i = 0; i < 5; i += 1)
//	{
//		printf("hello : %d\n", i);
//	}
//	printf("\n");
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 1;
//	for (; i <= 5; i += 1)
//	{
//		printf("hello : %d\n", i);
//	}
//	printf("i => %d\n", i);
//
//}

//#include <stdio.h>
//
//int main()
//{
//	for (int i = 1; i <= 5; i += 1)
//	{
//		printf("hello : %d\n", i);
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	//반복문 (for, while)
//	//1. 초기화
//	//2. 조건
//	//3. 증감
//
//	for (int i = 1; i <= 100; i += 1)
//	{
//		printf("hello\n");
//	}
//}

//#include <stdio.h>
//#include <conio.h>
//
//int main()
//{
//	switch (_getch())
//	{
//	case 49: //'1'
//		printf("1111\n");
//		break;
//	case '2': // 50
//		printf("2222\n");
//		break;
//	case '3': // 51
//		printf("3333\n");
//		break;
//	default:
//		printf("default\n");
//		break;
//	}
//}

//#include <stdio.h>
//#include <conio.h>
//
//int main()
//{
//	int c = _getch();
//	printf("char : %c\n", c);
//	printf("char : %d\n", c);
//}

//#include <stdio.h>
//
//int main()
//{
//	switch (2)
//	{
//	case 1:
//		printf("1111\n");
//		break;
//	case 2:
//		printf("2222\n");
//		break;
//	case 3:
//		printf("3333\n");
//		break;
//	default:
//		printf("default\n");
//		break;
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	//제어문 if, if-else, else if,  switch-case )
//	int a = 10;
//	int b = 12;
//
//	if (a == b)
//	{
//		printf("a == b\n");
//	}
//	else
//	{
//		printf("hello\n");
//	}
//
//}

//#include <stdio.h>
//
//int main()
//{
//	//제어문 if, if-else, else if,  switch-case )
//	int a = 10;
//	int b = 2;
//
//	if (a <= b)
//	{
//		printf("a <= b\n");
//	}
//	else
//	{
//		printf("hello\n");
//	}
//
//}

//#include <stdio.h>
//
//int main()
//{
//	//제어문 if, if-else, else if,  switch-case )
//	int a = 10;
//	int b = 2;
//
//	if (a <= b)
//	{
//		printf("a <= b\n");
//	}
//	if (a > b)
//	{
//		printf("hello\n");
//	}
//		
//}

//#include <stdio.h>
//
//int main()
//{
//	//제어문 if, if-else, else if,  switch-case )
//	int a = 10;
//	int b = 20;
//
//	if (a <= b)
//	{
//		printf("a <= b\n");
//	}
//	printf("hello\n");
//}

//#include <stdio.h>
//
//int main()
//{
//	//제어문 if, if-else, else if,  switch-case )
//	int a = 10;
//	int b = 20;
//
//	if (1)
//	{
//		printf("a == 10\n");
//		printf("a == 10\n");
//		printf("a == 10\n");
//	}
//	printf("hello\n");
//}

//#include <stdio.h>
//
//int main()
//{
//	//제어문 if, if-else, else if,  switch-case )
//	int a = 10;
//	int b = 20;
//
//	if (a == 10)
//	{
//		printf("a == 10\n");
//	}
//	printf("hello\n");
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	if (a == 10)
//	{
//		printf("a == 10\n");
//	}
//	
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 10, b = 20, result;
//
//	result = a + b;
//
//	printf("%d, %d, %d\n", a, b, result);
//
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int result;
//
//	result = a + b;
//
//	printf("%d, %d, %d\n", a, b, result);
//
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("%d, %d\n", a, b);
//	printf("%d\n", a + b);
//	a = 20;
//	printf("%d\n", a + b);
//	b = 50;
//	printf("%d\n", a + b);
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("hello \n");
//	printf("%d, %d\n", a, b);
//}