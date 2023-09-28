#define _CRT_SECURE_NO_WARNINGS
#include "header.h"
//链栈的初始化
void InitStack(LinkStack* S)
{
    S->top = NULL;
    S->count = 0;
}
//插入元素a为新的栈顶元素
int Push(LinkStack* S, DataType a) {
    LinkStackPrt p = (LinkStackPrt)malloc(sizeof(StackNode));
    p->data = a;
    p->next = S->top;    //把当前的栈顶元素赋值给新节点的直接后继
    S->top= p; //将新的结点S赋值给栈顶指针
    S->count++;
    return 1;
}
void traverse(LinkStack* S)
{
    LinkStackPrt p = S->top;
    while (p)
    {
        if (p->data >= 10)
        {
            printf("%c", panduan(p->data));
        }
        else
        {
            printf("%d", p->data);
        }
        p = p->next;
    }
    printf("\n");
}
//若栈不空，则删除S的栈顶元素，用a返回其值，并返回1；否则返回0
int Pop(LinkStack* S, DataType* a) {
    LinkStackPrt p;
    if (S->count==0) {
        return 0;
    }
    *a = S->top->data;
    p = S->top; //将栈顶结点赋值给p
    S->top = S->top->next;  //使得栈顶指针下移一位，指向后一结点
    free(p);    //释放结点p
    S->count--;
    return 1;
}
void freeS(LinkStack*S)
{
    LinkStackPrt p = S->top;
    LinkStackPrt t = NULL;
    while (p)
    {
        t = p;
        p = p->next;
        free(t);

     }
}
void transition(LinkStack *S, DataType shu, int jinzhi)
{
  
    while (shu)
    {
        Push(&*(S), shu%jinzhi);
        shu /= jinzhi;
    }
}
char panduan(int data)
{
    switch (data)
    {
    case 10:
        return 'a';
    case 11:
        return 'b';
    case 12:
        return 'c';
    case 13:
        return 'd';
    case 14:
        return 'e';
    case 15:
        return 'f';
    default:
        return 0;
    }
}