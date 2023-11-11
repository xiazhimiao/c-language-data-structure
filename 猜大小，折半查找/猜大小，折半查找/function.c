#define _CRT_SECURE_NO_WARNINGS
#include "function.h"
void initialization(int arr[MAX], int max) {
    int randomNumber = rand() % 100 + 1;
    for (int i = 0; i < max; i++) {
        arr[i] = randomNumber+i;  // 对数组元素进行初始化
        printf("第%d个数：%d\n",i, arr[i]);
    }
    printf("初始化完成\n");
}
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;  // 找到目标元素，返回索引
        }
        else if (arr[mid] < target) {
            left = mid + 1;  // 目标元素可能在右侧
        }
        else {
            right = mid - 1;  // 目标元素可能在左侧
        }
    }

    return -1;  // 没有找到目标元素
}