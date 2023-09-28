#define _CRT_SECURE_NO_WARNINGS
#include "header.h"
//˳��ջ�ĳ�ʼ��
void InitStack(SqStack* S) {
    S->top = -1;   
}
//�ж�ջ�շ���1
int StackEmpty(SqStack S) {
    if (S.top == -1) {
        return 1;    //ջ��
    }
    else {
        return 0;   //����
    }
}
//����aΪ�µ�ջ��Ԫ��
int Push(SqStack* S, DataType a) {
    //��ջ�˳�����
    if (S->top == MAXSIZE - 1) {
        return 0;
    }
    S->top++;   //ջ��ָ������һ
    S->data[S->top] = a;    //���²���Ԫ�ظ�ֵ��ջ���ռ�
    return 1;
}
/*��ջ���գ���ɾ��S��ջ��Ԫ�أ���e������ֵ��������OK�����򷵻�ERROR*/
int Pop(SqStack* S, DataType* a) {
    if (S->top == -1) {
        return 0;
    }
    *a = S->data[S->top];   //��Ҫɾ����ջ��Ԫ�ظ�ֵ��a
    S->top--;   //ջ��ָ���һ
    return 1;
}
//ȡջ��Ԫ��
int GetTop(SqStack* S, DataType* a) {
    //ջ���˳�����
    if (S->top == -1) {   
        return 0;
    }
    *a = S->data[S->top];  
    return 1;
}
//˳��ջ�ı���
void traverse(SqStack* S)
{
    if (S->top==-1)
    {
        printf("˳��ջΪ��\n");
        return;
    }
    printf("------ջ��------\n");
    for (int i = S->top; i >= 0; --i)
    {
        printf("-----%4d-------\n",S->data[i]);
    }
    printf("------ջ��------\n");
}

