#pragma once
#include <stdio.h>
#include <iostream>
#include <time.h>
#define MAX 10
using namespace std;
//��ʼ��
void initialize(int arr[],int max);
//ֱ�Ӳ�������
void InsertSort(int arr[], int n);
//�������
void traverse(int arr[],int max);
//ϣ������
void ShellSort(int arr[], int n);
//��������
void QuickSort(int arr[], int low, int high);

