#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
typedef int DataType;
typedef struct {
	DataType data;
	struct Node* next;	
}Node;
//ͷ�巨
Node *CreatList1(DataType a[], int n);
//β�巨
Node* CreatList2(DataType a[], int n);
//��ӡ����
void PrintfList(Node *first);
//��������
int Insert(Node *first, int i, DataType x);
//���㵥������
int Length(Node* first);
//Ԫ�ز���
int Locate(Node *first, DataType x);
//λ��iԪ��ɾ��,ɾ���ɹ�����1
int Delete(Node *first, int i, DataType *x);
//���ٵ�����
void DestroyList(Node *first);
//δ�ú���---------------------------------------
//�пղ���,Ϊ�շ���1
int Empty(Node* first);
//



