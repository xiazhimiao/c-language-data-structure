#pragma once
#include <stdio.h>
#define QueueSize 100     //�����������󳤶�
typedef int DataType;     //�������Ԫ�ص��������ͣ�����Ϊint��
typedef struct
{
	DataType data[QueueSize];     //��Ŷ���Ԫ�ص�����
	int front, rear;              //�±꣬��ͷԪ�غͶ�βԪ�ص�λ��
}CirQueue;
//��ʼ��ѭ������
void InitQueue(CirQueue* Q);
//��Ӳ������ɹ�����1
int EnQueue(CirQueue* Q, DataType x);
//��ȡ��ͷԪ��
int GerHead(CirQueue* Q, DataType* ptr);
//���Ӳ���
int DeQueue(CirQueue*Q, DataType *ptr);
//�пգ�Ϊ�շ���1
int Empty(CirQueue* Q);