#define _CRT_SECURE_NO_WARNINGS
#include "header.h"
//��ջ�ĳ�ʼ��
void InitStack(LinkStack* S)
{
    S->top = NULL;
    S->count = 0;
}
//����Ԫ��aΪ�µ�ջ��Ԫ��
int Push(LinkStack* S, DataType a) {
    LinkStackPrt p = (LinkStackPrt)malloc(sizeof(StackNode));
    p->data = a;
    p->next = S->top;    //�ѵ�ǰ��ջ��Ԫ�ظ�ֵ���½ڵ��ֱ�Ӻ��
    S->top= p; //���µĽ��S��ֵ��ջ��ָ��
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
//��ջ���գ���ɾ��S��ջ��Ԫ�أ���a������ֵ��������1�����򷵻�0
int Pop(LinkStack* S, DataType* a) {
    LinkStackPrt p;
    if (S->count==0) {
        return 0;
    }
    *a = S->top->data;
    p = S->top; //��ջ����㸳ֵ��p
    S->top = S->top->next;  //ʹ��ջ��ָ������һλ��ָ���һ���
    free(p);    //�ͷŽ��p
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