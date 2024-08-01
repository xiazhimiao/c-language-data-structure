#define _CRT_SECURE_NO_WARNINGS
#include "function.h"

int main()
{
	srand((unsigned int)time(NULL));
	int arr[MAX+1];
	printf("直接插入排序\n");
	//初始化
	initialize(arr,MAX+1);
	//直接插入排序
	InsertSort(arr, MAX);
	//遍历输出
	traverse(arr, MAX+1);//含临时单元

	printf("希尔排序\n");
	//初始化
	initialize(arr, MAX + 1);
	//希尔排序
	ShellSort(arr, MAX);
	//遍历输出
	traverse(arr, MAX + 1);//含临时单元

	printf("快速排序\n");
	//初始化
	initialize(arr, MAX + 1);
	//快速排序
	QuickSort(arr, 0, MAX);
	//遍历输出
	traverse(arr, MAX + 1);//全排序

	printf("简单选择排序\n");
	//初始化
	initialize(arr, MAX + 1);
	//简单选择排序
	SelectSort(arr, MAX+1);
	//遍历输出
	traverse(arr, MAX + 1);//含临时单元

	printf("二路归并排序\n");
	//初始化
	initialize(arr, MAX + 1);
	//二路归并排序
	mergeSort(arr, MAX+1);
	//遍历输出
	traverse(arr, MAX + 1);//全排序

	return 0;
}