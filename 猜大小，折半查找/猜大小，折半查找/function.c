#define _CRT_SECURE_NO_WARNINGS
#include "function.h"
void initialization(int arr[MAX], int max) {
    int randomNumber = rand() % 100 + 1;
    for (int i = 0; i < max; i++) {
        arr[i] = randomNumber+i;  // ������Ԫ�ؽ��г�ʼ��
        printf("��%d������%d\n",i, arr[i]);
    }
    printf("��ʼ�����\n");
}
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;  // �ҵ�Ŀ��Ԫ�أ���������
        }
        else if (arr[mid] < target) {
            left = mid + 1;  // Ŀ��Ԫ�ؿ������Ҳ�
        }
        else {
            right = mid - 1;  // Ŀ��Ԫ�ؿ��������
        }
    }

    return -1;  // û���ҵ�Ŀ��Ԫ��
}