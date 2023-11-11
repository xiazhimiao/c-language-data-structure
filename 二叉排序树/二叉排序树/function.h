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
//创建二叉排序树
void CreateBST(BST_P* T, int a[], int n);
//插入代码
void Insert_BST(BST_P* root, DataType data);
//递归版查找（找到返回关键字的结点指针，没找到返回NULL）
BST_P Search_BST(BST_P root, DataType key);
//先序遍历
void PreOrderTraverse(BST_P T);
//后序遍历
void PostOrderTraverse(BST_P T);
//删除节点
void DeleteBSTNode(BST_P* root, DataType data);