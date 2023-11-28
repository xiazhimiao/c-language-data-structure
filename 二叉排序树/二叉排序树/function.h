#pragma once
#include <stdio.h>
#include <malloc.h>
#include <iostream>
using namespace std;

typedef int DataType;
typedef struct BST_Node {
    DataType data;
    struct BST_Node* lchild, * rchild;
}BST_T, * BST_P;
//��������������
void CreateBST(BST_P* T, int a[], int n);
//�������
void Insert_BST(BST_P* root, DataType data);
//�ݹ����ң��ҵ����عؼ��ֵĽ��ָ�룬û�ҵ�����NULL��
BST_P Search_BST(BST_P root, DataType key);
//�������
void PreOrderTraverse(BST_P T);
//�������
void PostOrderTraverse(BST_P T);
//ɾ���ڵ�
void DeleteBSTNode(BST_P* root, DataType data);