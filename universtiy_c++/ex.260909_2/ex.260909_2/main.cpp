#include <stdio.h>

void PrintData(const int* p)
{
	*p = 10;
	printf("[%p] = %d\n", p, *p);
}

int main()
{
	int n = 100;

	PrintData(&n);
}

//#include <stdio.h>
//
//void PrintData(int* p)
//{
//	*p = 10;
//	printf("[%p] = %d\n", p, *p);
//}
//
//int main()
//{
//	int n = 100;
//
//	PrintData(&n);
//}

//#include <stdio.h>
//
//int main()
//{
//	int k = 0;
//	int n = 10;
//	const int* const p = &n;
//	//const int* p = &n;
//	//int* const p = &n;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("%d\n", '0');
//	printf("%d\n", '0' - '0');
//	printf("%d\n", '0' + 0);
//	printf("%d\n", '1');
//	printf("%d\n", '1' - '0');
//	printf("%d\n", '0' + 1);
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	char* s1;
//	char s2[10];
//
//	s1 = (char*)malloc(10);
//
//
//	strcpy(s1, "hello");
//
//	strcpy(s2, "hello");
//
//	printf("%s %s\n", s1, s2);
//	printf("%p %p\n", s1, s2);
//
//	free(s1);
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	const char* s1 = "hello";
//	char s2[] = "hello";
//
//	printf("%s %s\n", s1, s2);
//	printf("%p %p\n", s1, s2);
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int a[4] = { 11, 12, 13, 14 };
//
//	int* b = (int*)malloc(sizeof(int) * 4);
//
//	for (int i = 0; i < 4; i++)
//	{
//		b[i] = 11 + i;
//	}	
//
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d %d\n", a[i], b[i]);
//	}
//	free(b);
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int* p1 = (int*)malloc(sizeof(int));
//
//	*p1 = 100;
//	printf("%d\n", *p1);
//
//	free(p1);
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 100;
//	float d = 5.5;
//	char s[] = "hello"; // or const char* s = "hello";
//	printf("%d\n", n);
//	printf("%g\n", d);
//	printf("%s\n", s);
//}