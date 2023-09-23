#define _CRT_SECURE_NO_WARNINGS
#include "head.h"
int main()
{
	int r[5] = { 1,2,3,4,5 }, i, x;
	Node* first = NULL;//头指针
	first = CreatList1(r, 5);//头插法
	PrintfList(first);
	Insert(first, 1, 8);
	PrintfList(first);
	printf("当前链表长度%d\n", Length(first));
	//元素查找
	x = 2;
	i = Locate(first, x);
	if (i!=0)
	{
		printf("元素%d的位置在%d\n", x, i);
	}
	else
	{
		printf("链表中没有这个元素\n");
	}
	//删除第i个元素
	i = 3;
	if (Delete(first, i, &x) == 1)
	{
		printf("删除第%d个元素是%d\n", i, x);
		printf("删除后单链表为：");
		PrintfList(first);
	}
	else
	{
		printf("删除操作失败\n");
	}
	DestroyList(first);
	return 0;
}