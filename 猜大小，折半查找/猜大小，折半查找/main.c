#define _CRT_SECURE_NO_WARNINGS
#include "function.h"
int main()
{
    srand((unsigned int)time(NULL));
    int arr[MAX];
    initialization(arr, MAX);
    int a = 0;
    while (scanf("%d", &a) != EOF)
    { 
        int result = binarySearch(arr, MAX, a);

        if (result != -1) {
            printf("Ŀ��Ԫ�� %d ������ %d ���ҵ�\n", a, result);
        }
        else {
            printf("Ŀ��Ԫ�� %d δ�ҵ�\n", a);
        }
        getchar();

    }
    return 0;
}
// ʹ�õ�ǰʱ����Ϊ���������
//srand(time(NULL));
// ����1��100֮��������
//int randomNumber = rand() % 100 + 1;
//printf("�����: %d\n", randomNumber);