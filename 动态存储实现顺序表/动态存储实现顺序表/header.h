#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define InitSize  100
#define IncreSize 10
typedef int DataType;
typedef struct {
    DataType* data;
    int maxSize;
    int Length;
} SeqList;
//初始化顺序表
void InitList(SeqList* L);//不一样
//建立顺序表
void CreatList(SeqList* L, DataType r[], int n);//不一样
//打印顺序表中的元素
void PrintfList(SeqList* L);
//在顺序表第i个位置插入x，成功返回1，否则0
int Insert(SeqList* L, int i, DataType x);//不一样
//查找元素值的位置,0为没有
int Locate(SeqList* L, int a);
//查找位置的元素，0为越界
int Get(SeqList* L, int a);
//删除位置a的元素
int Delete(SeqList* L, int a, DataType* x);
