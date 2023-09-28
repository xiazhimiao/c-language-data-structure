#define _CRT_SECURE_NO_WARNINGS
#include "header.h"
int main()
{
	SqStack L;
	InitStack(&L);//栈的初始化
	Push(&L, 2);//插入栈顶元素
	Push(&L, 22);
	Push(&L, 222);
	Push(&L, 2222);
	traverse(&L);//栈的遍历
	DataType a,b;
	a = 0;
	b = 0;
	Pop(&L, &a);//删除栈顶元素
	traverse(&L);//栈的遍历
	GetTop(&L, &b);
	printf("栈顶元素为：%d", b);
	return 0;
}