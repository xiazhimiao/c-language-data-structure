#define _CRT_SECURE_NO_WARNINGS
#include "header.h"
int main()
{
	//循环队列是通过浪费一个空间的方式，来区别队列满否
	DataType x=0;
	CirQueue Q;           //定义结构体变量Q为循环队列类型
	InitQueue(&Q);        //初始化循环队列Q
	//对5和8执行入队操作
	EnQueue(&Q, 5);
	EnQueue(&Q, 8);
	

	//取队头元素
	if (GerHead(&Q, &x) == 1)
	{
		printf("当前队头元素为：%d\n", x);
	}
	else
	{
		printf("获取错误\n");
	}
	//出队操作
	if (DeQueue(&Q, &x) == 1)
	{
		printf("执行一次出队操作，出队元素为：%d\n", x); 
	}
	else
	{
		printf("出队错误\n");
	}
	//取队头元素
	if (GerHead(&Q, &x) == 1)
	{
		printf("当前队头元素为：%d\n", x);
	}
	else
	{
		printf("获取错误\n");
	}
	//交互
	printf("请输入入队元素：\n");
	scanf("%d", &x);
	EnQueue(&Q, x);
	if (Empty(&Q) == 1)
	{
		printf("队列为空\n");
	}
	else
	{
		printf("队列非空\n");
	}

	return 0;
}
