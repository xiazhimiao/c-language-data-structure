#define _CRT_SECURE_NO_WARNINGS
#include "head.h"
int main()
{
	int r[5] = { 1,2,3,4,5 }, i, x;
	Node* first = NULL;//ͷָ��
	first = CreatList1(r, 5);//ͷ�巨
	PrintfList(first);
	Insert(first, 1, 8);
	PrintfList(first);
	printf("��ǰ������%d\n", Length(first));
	//Ԫ�ز���
	x = 2;
	i = Locate(first, x);
	if (i!=0)
	{
		printf("Ԫ��%d��λ����%d\n", x, i);
	}
	else
	{
		printf("������û�����Ԫ��\n");
	}
	//ɾ����i��Ԫ��
	i = 3;
	if (Delete(first, i, &x) == 1)
	{
		printf("ɾ����%d��Ԫ����%d\n", i, x);
		printf("ɾ��������Ϊ��");
		PrintfList(first);
	}
	else
	{
		printf("ɾ������ʧ��\n");
	}
	DestroyList(first);
	return 0;
}