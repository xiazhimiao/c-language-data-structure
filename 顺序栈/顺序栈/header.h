#pragma once
#include <stdio.h>
#define MAXSIZE 50  //定义栈中元素的最大个数
typedef int DataType;   //<=9999
typedef struct {
    DataType data[MAXSIZE];
    int top;    //用于栈顶指针
}SqStack;         //  SqStack英文释义是顺序栈
//顺序栈的初始化
void InitStack(SqStack* S);
//插入元素a为新的栈顶元素
int Push(SqStack* S, DataType a);
//若栈不空，则删除S的栈顶元素，用a返回其值，并返回1；否则返回0
int Pop(SqStack* S, DataType* a);
//读栈顶元素
int GetTop(SqStack* S, DataType* a);
//顺序栈的遍历
void traverse(SqStack* S);