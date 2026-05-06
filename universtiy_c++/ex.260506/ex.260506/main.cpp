#include <stdio.h>

void PrintArray(const char* arr)
{
	printf("%s\n", arr);
}

int main()
{
	//char arr[] = { 'h','e','l','l','o','\0'};
	char arr[] = "hello";
	PrintArray(arr);
}

//#include <stdio.h>
//
//void PrintString(const char* ps) // const 형식은 const 형식으로 받는다.
//{
//	printf("str : %s\n", ps);
//}
//
//int main()
//{
//	const char s1[4] = "ABC";
//	const char* s2 = "ABC";
//
//	PrintString(s1);
//	PrintString(s2);
//	PrintString("hello");
//}

//#include <stdio.h>
//
//int main()
//{
//	char s1[4] = "ABC";
//	const char* s2 = "ABC";
//	// 메모리공간 -> s1[4], s2, "ABC"
//
//	printf("%s %s\n", s1, s2);
//	printf("%c %c\n", s1[1], s2[1]);
//
//	for (int i = 0; i < 4; ++i)
//		printf("%c:%d, %c:%d\n", s1[i], s1[i], s2[i], s2[i]);
//}

//#include <stdio.h>
//
//int main()
//{
//	char s[5] = "ABCD";
//	//char s[5] = { 'A', 'B', 'C', 'D'}; 위 코드와 같음.
//
//	for (int i = 0; i < 4; ++i)
//	
//		printf("%c %d\n", s[i], s[i]);
//	
//
//	printf("%p\n", s);
//	printf("%s\n", s);
//}

//#include <stdio.h>
//
//int main()
//{
//	const char* s = "Hello"; // literal 상수 -> 읽기만 가능 -> 무조건 const가 붙어야함. 
//
//	printf("str : %s\n", s);
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 10;
//	const int* p = &n; // 연산 가능
//
//	//*p = 12; <- 불가능
//	//n = 12; <- 가능
//
//	printf("%d %d\n", n, *p);
//	
//}

//#include <stdio.h>
//
//int main()
//{
//	const char* s = "ABC";
//
//	printf("%s\n", *s);
//	printf("%s\n", *(s+1));
//	printf("%c\n", *(s+2)); // 문자열 "ABC" 메모리 공간에서 가져와 출력
//	printf("%s\n", *s+2); // 아스키 코드로 변환해서 출력
//}