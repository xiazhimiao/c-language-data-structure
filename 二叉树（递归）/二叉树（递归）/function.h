#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
typedef char DataType;
typedef struct BiNode {
	DataType data;
	struct BiNode* lchild, * rchild;//l为左孩子，r为右孩子
}BiNode;
//扩展二叉树前序建立二叉树
BiNode *CreatBiTree(BiNode *root);
//前序遍历
void PreOrder(BiNode* root);
//中序遍历
void InOrder(BiNode* root);
//后序遍历
void PostOrder(BiNode* root);
//销毁二叉树
void DestroyBiTree(BiNode *root);
//扩展二叉树非递归中序建立二叉树
//BiNode* p0(BiNode* root);
//非递归前序遍历
void p1(BiNode* root);
//非递归中序遍历
void p2(BiNode* root);
