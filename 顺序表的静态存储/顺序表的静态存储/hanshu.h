#pragma once
#include <stdio.h>
#define MaxSize 100
typedef int DataType;
typedef struct
{
	DataType data[MaxSize]; //�������Ԫ�ص�����
	int length; //���Ա�ĳ���
}SeqList;
//��ʼ��˳���
void InitList(SeqList *L);
//����˳����ɹ�����1������0
int CreatList( SeqList *L,DataType r[],int n);
//��ӡ˳����е�Ԫ��
void PrintfList(SeqList *L);
//��˳����i��λ�ò���x���ɹ�����1������0
int Insert(SeqList *L,int i, DataType x);
//����Ԫ��ֵ��λ��,0Ϊû��
int Locate(SeqList *L, int a);
//����λ�õ�Ԫ�أ�0ΪԽ��
int Get(SeqList* L, int a);
//ɾ��λ��a��Ԫ��
int Delete(SeqList* L, int a, DataType* x);