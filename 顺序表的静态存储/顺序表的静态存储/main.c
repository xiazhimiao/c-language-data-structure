#define _CRT_SECURE_NO_WARNINGS
#include "hanshu.h"
int main()
{
	int r[5] = { 1,2,3,4,5 };
	SeqList L; //����LΪ���Ա�����
	InitList(&L);//��ʼ��˳���
	CreatList(&L, r, 5);//����˳���
	PrintfList(&L);//��ӡ˳����е�Ԫ��
	//printf("%d", L.data[6]);˳���̬�洢���������齨���������±��0��ʼ
	return 0;
}