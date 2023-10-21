#define _CRT_SECURE_NO_WARNINGS
#include "function.h"
//扩展二叉树前序建立二叉树
BiNode* CreatBiTree(BiNode* root)
{
	char ch;
	scanf("%c", &ch);
	//getchar();
	if (ch == '#')
	{
		root = NULL;
	}
	else
	{
		root = (BiNode*)malloc(sizeof(BiNode));// 生成新结点
		root->data = ch;
		root->lchild = CreatBiTree(root->lchild);//递归建立左子树
		root->rchild = CreatBiTree(root->rchild);//递归建立右子树
	}
	return root;
}
//前序遍历
void PreOrder(BiNode* root)
{
	if (root == NULL)
		return;
	else
	{
		printf("%c", root->data);
		PreOrder(root->lchild);
		PreOrder(root->rchild);
	}
}
//中序遍历
void InOrder(BiNode* root) {
	if (root == NULL)
		return;
	else
	{
		InOrder(root->lchild);
		printf("%c", root->data);
		InOrder(root->rchild);
	}
}
//后序遍历
void PostOrder(BiNode* root) {
	if (root == NULL)
		return;
	else
	{
		PostOrder(root->lchild);
		PostOrder(root->rchild);
		printf("%c", root->data);
	}
}
void DestroyBiTree(BiNode* root) {
	if (root == NULL)
	{
		return;
	}
	DestroyBiTree(root->lchild);
	DestroyBiTree(root->rchild);
	free(root);
}