#include <stdio.h>



int main()
{
	printf("%s\n", "ABC");
	printf("%p %s\n", "ABC", "ABC");



	const char* s = "ABC";
	printf("%s\n", s);
}



//#include <stdio.h>
//
//int main()
//{
//	int a = 10, b = 0;
//
//	// 참 : 0 제외 모두 / 거짓 : 0
//	printf("%d", a && b);
//	printf("%d", a || b);
//	printf("%d", !a);
//	printf("%d", !b);
//
//}