#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
typedef int DataType;
typedef struct {
	DataType data;
	struct Node* next;	
}Node;
//头插法
Node *CreatList1(DataType a[], int n);
//尾插法
Node* CreatList2(DataType a[], int n);
//打印数据
void PrintfList(Node *first);
//插入数据
int Insert(Node *first, int i, DataType x);

