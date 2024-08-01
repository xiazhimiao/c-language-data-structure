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

//简单选择排序
void SelectSort(int arr[], int n)
{
	int i, j, index;
	for (i = 1; i < n; ++i)
	{
		index = i;
		for (j = i + 1; j < n; ++j)
		{
			if (arr[j] < arr[index])
			{
				index = j;
			}
		}
		if (index != i)
		{
			arr[0] = arr[i]; arr[i] = arr[index]; arr[index] = arr[0];
		}
	}
}
//二路归并排序
void Merge(int r[], int s, int m, int t)
{
	int r1[100];
	int i = s, j = m + 1, k = s;
	while (i <= m && j <= t)
	{
		if (r[i] <= r[j])r1[k++] = r[i++];
		else r1[k++] = r[j++];
	}
	while (i <= m)
	{
		r1[k++] = r[i++];
	}
	while (j <= t)
	{
		r1[k++] = r[j++];
	}
	for (i = s; i < t; ++i)
	{
		r[i] = r1[i];
	}
}
void MergeSort1(int r[], int s, int t)
{
	int  m;
	if (s == t)return;
	m = (s + t) / 2;
	MergeSort1(r, s, m);
	MergeSort1(r, m + 1, t);
	Merge(r, s, m, t);

}
//二路归并排序
void merge(int arr[], int left[], int leftSize, int right[], int rightSize) {
	int i = 0, j = 0, k = 0;

	while (i < leftSize && j < rightSize) {
		if (left[i] <= right[j]) {
			arr[k++] = left[i++];
		}
		else {
			arr[k++] = right[j++];
		}
	}

	while (i < leftSize) {
		arr[k++] = left[i++];
	}

	while (j < rightSize) {
		arr[k++] = right[j++];
	}
}

void mergeSort(int arr[], int size) {
	if (size <= 1) {
		return;
	}

	int mid = size / 2;
	int* left = (int*)malloc(mid * sizeof(int));
	int* right = (int*)malloc((size - mid) * sizeof(int));

	for (int i = 0; i < mid; i++) {
		left[i] = arr[i];
	}

	for (int i = mid; i < size; i++) {
		right[i - mid] = arr[i];
	}

	mergeSort(left, mid);
	mergeSort(right, size - mid);
	merge(arr, left, mid, right, size - mid);

	free(left);
	free(right);
}

