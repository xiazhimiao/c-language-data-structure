#define _CRT_SECURE_NO_WARNINGS
#include "header.h"
void InitQueue(CirQueue* Q)
{
	Q->front = Q->rear = QueueSize - 1;	
}
int EnQueue(CirQueue* Q, DataType x)
{
	if ((Q->rear + 1) % QueueSize == Q->front)
	{
		printf("ÉÏÒç´íÎó£¬²åÈëÊ§°Ü\n");
		return 0;
	}
	Q->rear = (Q->rear + 1) % QueueSize;
	Q->data[Q->rear] = x;
	return 1;
}
int GerHead(CirQueue* Q, DataType* ptr)
{
	int i = 0;
	if (Q->rear == Q->front)
	{
		printf("ÏÂÒç´íÎó£¬È¡¶ÓÍ·Ê§°Ü\n");
		return 0;
	}
	i = (Q->front + 1) % QueueSize;
	*ptr = Q->data[i];
	return 1;
}
int DeQueue(CirQueue* Q, DataType* ptr)
{
	if (Q->rear == Q->front)
	{
		printf("ÏÂÒç´íÎó£¬É¾³ıÊ§°Ü\n");
		return 0;
	}
	Q->front = (Q->front + 1) % QueueSize;
	*ptr = Q->data[Q->front];
	return 1;
}
int Empty(CirQueue* Q)
{
	if (Q->front == Q->rear)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}