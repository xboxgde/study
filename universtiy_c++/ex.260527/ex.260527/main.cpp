// 함수 정의 제대로 하기, 상수값 메모리 제대로 그리기, 문자열 메모리 제대로 알기, 힙(heap) 메모리 사용할때 필요한 요소 알기, 

#include <stdio.h>
#include <stdlib.h>


int main()
{
	int* arr = NULL;
	int capacity = 0;

	printf("input capacity : ");
	scanf("%d", &capacity);

	int arr[capacity];

	for (int i = 0; i < capacity; ++i)
		arr[i] = i + 1;

	for (int i = 0; i < capacity; ++i)
		printf("%d ", arr[i]);
	printf("\n");

}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int* arr = NULL;
//	int capacity = 0;
//
//	printf("input capacity : ");
//	scanf("%d", &capacity);
//
//	arr = (int*)malloc(sizeof(int) * capacity);
//
//	for (int i = 0; i < capacity; ++i)
//		arr[i] = i + 1;
//
//	for (int i = 0; i < capacity; ++i)
//		printf("%d ", arr[i]);
//	printf("\n");
//
//	free(arr);
//}

//#include <stdio.h>
//
//void SetData(int* data, int num) //Out parameter(write)
//{
//	*data = num;
//	//return;
//}
//
//
//void PrintData(int pd)
//{
//	printf("%d\n", pd);
//	//return;
//}
//
//
//void PrintDataRef(const int* pdr) //In parameter(read) -> const 필수
//{
//	printf("%d\n", *pdr);
//	//return;
//}
//
//int main()
//{
//	int n = 10;
//
//	SetData(&n, 50);
//
//	PrintData(n); //value
//	PrintDataRef(&n); //reference
//	
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int a[4];
//
//	for (int i = 0; i < 4; ++i)
//		a[i] = i + 1;
//
//	for (int i = 0; i < 4; ++i)
//		printf("%5d", a[i]);
//	printf("\n");
//
//	int* b = NULL;
//
//	b = (int*)malloc(sizeof(int) * 4);
//
//	for (int i = 0; i < 4; ++i)
//		b[i] = i + 1;
//
//	for (int i = 0; i < 4; ++i)
//		printf("%5d", b[i]);
//	printf("\n");
//
//	free(b);
//}

//#include <stdio.h>
//
//void PrintString(const char* s)
//{
//	printf("%s\n", s);
//}  
//
//int main()
//{
//	const char* s1 = "Hello!";
//
//	char s2[] = "Hello!";
//
//	PrintString(s1);
//
//	PrintString(s2);
//}