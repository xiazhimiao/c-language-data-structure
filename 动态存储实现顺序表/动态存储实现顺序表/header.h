#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define InitSize  100
#define IncreSize 10
typedef int DataType;
typedef struct {
    DataType* data;
    int maxSize;
    int Length;
} SeqList;
//��ʼ��˳���
void InitList(SeqList* L);//��һ��
//����˳���
void CreatList(SeqList* L, DataType r[], int n);//��һ��
//��ӡ˳����е�Ԫ��
void PrintfList(SeqList* L);
//��˳����i��λ�ò���x���ɹ�����1������0
int Insert(SeqList* L, int i, DataType x);//��һ��
//����Ԫ��ֵ��λ��,0Ϊû��
int Locate(SeqList* L, int a);
//����λ�õ�Ԫ�أ�0ΪԽ��
int Get(SeqList* L, int a);
//ɾ��λ��a��Ԫ��
int Delete(SeqList* L, int a, DataType* x);
