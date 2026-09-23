#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person
{
	char name[20];
	char phone[20];
};

int main()
{
	char name[20];
	char phone[20];

	printf("이름 입력 :");
	fgets(name, 20,stdin);
	printf("번호 입력 :");
	fgets(phone, 20, stdin);


	Person per1 = { NULL, NULL };

	strcpy(per1.name, "hong");
	strcpy(per1.phone, "010-1234-1234");

	printf("%s, %s\n", per1.name, per1.phone);
}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//struct Person
//{
//	char* name;
//	char* phone;
//};
//
//int main()
//{
//
//	Person per1 = { NULL, NULL };
//
//	per1.name = (char*)malloc(strlen("hong") + 1);
//	strcpy(per1.name, "hong");
//	per1.phone = (char*)malloc(strlen("010-1234-1234") + 1);
//	strcpy(per1.phone, "010-1234-1234");
//
//	printf("%s, %s\n", per1.name, per1.phone);
//
//	free(per1.name);
//	free(per1.phone);
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//struct Person
//{
//	char name[20];
//	char phone[20];
//};
//
//int main()
//{
//
//	Person per1 = { "hong", "010-1234-1234" };
//
//
//	printf("%s, %s\n", per1.name, per1.phone);
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//struct Point
//{
//	int x;
//	int y;
//};
//
//typedef Point* PPoint;
//
//void PrintPoint(PPoint value)
//{
//	printf("%d, %d\n", value->x, value->y);
//}
//
//void SetPoint(PPoint value, int n1, int n2)
//{
//	value->x = n1;
//	value->y = n2;
//}
//
//PPoint AllocPoint()
//{
//	PPoint p = (PPoint)malloc(sizeof(Point));
//	return p;
//}
//
//void FreePoint(PPoint p)
//{
//	free(p);
//}
//
//int main()
//{
//	Point* p1 = AllocPoint();
//	Point* p2 = AllocPoint();
//
//	SetPoint(p1, 1, 2);
//	SetPoint(p2, 4, 5);
//
//	PrintPoint(p1);
//	PrintPoint(p2);
//
//
//	FreePoint(p1);
//	FreePoint(p2);
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//
//struct Point
//{
//	int x;
//	int y;
//};
//
//typedef Point* PPoint;
//
//void PrintPoint(PPoint value)
//{
//	printf("%d, %d\n", value->x, value->y);
//}
//
//int main()
//{
//	Point* p1 = (Point*)malloc(sizeof(Point));
//	Point*  p2 = (Point*)malloc(sizeof(Point));
//
//	p1->x = 1;
//	p1->y = 2;
//	p2->x = 4;
//	p2->y = 5;
//
//	PrintPoint(p1);
//	PrintPoint(p2);
//
//}

//#include <stdio.h>
//
//struct Point
//{
//	int x;
//	int y;
//};
//
//void PrintPoint(Point value)
//{
//	printf("%d, %d\n", value.x, value.y);
//}
//
//int main()
//{
//	Point pt1 = { 1, 2 };
//	Point pt2 = { 4, 5 };
//	Point* p1 = NULL, *p2 = NULL;
//
//	p1 = &pt1;
//	p2 = &pt2;
//
//	PrintPoint(pt1);
//	PrintPoint(pt2);
//	PrintPoint(*p1);
//	PrintPoint(*p2);
//}

//#include <stdio.h>
//
//struct Point
//{
//	int x;
//	int y;
//};
//
//int main()
//{
//	Point pt1 = { 1,2 };
//	Point pt2 = { 4,5 };
//	Point* p1 = NULL, *p2 = NULL;
//
//	p1 = &pt1;
//	p2 = &pt2;
//
//	printf("%d, %d\n", sizeof(pt1), sizeof(pt2));
//	printf("%d, %d\n", sizeof(p1), sizeof(p2));
//
//	printf("%d, %d\n", pt1.x, pt1.y);
//	printf("%d, %d\n", pt2.x, pt2.y);
//	printf("%d, %d\n", p1->x, p1->y);
//	printf("%d, %d\n", p2->x, p2->y);
//
//}