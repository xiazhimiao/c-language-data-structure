#define _CRT_SECURE_NO_WARNINGS
#include "function.h"
//初始化
void initialize(int arr[],int max)
{
	printf("乱序数组为：");
	for (int i = 0; i < max; ++i)
	{
		arr[i] = rand() % 100 + 1;
		cout << arr[i] << " ";
	}
	cout << endl;
}
//直接插入排序
void InsertSort(int arr[],int n) {
	int i, j;
	for (i = 2; i <= n; ++i)
	{
		arr[0] = arr[i];
		for (j = i - 1; arr[0] < arr[j]; --j)
		{
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = arr[0];
	}
}
//遍历输出
void traverse(int arr[], int max)
{
	printf("数组data：");
	for (int i = 0; i <max; ++i)
	{
		if (i == 0)
		{
			printf("[%d] ", arr[i]);
			continue;
		}
		cout << arr[i] << " ";
	}
	cout << endl;
}
//希尔排序
void ShellSort(int arr[], int n)
{
	int d, i, j;
	for (d = n / 2; d >= 1; d = d / 2)
	{
		for (i = d + 1; i <= n; ++i)
		{
			arr[0] = arr[i];
			for (j = i - d; j > 0 && arr[0] < arr[j]; j = j - d)
			{
				arr[j + d] = arr[j];
			}
			arr[j + d] = arr[0];
		}
	}
}
//快速排序
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int partition(int arr[], int low, int high) {
	int pivot = arr[high];
	int i = (low - 1);

	for (int j = low; j <= high - 1; j++) {
		if (arr[j] < pivot) {
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}
void QuickSort(int arr[], int low, int high) {
	if (low < high) {
		int pi = partition(arr, low, high);
		QuickSort(arr, low, pi - 1);
		QuickSort(arr, pi + 1, high);
	}
}
