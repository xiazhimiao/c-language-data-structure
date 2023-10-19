#define _CRT_SECURE_NO_WARNINGS
#include "function.h"
BiNode* CreatBiTree(BiNode* root)
{
	char ch;
	scanf("%c", &ch);
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
		PreOrder(root->lchild);
		printf("%c", root->data);
		PreOrder(root->rchild);
	}
}
//后序遍历
void PostOrder(BiNode* root) {
	if (root == NULL)
		return;
	else
	{
		PreOrder(root->lchild);
		PreOrder(root->rchild);
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