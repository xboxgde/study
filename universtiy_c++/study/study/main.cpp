#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int row = 3, col = 5;

	int** ary = (int**)malloc(sizeof(int*) * row);

	for (int i = 0; i < row; ++i)
		ary[i] = (int*)malloc(sizeof(int) * col);

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			ary[i][j] = (3 + i) * (j + 1);
			printf("%3d", ary[i][j]);
		}
		printf("\n");
	}
}
//#include <stdio.h>
//#include <conio.h>
//#include <string.h>
//#include <stdlib.h>
//
//struct Student
//{
//	char* name;
//	int score;
//};
//
//void SetName(Student* student, const char* name, int score)
//{
//	student->name = (char*)malloc(strlen(name) + 1);
//	strcpy_s(student->name, strlen(name) + 1, name);
//	student->score = score;
//}
//
//void PrintStudent(Student* p)
//{
//	printf("%s, %d\n", p->name, p->score);
//}
//
//int main()
//{
//	Student* per1 = (Student*)malloc(sizeof(Student));
//	Student* per2 = (Student*)malloc(sizeof(Student));
//	
//
//	SetName(per1, "홍길동", 20);
//	SetName(per2, "홍길당", 40);
//
//	PrintStudent(per1);
//	PrintStudent(per2);
//
//	free(per1);
//	free(per2);
//}

//#include <stdio.h>
//#include <conio.h>
//#include <string.h>
//#include <stdlib.h>
//
//typedef struct _stringArray
//{
//    char** buf;
//    int count;
//    int capacity;
//}StringArray;
//void Menu()
//{
//    puts("1. 문자열 입력:");
//    puts("2. 모든 문자열 출력:");
//    puts("3. 문자열 검색:");
//    puts("4. 문자열 삭제:");
//    puts("0. 프로그램 종료");
//}
//void AddString(StringArray* psa)
//{
//    if (psa->count >= psa->capacity)
//        return;
//
//    printf("문자열 입력:");
//    char str[500];
//    gets_s(str, 500);
//    char* s = (char*)malloc(strlen(str) + 1);
//    strcpy_s(s, strlen(str) + 1, str);
//
//    psa->buf[psa->count] = s;
//    ++psa->count;
//}
//void PrintString(const StringArray* psa)
//{
//    for (int i = 0; i < psa->count; ++i)
//        printf("[%d] : %s\n", i, psa->buf[i]);
//}
//void SearchString(const StringArray* psa)
//{
//    char str[500];
//    printf("검색할 문자열 입력:");
//    gets_s(str, 500);
//    for (int i = 0; i < psa->count; ++i)
//    {
//        if (strcmp(str, psa->buf[i]) == 0)
//        {
//            printf("[%d] : %s 있습니다.\n", i, str);
//            break;
//        }
//    }
//}
//void RemoveString(StringArray* psa)
//{
//    char str[500];
//    printf("삭제할 문자열 입력:");
//    gets_s(str, 500);
//    for (int i = 0; i < psa->count; ++i)
//    {
//        
//        if (strcmp(str, psa->buf[i]) == 0)
//        {
//            free(psa->buf[i]);
//            for (int j = i; j < psa->count - 1; ++j)
//                psa->buf[j] = psa->buf[j + 1];
//            --psa->count;
//            break;
//        }
//    }
//}
//void InitString(StringArray* psa, int capacity)
//{
//    psa->buf = (char**)malloc(sizeof(char*) * capacity);
//    psa->count = 0;
//    psa->capacity = capacity;
//}
//void UninitString(StringArray* psa)
//{
//    for (int i = 0; i < psa->count; ++i)
//        free(psa->buf[i]);
//}
//
//void Sort(StringArray* psa)
//{
//    for (int i = 0; i < psa->count; ++i)
//    {
//        if (psa->buf[i + 1] != psa->buf[psa->count])
//        {
//            if (strcmp(psa->buf[i], psa->buf[i + 1]) == 1)
//            {
//                char* value = psa->buf[i + 1];
//                printf("%s\n", value);
//                psa->buf[i + 1] = psa->buf[i];
//                psa->buf[i] = value;
//                printf("%s\n", psa->buf[i]);
//                printf("%s\n", psa->buf[i + 1]);
//            }
//        }
//        else
//            break;
//    }
//    
//}
//
//int main()
//{
//    StringArray sa;
//    int run = 1;
//
//    InitString(&sa, 1000);
//    while (run)
//    {
//        Menu();
//        switch (_getch())
//        {
//        case '1':
//            AddString(&sa);
//            break;
//        case '2':
//            PrintString(&sa);
//            break;
//        case '3':
//            SearchString(&sa);
//            break;
//        case '4':
//            RemoveString(&sa);
//            break;
//        case '5':
//            Sort(&sa);
//            break;
//        case '0':
//            run = 0;
//            break;
//        }
//    }
//
//    UninitString(&sa);
//}

//// point.c - 구조체 정의와 기본 함수
//typedef struct _point
//{
//	int x;
//	int y;
//} point;
//void printpoint(const point* p)
//{
//	printf("(%d, %d)\n", p->x, p->y);
//}
//void setpoint(point* p, int x, int y)
//{
//	p->x = x;
//	p->y = y;
//
//	//(*p).x = x;
//	//(*p).y = y;
//
//}
//
//// pointarray.c - 배열 관리 함수
//point* allocpointarray(int cap)
//{
//	return (point*)malloc(sizeof(point) * cap);
//}
//void freepointarray(point pa[])
//{
//	free(pa);
//}
//void initpointarray(point pa[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		setpoint(&pa[i], i + 1, i + 1);
//}
//void printpointarray(const point pa[], int size)
//{
//	for (int i = 0; i < 10; ++i)
//		printpoint(&pa[i]);
//}
//
//// main 영역
//int main()
//{
//	point* pa = allocpointarray(10);
//	
//
//	initpointarray(pa, 10);
//	printpointarray(pa, 10);
//
//	freepointarray(pa);
//}

//struct Student
//{
//	char name[20];
//	int score;
//};
//
//int main()
//{
//	Student std = {"a", 20};
//
//	printf("%s, %d\n", std.name, std.score);
//	std = { "b", 30 };
//	printf("%s, %d\n", std.name, std.score);
//	std = { "c", 40 };
//	printf("%s, %d\n", std.name, std.score);
//}

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
#include <conio.h>    <- 필수

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
//	char arr[] = "hello";
//
//	for (int i = 0; i < 6; ++i)
//	{
//		printf("%c, %d\n", arr[i], (int*)arr[i]);
//	}
//}

//#include <stdlib.h>
//#include <string.h>
//
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

//#include <stdio.h>
//void PrintArray(int arr[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		printf("%5d", arr[i]);
//	printf("\n");
//}
//int main()
//{
//	int arr[10] = { 5, 7, 3, 4, 6, 2, 1, 9, 7, 3 };
//	PrintArray(arr, 10);
//
//	int a = 10, b = 20;
//	int result = a + b;
//	printf("result = %d\n", result);
//	printf("result = %d\n", result);
//	printf("result = %d\n", result);
//}
