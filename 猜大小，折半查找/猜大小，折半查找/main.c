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
            printf("目标元素 %d 在索引 %d 处找到\n", a, result);
        }
        else {
            printf("目标元素 %d 未找到\n", a);
        }
        getchar();

    }
    return 0;
}
// 使用当前时间作为随机数种子
//srand(time(NULL));
// 生成1到100之间的随机数
//int randomNumber = rand() % 100 + 1;
//printf("随机数: %d\n", randomNumber);