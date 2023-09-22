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
		first->next = (struct Node*)s;
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
		r->next = (struct Node*)s;
		r = s;
	}
	r->next = NULL;//�ն˽��ָ�����ÿ�
	return first;

}
void PrintfList(Node* first)
{
	Node* P = (Node *)first->next;
	while (P)
	{
		printf("%d", P->data);
		P =(Node*) P->next;
   	}
	printf("\n");
}
int Insert(Node* first, int i, DataType x)
{
	Node* s = NULL, * p = first;
	int count = 0;
	while (p != NULL && count < i - 1)
	{
		p = (Node*)p->next;
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
		p->next = (struct Node*)s;
		return 1;
	}
}
int Length(Node* first)
{
	Node* p = (Node*)first->next;
	int count = 0;
	while (p != NULL)
	{
		p = (Node*)p->next;
		count++;
	}
	return count;
}
int Locate(Node* first, DataType x)
{
	Node* p = (Node*)first->next;
	int count = 1;
	while (p != NULL)
	{
		if (p->data == x)
		{
			return count;
		}
		p = (Node*)p->next;
		count++;
	}
	return 0;
}
int Delete(Node* first, int i, DataType* x)
{
	Node* p = first, * q = NULL;//����ָ��pҪָ��ͷ���
	int count = 0;
	while (p != NULL && count < i - 1)
	{
		p = (Node*)p->next;
		count++;
	}
	if (p == NULL || p->next == NULL)
	{
		printf("λ�ô���ɾ��ʧ��\n");
		return 0;
	}
	else
	{
		q = (Node*)p->next;
		*x = q->data;
		p->next = q->next;
		free(q);
		return 1;
	}
}
void DestroyList(Node* first)
{
	Node* p = first;
	while (first != NULL)
	{
		first = (Node*)first->next;
		free(p);
		p=first;
	}
}
//δ�ú���---------------------------------------
int Empty(Node* first)
{
	if (first->next == NULL)
		return 1;
	else
		return 0;
}

