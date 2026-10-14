#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	Node* prev;
	Node* next;
};
Node* AllocNode(int data)
{
	Node* N = (Node*)malloc(sizeof(Node));
	N->data = data;
	N->prev = NULL;
	N->next = NULL;

	return N;
}

void FreeNode(Node* f)
{
	free(f);
}

void AddNode(Node* head, Node* tail, int data)
{
	Node* pt;
	Node* n;
	pt = tail->prev;
	n = AllocNode(data);

	pt->next = n;
	n->prev = pt;
	n->next = tail;
	tail->prev = n;

}

void FreeAllNode(Node* head, Node* tail)
{
	Node* p;
	Node* np;
	for (p = head; p != NULL; p = np)
	{
		np = p->next;
		FreeNode(p);

	}
}

void RemoveNode(Node* head, Node* tail, int data)
{
	for (Node* p = head->next; p != tail; p = p->next)
	{
		if (data == p->data)
		{
			Node* pp = p->prev;
			Node* np = p->next;
			pp->next = np;
			np->prev = pp;
			FreeNode(p);
			break;
		}
	}
}

Node* GetHead(Node* head)
{
	return head->next;
}

int HasNext(Node* tail, Node* p)
{
	return tail != p;
}

int GetData(Node* p)
{
	return p->data;
}

Node* Next(Node* p)
{
	return p->next;
}


int main()
{
	Node* head = NULL;
	Node* tail = NULL;

	head = AllocNode(0);
	tail = AllocNode(0);

	head->next = tail;
	tail->prev = head;

	AddNode(head, tail, 10);
	AddNode(head, tail, 20);
	AddNode(head, tail, 30);
	AddNode(head, tail, 40);
	AddNode(head, tail, 50);

	RemoveNode(head, tail, 30);

	for (Node* p = GetHead(head); HasNext(tail, p); p = Next(p))
		printf("%5d", GetData(p));
	printf("\n");
	FreeAllNode(head, tail);
}

//#include <stdio.h>
//#include <stdlib.h>
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//};
//Node* AllocNode(int data)
//{
//	Node* N = (Node*)malloc(sizeof(Node));
//	N->data = data;
//	N->prev = NULL;
//	N->next = NULL;
//
//	return N;
//}
//
//void FreeNode(Node* f)
//{
//	free(f);
//}
//
//void AddNode(Node* head, Node* tail, int data)
//{
//	Node* pt;
//	Node* n;
//	pt = tail->prev;
//	n = AllocNode(10);
//
//	pt->next = n;
//	n->prev = pt;
//	n->next = tail;
//	tail->prev = n;
//
//}
//
//void FreeAllNode(Node* head, Node* tail)
//{
//	Node* p;
//	Node* np;
//	for (p = head; p != NULL; p = np)
//	{
//		np = p->next;
//		FreeNode(p);
//
//	}
//}
//
//Node* GetHead(Node* head)
//{
//	return head->next;
//}
//
//int HasNext(Node* tail, Node* p)
//{
//	return tail != p;
//}
//
//int GetData(Node* p)
//{
//	return p->data;
//}
//
//Node* Next(Node* p)
//{
//	return p->next;
//}
//
//
//int main()
//{
//	Node* head = NULL;
//	Node* tail = NULL;
//
//	head = AllocNode(0);
//	tail = AllocNode(0);
//
//	head->next = tail;
//	tail->prev = head;
//
//	AddNode(head, tail, 10);
//	AddNode(head, tail, 20);
//
//	for (Node* p = GetHead(head); HasNext(tail, p); p = Next(p))
//		printf("%5d", GetData(p));
//	printf("\n");
//
//	FreeAllNode(head, tail);
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//};
//Node* AllocNode(int data )
//{
//	Node* N = (Node*)malloc(sizeof(Node));
//	N->data = data;
//	N->prev = NULL;
//	N->next = NULL;
//
//	return N;
//}
//
//void FreeNode(Node* f)
//{
//	free(f);
//}
//
//void AddNode(Node* head, Node* tail, int data)
//{
//	Node* pt;
//	Node* n;
//	pt = tail->prev;
//	n = AllocNode(10);
//
//	pt->next = n;
//	n->prev = pt;
//	n->next = tail;
//	tail->prev = n;
//
//}
//
//void FreeAllNode(Node* head, Node* tail)
//{
//	Node* p;
//	Node* np;
//	for (p = head; p != NULL; p = np)
//	{
//		np = p->next;
//		FreeNode(p);
//
//	}
//}
//
//int main()
//{
//	Node* head = NULL;
//	Node* tail = NULL;
//	
//	head = AllocNode(0);
//	tail = AllocNode(0);
//
//	head->next = tail;
//	tail->prev = head;
//
//	AddNode(head, tail, 10);
//	AddNode(head, tail, 20);
//
//	for (Node* p = head->next; p != tail; p = p->next)
//		printf("%5d", p->data);
//	printf("\n");
//
//	FreeAllNode(head, tail);
//}

//#include <stdio.h>
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
//	Node* head = NULL;
//	Node* tail = NULL;
//	Node n1 = { 10, NULL, NULL };
//	Node n2 = { 30, NULL, NULL };
//
//	head = &n1;
//	tail = &n2;
//	head->next = tail;
//	tail->prev = head;
//
//	printf("%d\n", head->data);
//	printf("%d\n", head->next->data);
//
//	printf("%d\n", tail->prev->data);
//	printf("%d\n", tail->data);
//
//}