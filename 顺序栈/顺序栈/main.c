#define _CRT_SECURE_NO_WARNINGS
#include "header.h"
int main()
{
	SqStack L;
	InitStack(&L);//ջ�ĳ�ʼ��
	Push(&L, 2);//����ջ��Ԫ��
	Push(&L, 22);
	Push(&L, 222);
	Push(&L, 2222);
	traverse(&L);//ջ�ı���
	DataType a,b;
	a = 0;
	b = 0;
	Pop(&L, &a);//ɾ��ջ��Ԫ��
	traverse(&L);//ջ�ı���
	GetTop(&L, &b);
	printf("ջ��Ԫ��Ϊ��%d", b);
	return 0;
}