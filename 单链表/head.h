#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
typedef int DataType;
typedef struct {
	DataType data;
	struct Node* next;	
}Node;
//ͷ�巨
Node *CreatList1(DataType a[], int n);
//β�巨
Node* CreatList2(DataType a[], int n);
//��ӡ����
void PrintfList(Node *first);
//��������
int Insert(Node *first, int i, DataType x);

