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
		printf("%d\n",L->data[i]);
	}
}

