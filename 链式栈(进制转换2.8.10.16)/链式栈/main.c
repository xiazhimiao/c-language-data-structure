#define _CRT_SECURE_NO_WARNINGS
#include "header.h"
int main()
{
	LinkStack S;
	InitStack(&S);//初始化链
	//Push(&S, 2);//压入元素
	//Push(&S, 22);
	//Push(&S, 222);
	//Push(&S, 2222);

	int shu ,jinzhi;
	while (1)
	{
		scanf("%d %d", &shu, &jinzhi);
		transition(&S, shu, jinzhi);//进制转换
		traverse(&S);//遍历
		freeS(&S);
		InitStack(&S);//初始化链
	}
	
	//int a = 0;
	//Pop(&S, &a);//删除
	//traverse(&S);
	//freeS(&S);

	/*printf("%d",S.top->data);
	printf("%d", S.top->next);*/

	return 0;
}