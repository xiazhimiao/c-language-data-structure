#define _CRT_SECURE_NO_WARNINGS
//#include "function.h"
#include <stdio.h>
#include <iostream>
#include <time.h>
#define MAX 5
using namespace std;
typedef struct student_a {
    char name[10];
    float grade;
} student_a, * student_b;
typedef struct data_a {
    student_b arr[MAX];
    int length;
} data_a, * data_b;

//��ʼ��
void initialize(data_b a, int n);
//����
void traverse(data_b a)
{
    for (int i = 0; i < a->length; ++i)
    {
        printf("��%d����%s���ɼ�Ϊ%d", i + 1, a->arr[i]->name,a->arr[i]->grade);
    }
}
//��ʼ��
void initialize(data_b a, int n)
{
    a->length = 0;
    for (int i = 0; i < n; ++i)
    {
        a->arr[i] = new student_a; // ������д��룬Ϊÿ��ѧ�������ڴ�ռ�
        cin >> a->arr[i]->name;
        cin >> a->arr[i]->grade;
        a->length += 1;
    }
}
//ֱ�Ӳ�������
void InsertSort(data_b a) {

    int i, j;
    bool a_a = false;
    int n = a->length;
    float arr[6];
    arr[0] = 0.0f;
    for (int c = 1; c <= a->length; ++c)
    {
        arr[c] = a->arr[c-1]->grade;
    }
    for (i = 2; i <= n; ++i)
    {
        arr[0] = arr[i];
        for (j = i - 1; arr[0] >arr[j]; --j)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = arr[0];
    }
    for (int c = 1; c <= a->length; ++c)
    {
        a_a = false;
        //a->arr[c-1]->grade = arr[c];
        for (int d = 0; d < a->length; ++d)
        {
            if (arr[c] == a->arr[d]->grade)
            {
                if (a_a)
                {
                    printf("��%dΪ����%s,�ɼ�Ϊ%f\n", c, a->arr[d]->name, a->arr[d]->grade);
                }
                printf("��%dΪ%s,�ɼ�Ϊ%f\n", c, a->arr[d]->name, a->arr[d]->grade);
                bool a_a = true;
                //continue;
            }


        }
    }
}
//��������
void swap(float* a, float* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(float arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] > pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void QuickSort(float arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        QuickSort(arr, low, pi - 1);
        QuickSort(arr, pi + 1, high);
    }


}
int main()
{
    data_b a = new data_a; // ������д��룬Ϊdata_a�ṹ������ڴ�ռ�
    initialize(a, MAX);
    //ֱ�Ӳ�������
    printf("ֱ�Ӳ�������\n");
    time_t start_time = time(NULL);
    InsertSort(a);
    // ��ȡ����ʱ��
    time_t end_time = time(NULL);
    // ��������ʱ��
    double run_time = difftime(end_time, start_time);

    printf("\n����ʱ��: %.30f ��\n", run_time);
    //��������
    printf("��������\n");
    float arr[MAX];
    for (int c = 0; c < a->length; ++c)
    {
        arr[c] = a->arr[c]->grade;
    }

    QuickSort(arr, 0, MAX-1);

    for (int c = 0; c < a->length; ++c)
    {
        for (int d = 0; d < a->length; ++d)
        {
            if (arr[c] == a->arr[d]->grade)
            {
                printf("��%dΪ%s,�ɼ�Ϊ%f\n", c+1, a->arr[d]->name, a->arr[d]->grade);
            }

        }
    }




    //����
    //traverse(a);
    delete a; // ������д��룬�ͷ��ڴ�ռ�
    return 0;
}
