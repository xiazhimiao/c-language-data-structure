#pragma once
#include <stdio.h>
#define MaxSize 100
typedef int DataType;
typedef struct
{
	DataType data[MaxSize]; //存放数据元素的数组
	int length; //线性表的长度
}SeqList;
void InitList(SeqList *L);//初始化顺序表
int CreatList( SeqList *L,DataType r[],int n);//建立顺序表，成功返回1，否则0
void PrintfList(SeqList *L);//打印顺序表中的元素
