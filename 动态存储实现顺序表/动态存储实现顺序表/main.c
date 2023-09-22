#include "header.h"
int main(void) {
	int n[5] = { 1,2,3,4,5 };
	SeqList L;//定义L为线性表类型
	InitList(&L);//初始化顺序表
	CreatList(&L, n, 5);//建立顺序表
	PrintfList(&L);//打印顺序表中的元素
	Insert(&L, 2, 5);
	PrintfList(&L);//打印顺序表中的元素
	printf("当前顺序表的长度为：%d\n", L.Length);//长度通过l.length直接拿到
	//查找元素的位置
	int a = 3;
	int i = Locate(&L, a);
	if (0 == i)
		printf("不存在\n");
	else
		printf("元素%d的位置在%d\n", a, i);
	//查找位置的元素
	a = 4;
	int b = Get(&L, a);
	if (b == 0)
		printf("查找越界\n");
	else
		printf("第%d个元素是%d\n", a, b);
	//删除位置的元素
	a = 5;
	int x = 0;
	if (Delete(&L, a, &x) == 1)
	{
		printf("删除第%d个元素是%d，删除后数据为：\n", a, x);
		PrintfList(&L);
		printf("顺序表此时长度为：%d\n", L.Length);
	}
	else
	{
		printf("删除操作失败");
	}
	//完结撒花！！！
	//O_o
	free(L.data);//销毁顺序表
	return 0;
}
