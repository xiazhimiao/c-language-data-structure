#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
const int InitSize = 100;
//const int IncreSize = 10;
typedef int DataType;
typedef struct {
	DataType* data;
	int maxSize;
	int length;
}SeqList;
void InitList(SeqList* L);//��ʼ��˳���
