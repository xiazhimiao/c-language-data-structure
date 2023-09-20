#define _CRT_SECURE_NO_WARNINGS
#include "head.h"
Node* CreatList1(DataType a[], int n)
{
	Node* s = NULL;
	Node* first = (Node*)malloc(sizeof(Node));
	first->next = NULL;//��ʼ��ͷ���
	for (int i = 0; i < n; ++i)
	{
		s = (Node*)malloc(sizeof(Node));
		s->data = a[i];
		s->next = first->next;
		first->next = s;
	}
	return first;

}
Node* CreatList2(DataType a[], int n)
{
	Node* s = NULL, * r = NULL;
	Node* first = (Node*)malloc(sizeof(Node));
	r = first;
	for (int i = 0; i < n; ++i)
	{
		s = (Node*)malloc(sizeof(Node));
		s->data = a[i];
		r->next = s;
		r = s;
	}
	r->next = NULL;//�ն˽��ָ�����ÿ�
	return first;

}
void PrintfList(Node* first)
{
	Node* P = first->next;
	while (P)
	{
		printf("%d", P->data);
		P = P->next;
	}
	printf("\n");
}
int Insert(Node* first, int i, DataType x)
{
	Node* s = NULL, * p = first;
	int count = 0;
	while (p != NULL && count < i - 1)
	{
		p = p->next;
		count++;
	}
	if (p == NULL)
	{
		printf("λ�ô��󣬲���ʧ��\n");
		return 0;
	}
	else
	{
		s = (Node*)malloc(sizeof(Node));
		s->data = x;
		s->next = p->next;
		p->next = s;
		return 1;
	}
}
