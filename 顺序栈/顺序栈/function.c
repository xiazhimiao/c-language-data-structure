#define _CRT_SECURE_NO_WARNINGS
#include "header.h"
//顺序栈的初始化
void InitStack(SqStack* S) {
    S->top = -1;   
}
//判断栈空返回1
int StackEmpty(SqStack S) {
    if (S.top == -1) {
        return 1;    //栈空
    }
    else {
        return 0;   //不空
    }
}
//插入a为新的栈顶元素
int Push(SqStack* S, DataType a) {
    //满栈退出函数
    if (S->top == MAXSIZE - 1) {
        return 0;
    }
    S->top++;   //栈顶指针增加一
    S->data[S->top] = a;    //将新插入元素赋值给栈顶空间
    return 1;
}
/*若栈不空，则删除S的栈顶元素，用e返回其值，并返回OK；否则返回ERROR*/
int Pop(SqStack* S, DataType* a) {
    if (S->top == -1) {
        return 0;
    }
    *a = S->data[S->top];   //将要删除的栈顶元素赋值给a
    S->top--;   //栈顶指针减一
    return 1;
}
//取栈顶元素
int GetTop(SqStack* S, DataType* a) {
    //栈空退出函数
    if (S->top == -1) {   
        return 0;
    }
    *a = S->data[S->top];  
    return 1;
}
//顺序栈的遍历
void traverse(SqStack* S)
{
    if (S->top==-1)
    {
        printf("顺序栈为空\n");
        return;
    }
    printf("------栈顶------\n");
    for (int i = S->top; i >= 0; --i)
    {
        printf("-----%4d-------\n",S->data[i]);
    }
    printf("------栈底------\n");
}

