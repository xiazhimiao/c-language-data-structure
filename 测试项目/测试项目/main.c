//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <malloc.h>
////using namespace std;
//
//typedef int DataType;
//typedef struct Node {
//	DataType data;
//	struct Node* next;
//}Node;
////头插法
//
//Node* CreatList1(DataType a[], int n)
//{
//	Node* s = NULL;
//	Node* first = (Node*)malloc(sizeof(Node));
//	first->next = NULL;//初始化头结点
//	for (int i = 0; i < n; i++)
//		//for (int i = 0; i < n; ++i)
//	{
//		s = (Node*)malloc(sizeof(Node));
//		s->data = a[i];
//		s->next = first->next;
//		first->next = s;
//	}
//	return first;
//
//}
///*
//Node *CreatList2(DataType a[], int n)
//{
//	Node *s = NULL, *r = NULL;
//	Node *first；
//	first = (Node *)malloc(sizeof(Node));
//	r = first;
//	for (int i = 0; i < n; ++i)
//	{
//		s = (Node*)malloc(sizeof(Node));
//		s->data = a[i];
//		r->next = s;
//		r = s;
//	}
//	r->next = NULL;//终端结点指针域置空
//	return first;
//
//}*/
//void PrintfList(Node* first)
//{
//	Node* P = first->next;
//	while (P)
//	{
//		printf("%d", P->data);
//		P = P->next;
//	}
//	printf("\n");
//}
//int Insert(Node* first, int i, DataType x)
//{
//	Node* s = NULL, * p = first;
//	int count = 0;
//	while (p != NULL && count < i - 1)
//	{
//		p = p->next;
//		count++;
//	}
//	if (p == NULL)
//	{
//		printf("位置错误，插入失败\n");
//		return 0;
//	}
//	else
//	{
//		s = (Node*)malloc(sizeof(Node));
//		s->data = x;
//		s->next = p->next;
//		p->next = s;
//		return 1;
//	}
//}
//int main()
//{
//	int r[5] = { 1,2,3,4,5 }, i, x;
//	Node* first = NULL;//头指针
//	first = CreatList1(r, 5);//头插法
//	PrintfList(first);
//	Insert(first, 2, 8);
//	PrintfList(first);
//
//
//
//	return 0;
//}