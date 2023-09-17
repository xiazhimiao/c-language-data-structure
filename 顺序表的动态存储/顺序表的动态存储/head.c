#define _CRT_SECURE_NO_WARNINGS
#include "head.h"
void InitList(SeqList* L)
{
	L->data = (DataType*)malloc(InitSize * sizeof(DataType));
	L->maxSize = InitSize;
	L->length = 0;
}