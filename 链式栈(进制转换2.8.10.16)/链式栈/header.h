#pragma once
#include <stdio.h>
#include <stdlib.h>
typedef int DataType;
//����ڵ�
typedef struct StackNode {
    DataType data;
    struct StackNode* next;
}StackNode, * LinkStackPrt;
//������ջ
typedef struct LinkStack {
    LinkStackPrt top;
    int count;
}LinkStack;
//��ջ�ĳ�ʼ��
void InitStack(LinkStack* S);
//����Ԫ��aΪ�µ�ջ��Ԫ��
int Push(LinkStack* S, DataType a);
//��ջ���գ���ɾ��S��ջ��Ԫ�أ���a������ֵ��������1�����򷵻�0
int Pop(LinkStack* S, DataType* a);
//����
void traverse(LinkStack* S);
//����
void freeS(LinkStack* S);
//����ת��
void transition(LinkStack *S, DataType shu, int jinzhi);
//����16�ж�
char panduan(int data);

