#define _CRT_SECURE_NO_WARNINGS
#include "header.h"
int main()
{
	//ѭ��������ͨ���˷�һ���ռ�ķ�ʽ���������������
	DataType x=0;
	CirQueue Q;           //����ṹ�����QΪѭ����������
	InitQueue(&Q);        //��ʼ��ѭ������Q
	//��5��8ִ����Ӳ���
	EnQueue(&Q, 5);
	EnQueue(&Q, 8);
	

	//ȡ��ͷԪ��
	if (GerHead(&Q, &x) == 1)
	{
		printf("��ǰ��ͷԪ��Ϊ��%d\n", x);
	}
	else
	{
		printf("��ȡ����\n");
	}
	//���Ӳ���
	if (DeQueue(&Q, &x) == 1)
	{
		printf("ִ��һ�γ��Ӳ���������Ԫ��Ϊ��%d\n", x); 
	}
	else
	{
		printf("���Ӵ���\n");
	}
	//ȡ��ͷԪ��
	if (GerHead(&Q, &x) == 1)
	{
		printf("��ǰ��ͷԪ��Ϊ��%d\n", x);
	}
	else
	{
		printf("��ȡ����\n");
	}
	//����
	printf("���������Ԫ�أ�\n");
	scanf("%d", &x);
	EnQueue(&Q, x);
	if (Empty(&Q) == 1)
	{
		printf("����Ϊ��\n");
	}
	else
	{
		printf("���зǿ�\n");
	}

	return 0;
}
