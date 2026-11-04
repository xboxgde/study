#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	Node* prev;
	Node* next;
};

struct LinkedList
{
	Node* head = NULL;
	Node* tail = NULL;

};

Node* AllocNode(int data)
{
	Node* n = (Node*)malloc(sizeof(Node));
	n->data = data;
	n->next = n->prev = NULL;
	return n;
}

void InitList(LinkedList* plt)
{
	plt->head = AllocNode(0);
	plt->tail = AllocNode(0);
	plt->head->next = plt->tail;
	plt->tail->prev = plt->head;


}
void PrintList(LinkedList* plt)
{
	for (Node* p = plt->head; p != NULL; p = p->next)
		printf("%3d", p->data);
	printf("\n");
}
void UnInitList(LinkedList* plt)
{
	Node* np;
	for (Node* p = plt->head; p != NULL; p = np)
	{
		np = p->next;
		free(p);
	}
}

void AddTailList(LinkedList* plt, int data)
{
	Node* ptail = plt->tail->prev;
	Node* n = AllocNode(data);
	ptail->next = n;
	n->prev = ptail;
	n->next = plt->tail;
	plt->tail->prev = n;
}

void AddFirstList(LinkedList* plt, int data)
{
	Node* nhead = plt->head->next;
	Node* n = AllocNode(data);
	plt->head->next = n;
	n->prev = plt->head;
	n->next = nhead;
	nhead->prev = n;
}
void RemoveList(LinkedList* plt, Node* p)
{
	Node* pp = p->prev;
	Node* np = p->next;
	pp->next = np;
	np->prev = pp;
}
Node* GetHead(LinkedList* plt)
{
	return plt->head->next;
}
int HasNext(LinkedList* plt, Node* p)
{
	return p->next != NULL;
}
Node* Next(LinkedList* plt, Node* p)
{
	return p->next;
}
int GetData(LinkedList* plt, Node* p)
{
	return p->data;
}
void PrintData(int data)
{
	printf("%d\n", data);
}

void PrintData2(int data)
{
	printf("%d\n", data);
}


int main()
{
	LinkedList lt;

	InitList(&lt);

	AddTailList(&lt, 10);
	AddTailList(&lt, 20);
	AddTailList(&lt, 30);
	AddTailList(&lt, 40);
	AddTailList(&lt, 50);
	AddFirstList(&lt, 100);
	AddFirstList(&lt, 200);

	for (Node* p = GetHead(&lt); HasNext(&lt, p); p = Next(&lt, p))
		printf("%5d", GetData(&lt, p));
	printf("\n");
	
	for (Node* p = GetHead(&lt); HasNext(&lt, p); p = Next(&lt, p))
		if (GetData(&lt, p) == 30)
		{
			RemoveList(&lt, p);
			break;
		}
	
	PrintList(&lt, PrintData);
	PrintList(&lt, PrintData2);
	UnInitList(&lt);

}

//#include <stdio.h>
//#include <stdlib.h>
//
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//};
//
//struct LinkedList
//{
//	Node* head = NULL;
//	Node* tail = NULL;
//
//};
//
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	n->next = n->prev = NULL;
//	return n;
//}
//
//void InitList(LinkedList* plt)
//{
//	plt->head = AllocNode(0);
//	plt->tail = AllocNode(0);
//	plt->head->next = plt->tail;
//	plt->tail->prev = plt->head;
//
//
//}
//void PrintList(LinkedList* plt)
//{
//	for (Node* p = plt->head; p != NULL; p = p->next)
//		printf("%d", p->data);
//	printf("\n"); 
//}
//void UnInitList(LinkedList* plt)
//{
//	Node* np;
//	for (Node* p = plt->head; p != NULL; p = np)
//	{
//		np = p->next;
//		free(p);
//	}
//}
//
//int main()
//{
//	LinkedList lt;
//
//	InitList(&lt);
//	PrintList(&lt);
//	UnInitList(&lt);
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//};
//
//int main()
//{
//	//정수 저장관리 연결 리스트
//
//	InitList();
//	AddFirstList();
//	AddLastList();
//	RemoveList();
//	GetHead();
//	Next();
//	HasNext();
//	GetData();
//	PrintList();
//	UnInitList();
//
//}

//#include <stdio.h>
//#include <string.h>
//typedef struct Person
//{
//	char name[20];
//	char phone[20];
//}per;
//
//int main()
//{
//	per p;
//
//	//gets_s(p.name);
//	strcpy_s(p.name, "hong");
//	strcpy_s(p.phone, "010");
//
//	printf("%s\n", p.name);
//	printf("%s\n", p.phone);
//}