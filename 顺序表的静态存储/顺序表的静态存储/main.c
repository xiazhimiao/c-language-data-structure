#define _CRT_SECURE_NO_WARNINGS
#include "hanshu.h"
int main()
{
	int r[5] = { 1,2,3,4,5 };
	SeqList L; //定义L为线性表类型
	InitList(&L);//初始化顺序表
	CreatList(&L, r, 5);//建立顺序表
	PrintfList(&L);//打印顺序表中的元素
	//printf("%d", L.data[6]);顺序表静态存储是利用数组建立，所以下标从0开始
	return 0;
}