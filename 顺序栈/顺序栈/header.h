#pragma once
#include <stdio.h>
#define MAXSIZE 50  //����ջ��Ԫ�ص�������
typedef int DataType;   //<=9999
typedef struct {
    DataType data[MAXSIZE];
    int top;    //����ջ��ָ��
}SqStack;         //  SqStackӢ��������˳��ջ
//˳��ջ�ĳ�ʼ��
void InitStack(SqStack* S);
//����Ԫ��aΪ�µ�ջ��Ԫ��
int Push(SqStack* S, DataType a);
//��ջ���գ���ɾ��S��ջ��Ԫ�أ���a������ֵ��������1�����򷵻�0
int Pop(SqStack* S, DataType* a);
//��ջ��Ԫ��
int GetTop(SqStack* S, DataType* a);
//˳��ջ�ı���
void traverse(SqStack* S);