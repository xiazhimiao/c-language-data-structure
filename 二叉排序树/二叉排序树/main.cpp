#define _CRT_SECURE_NO_WARNINGS
#include "function.h"
int main()
{
    int arr[] = { 17,12,19,10,15,18,25,8,11,13,16,22 };

    BST_P root = NULL;

    //��������������
    CreateBST(&root, arr, 12);
    printf("�������: ");
    printf("\n�������:");
    PreOrderTraverse(root);
    printf("\n�������:");
    PostOrderTraverse(root);
    cout << endl;

    //�ڶ����������в��ҽڵ�
    printf("\n������Ҫ���ҵĽڵ㣺 ");
    int data_a = 0;
    cin >> data_a;
    BST_P result = Search_BST(root, data_a);
    if (result) {
        cout << "���ҽ����\n" << "ָ�룺" << result << endl << "ָ���ֵ��" << result->data << endl;
    }
    else {
        cout << "û�ҵ�" << endl;
    }

    //�ڶ����������в���ڵ�
    printf("\n������Ҫ����Ľڵ㣺 ");
    int data_b = 0;
    cin >> data_b;
    Insert_BST(&root, data_b);
    printf("\n����ڵ�: ");
    printf("\n�������:");
    PreOrderTraverse(root);
    printf("\n�������:");
    PostOrderTraverse(root);
    cout << endl;

    //ɾ�������������еĽڵ�
    printf("\n������Ҫɾ���Ľڵ㣺 ");
    int data_c = 0;
    cin >> data_c;
    DeleteBSTNode(&root, data_c);
    printf("\nɾ���ڵ�:");
    printf("\n�������:");
    PreOrderTraverse(root);
    printf("\n�������:");
    PostOrderTraverse(root);
    printf("\n");
    return 0;
}