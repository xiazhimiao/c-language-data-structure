#define _CRT_SECURE_NO_WARNINGS
#include "function.h"

int main()
{
	srand((unsigned int)time(NULL));
	int arr[MAX+1];
	//��ʼ��
	initialize(arr,MAX+1);
	//ֱ�Ӳ�������
	InsertSort(arr, MAX);
	//�������
	traverse(arr, MAX+1);

	//��ʼ��
	initialize(arr, MAX + 1);
	//ϣ������
	ShellSort(arr, MAX);
	//�������
	traverse(arr, MAX + 1);

	//��ʼ��
	initialize(arr, MAX + 1);
	//��������
	QuickSort(arr, 0, MAX);
	//�������
	traverse(arr, MAX + 1);//ȫ����

	//ѡ�����򡢹鲢����

	return 0;
}