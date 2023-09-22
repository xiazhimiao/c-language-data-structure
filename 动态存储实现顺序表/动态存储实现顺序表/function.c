#define _CRT_SECURE_NO_WARNINGS
#include "header.h"
void InitList(SeqList* L)
{
	L->data = (DataType*)malloc(InitSize * sizeof(DataType));
	L->maxSize = InitSize;
	L->Length = 0;
}
void CreatList(SeqList* L, DataType r[], int n)
{
	L->data = (DataType*)malloc(InitSize * sizeof(DataType));
	L->maxSize = InitSize;
	while (n > L->maxSize)
	{
		L->maxSize = L->maxSize + IncreSize;
		L->data = (DataType*)realloc(L->data, L->maxSize * sizeof(DataType));
	}
	for (int i = 0; i < n; ++i)
	{
		L->data[i] = r[i];
	}
	L->Length = n;
}
void PrintfList(SeqList* L)
{
	int i = 0;
	for (i; i < L->Length; ++i)
	{
		printf("%d", L->data[i]);
	}
	printf("\n");
}
int Insert(SeqList* L, int i, DataType x)
{
	if (i<1 || i>L->Length + 1) { printf("Î»ÖÃ´íÎó£¬²åÈëÊ§°Ü\n"); return 0; }
	if (L->Length >= L->maxSize)
	{
		L->maxSize = L->maxSize + IncreSize;
		L->data = (DataType*)realloc(L->data, L->maxSize * sizeof(DataType));
	}

	for (int j = L->Length; j >= i; --j)
	{
		L->data[j] = L->data[j - 1];
	}
	L->data[i - 1] = x;
	L->Length += 1;
	return 1;
}
int Locate(SeqList* L, DataType a)
{
	for (int i = 0; i < L->Length; ++i)
	{
		if (L->data[i] == a) { return i + 1; }
	}
	return 0;
}
int Get(SeqList* L, int a)
{
	if (a<1 || a>L->Length)return 0;
	return L->data[a - 1];
}
int Delete(SeqList* L, int a, DataType* x)
{
	if (L->Length == 0) { printf("Ë³Ðò±íÎª¿Õ£¬É¾³ýÊ§°Ü"); return 0; }
	if (a<1 || a>L->Length) { printf("É¾³ýÎ»ÖÃÔ½½ç£¬É¾³ýÊ§°Ü"); return 0; }
	*x = L->data[a - 1];
	for (int j = a; j < L->Length; ++j)
	{
		L->data[j - 1] = L->data[j];
	}
	L->Length -= 1;
	return 1;
}

