#define _CRT_SECURE_NO_WARNINGS
#include "hanshu.h"
void InitList(SeqList* L)
{
	L->length = 0;
}
int CreatList(SeqList* L, DataType r[], int n)
{
	if (n > MaxSize) { printf("顺序表的空间不够，无法建立顺序表\n"); return 0; };
	for (int i = 0; i < n; ++i)
	{
		L->data[i] = r[i];
	}
	L->length = n;
	return 1;
}
void PrintfList(SeqList* L)
{
	int i = 0;
	for (i; i < L->length; ++i)
	{
		printf("%d",L->data[i]);
	}
	printf("\n");
}
int Insert(SeqList* L, int i, DataType x)
{
	if (L->length >= MaxSize) { printf("上溢错误，插入失败\n"); return 0; }
	if (i<1 || i>L->length + 1) { printf("位置错误，插入失败\n"); return 0; }
	for (int j = L->length; j >= i; --j)
	{
		L->data[j] = L->data[j - 1];
	}
	L->data[i - 1] = x;
	L->length += 1;
	return 1;
}
int Locate(SeqList* L, DataType a)
{
	for (int i = 0; i < L->length; ++i)
	{
		if (L->data[i] == a) { return i + 1; }
	}
	return 0;
}
int Get(SeqList* L, int a)
{
	if (a<1 || a>L->length)return 0;
	return L->data[a - 1];
}
int Delete(SeqList* L, int a, DataType* x)
{
	if (L->length == 0) { printf("顺序表为空，删除失败"); return 0; }
	if (a<1 || a>L->length) { printf("删除位置越界，删除失败"); return 0; }
	*x = L->data[a - 1];
	for (int j = a; j < L->length; ++j)
	{
		L->data[j - 1] = L->data[j];
	}
	L->length -= 1;
	return 1;
}
