#pragma once
#include <stdio.h>
#define MaxSize 100
typedef int DataType;
typedef struct
{
	DataType data[MaxSize]; //�������Ԫ�ص�����
	int length; //���Ա�ĳ���
}SeqList;
void InitList(SeqList *L);//��ʼ��˳���
int CreatList( SeqList *L,DataType r[],int n);//����˳����ɹ�����1������0
void PrintfList(SeqList *L);//��ӡ˳����е�Ԫ��
