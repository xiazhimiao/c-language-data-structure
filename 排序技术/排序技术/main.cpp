#define _CRT_SECURE_NO_WARNINGS
#include "function.h"

int main()
{
	srand((unsigned int)time(NULL));
	int arr[MAX+1];
	printf("ֱ�Ӳ�������\n");
	//��ʼ��
	initialize(arr,MAX+1);
	//ֱ�Ӳ�������
	InsertSort(arr, MAX);
	//�������
	traverse(arr, MAX+1);//����ʱ��Ԫ

	printf("ϣ������\n");
	//��ʼ��
	initialize(arr, MAX + 1);
	//ϣ������
	ShellSort(arr, MAX);
	//�������
	traverse(arr, MAX + 1);//����ʱ��Ԫ

	printf("��������\n");
	//��ʼ��
	initialize(arr, MAX + 1);
	//��������
	QuickSort(arr, 0, MAX);
	//�������
	traverse(arr, MAX + 1);//ȫ����

	printf("��ѡ������\n");
	//��ʼ��
	initialize(arr, MAX + 1);
	//��ѡ������
	SelectSort(arr, MAX+1);
	//�������
	traverse(arr, MAX + 1);//����ʱ��Ԫ

	printf("��·�鲢����\n");
	//��ʼ��
	initialize(arr, MAX + 1);
	//��·�鲢����
	mergeSort(arr, MAX+1);
	//�������
	traverse(arr, MAX + 1);//ȫ����

	return 0;
}