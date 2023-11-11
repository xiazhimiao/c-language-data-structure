#define _CRT_SECURE_NO_WARNINGS
#include "function.h"
int main()
{
    int arr[] = { 17,12,19,10,15,18,25,8,11,13,16,22 };

    BST_P root = NULL;

    //创建二叉排序树
    CreateBST(&root, arr, 12);
    printf("创建完成: ");
    printf("\n先序遍历:");
    PreOrderTraverse(root);
    printf("\n后序遍历:");
    PostOrderTraverse(root);
    cout << endl;

    //在二叉排序树中查找节点
    printf("\n请输入要查找的节点： ");
    int data_a = 0;
    cin >> data_a;
    BST_P result = Search_BST(root, data_a);
    if (result) {
        cout << "查找结果：\n" << "指针：" << result << endl << "指针的值：" << result->data << endl;
    }
    else {
        cout << "没找到" << endl;
    }

    //在二叉排序树中插入节点
    printf("\n请输入要插入的节点： ");
    int data_b = 0;
    cin >> data_b;
    Insert_BST(&root, data_b);
    printf("\n插入节点: ");
    printf("\n先序遍历:");
    PreOrderTraverse(root);
    printf("\n后序遍历:");
    PostOrderTraverse(root);
    cout << endl;

    //删除二叉排序树中的节点
    printf("\n请输入要删除的节点： ");
    int data_c = 0;
    cin >> data_c;
    DeleteBSTNode(&root, data_c);
    printf("\n删除节点:");
    printf("\n先序遍历:");
    PreOrderTraverse(root);
    printf("\n后序遍历:");
    PostOrderTraverse(root);
    printf("\n");
    return 0;
}