#include "header.h"
int main(void) {
	int n[5] = { 1,2,3,4,5 };
	SeqList L;//����LΪ���Ա�����
	InitList(&L);//��ʼ��˳���
	CreatList(&L, n, 5);//����˳���
	PrintfList(&L);//��ӡ˳����е�Ԫ��
	Insert(&L, 2, 5);
	PrintfList(&L);//��ӡ˳����е�Ԫ��
	printf("��ǰ˳���ĳ���Ϊ��%d\n", L.Length);//����ͨ��l.lengthֱ���õ�
	//����Ԫ�ص�λ��
	int a = 3;
	int i = Locate(&L, a);
	if (0 == i)
		printf("������\n");
	else
		printf("Ԫ��%d��λ����%d\n", a, i);
	//����λ�õ�Ԫ��
	a = 4;
	int b = Get(&L, a);
	if (b == 0)
		printf("����Խ��\n");
	else
		printf("��%d��Ԫ����%d\n", a, b);
	//ɾ��λ�õ�Ԫ��
	a = 5;
	int x = 0;
	if (Delete(&L, a, &x) == 1)
	{
		printf("ɾ����%d��Ԫ����%d��ɾ��������Ϊ��\n", a, x);
		PrintfList(&L);
		printf("˳����ʱ����Ϊ��%d\n", L.Length);
	}
	else
	{
		printf("ɾ������ʧ��");
	}
	//�������������
	//O_o
	free(L.data);//����˳���
	return 0;
}
