#pragma once
#include <stdio.h>
#include <stdlib.h>
typedef int DataType;
//定义节点
typedef struct StackNode {
    DataType data;
    struct StackNode* next;
}StackNode, * LinkStackPrt;
//构造链栈
typedef struct LinkStack {
    LinkStackPrt top;
    int count;
}LinkStack;
//链栈的初始化
void InitStack(LinkStack* S);
//插入元素a为新的栈顶元素
int Push(LinkStack* S, DataType a);
//若栈不空，则删除S的栈顶元素，用a返回其值，并返回1；否则返回0
int Pop(LinkStack* S, DataType* a);
//遍历
void traverse(LinkStack* S);
//销毁
void freeS(LinkStack* S);
//进制转换
void transition(LinkStack *S, DataType shu, int jinzhi);
//进制16判断
char panduan(int data);

