#define _CRT_SECURE_NO_WARNINGS
#include "function.h"

int main()
{
	srand((unsigned int)time(NULL));
	int arr[MAX+1];
	//初始化
	initialize(arr,MAX+1);
	//直接插入排序
	InsertSort(arr, MAX);
	//遍历输出
	traverse(arr, MAX+1);

	//初始化
	initialize(arr, MAX + 1);
	//希尔排序
	ShellSort(arr, MAX);
	//遍历输出
	traverse(arr, MAX + 1);

	//初始化
	initialize(arr, MAX + 1);
	//快速排序
	QuickSort(arr, 0, MAX);
	//遍历输出
	traverse(arr, MAX + 1);//全排序

	//选择排序、归并排序

	return 0;
}