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

//初始化
void initialize(data_b a, int n);
//遍历
void traverse(data_b a)
{
    for (int i = 0; i < a->length; ++i)
    {
        printf("第%d名是%s，成绩为%d", i + 1, a->arr[i]->name,a->arr[i]->grade);
    }
}
//初始化
void initialize(data_b a, int n)
{
    a->length = 0;
    for (int i = 0; i < n; ++i)
    {
        a->arr[i] = new student_a; // 添加这行代码，为每个学生分配内存空间
        cin >> a->arr[i]->name;
        cin >> a->arr[i]->grade;
        a->length += 1;
    }
}
//直接插入排序
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
                    printf("第%d为并列%s,成绩为%f\n", c, a->arr[d]->name, a->arr[d]->grade);
                }
                printf("第%d为%s,成绩为%f\n", c, a->arr[d]->name, a->arr[d]->grade);
                bool a_a = true;
                //continue;
            }


        }
    }
}
//快速排序
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
    data_b a = new data_a; // 添加这行代码，为data_a结构体分配内存空间
    initialize(a, MAX);
    //直接插入排序
    printf("直接插入排序\n");
    time_t start_time = time(NULL);
    InsertSort(a);
    // 获取结束时间
    time_t end_time = time(NULL);
    // 计算运行时间
    double run_time = difftime(end_time, start_time);

    printf("\n运行时间: %.30f 秒\n", run_time);
    //快速排序
    printf("快速排序\n");
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
                printf("第%d为%s,成绩为%f\n", c+1, a->arr[d]->name, a->arr[d]->grade);
            }

        }
    }




    //遍历
    //traverse(a);
    delete a; // 添加这行代码，释放内存空间
    return 0;
}
