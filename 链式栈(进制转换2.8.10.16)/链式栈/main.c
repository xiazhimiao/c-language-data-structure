#define _CRT_SECURE_NO_WARNINGS
#include "header.h"
int main()
{
	LinkStack S;
	InitStack(&S);//��ʼ����
	//Push(&S, 2);//ѹ��Ԫ��
	//Push(&S, 22);
	//Push(&S, 222);
	//Push(&S, 2222);

	int shu ,jinzhi;
	while (1)
	{
		scanf("%d %d", &shu, &jinzhi);
		transition(&S, shu, jinzhi);//����ת��
		traverse(&S);//����
		freeS(&S);
		InitStack(&S);//��ʼ����
	}
	
	//int a = 0;
	//Pop(&S, &a);//ɾ��
	//traverse(&S);
	//freeS(&S);

	/*printf("%d",S.top->data);
	printf("%d", S.top->next);*/

	return 0;
}