#pragma once
#include <stdio.h>
#define QueueSize 100     //定义数组的最大长度
typedef int DataType;     //定义队列元素的数据类型，假设为int型
typedef struct
{
	DataType data[QueueSize];     //存放队列元素的数组
	int front, rear;              //下标，队头元素和队尾元素的位置
}CirQueue;
//初始化循环队列
void InitQueue(CirQueue* Q);
//入队操作，成功返回1
int EnQueue(CirQueue* Q, DataType x);
//获取队头元素
int GerHead(CirQueue* Q, DataType* ptr);
//出队操作
int DeQueue(CirQueue*Q, DataType *ptr);
//判空，为空返回1
int Empty(CirQueue* Q);