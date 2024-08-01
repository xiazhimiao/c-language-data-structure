#pragma once
#include <stdio.h>
#include <iostream>
#include <time.h>
#include <malloc.h>
#define MAX 10
using namespace std;
//初始化
void initialize(int arr[],int max);
//直接插入排序
void InsertSort(int arr[], int n);
//遍历输出
void traverse(int arr[],int max);
//希尔排序
void ShellSort(int arr[], int n);
//快速排序
void QuickSort(int arr[], int low, int high);
//简单选择排序
void SelectSort(int arr[], int n);
//二路归并排序
void mergeSort(int arr[], int size);
