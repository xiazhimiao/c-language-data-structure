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
//计算单链表长度
int Length(Node* first);
//元素查找
int Locate(Node *first, DataType x);
//位置i元素删除,删除成功返回1
int Delete(Node *first, int i, DataType *x);
//销毁单链表
void DestroyList(Node *first);
//未用函数---------------------------------------
//判空操作,为空返回1
int Empty(Node* first);
//



