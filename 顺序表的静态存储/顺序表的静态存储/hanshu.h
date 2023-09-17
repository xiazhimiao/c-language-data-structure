#pragma once
#include <stdio.h>
#define MaxSize 100
typedef int DataType;
typedef struct
{
	DataType data[MaxSize]; //存放数据元素的数组
	int length; //线性表的长度
}SeqList;
//初始化顺序表
void InitList(SeqList *L);
//建立顺序表，成功返回1，否则0
int CreatList( SeqList *L,DataType r[],int n);
//打印顺序表中的元素
void PrintfList(SeqList *L);
//在顺序表第i个位置插入x，成功返回1，否则0
int Insert(SeqList *L,int i, DataType x);
//查找元素值的位置,0为没有
int Locate(SeqList *L, int a);
//查找位置的元素，0为越界
int Get(SeqList* L, int a);
//删除位置a的元素
int Delete(SeqList* L, int a, DataType* x);