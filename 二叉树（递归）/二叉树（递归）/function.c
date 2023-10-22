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
//扩展二叉树非递归中序建立二叉树
//BiNode* p0(BiNode* root)
//{
//	BiNode* s[10], * bt = root;
//	int top = -1;
//	char ch;
//	while (scanf("%c", &ch) != EOF)
//	{
//		
//			if (ch == '#')
//			{
//				root = NULL;
//			}
//			else
//			{
//				root = (BiNode*)malloc(sizeof(BiNode));// 生成新结点
//				root->data = ch;
//				s[++top] = bt;
//				bt = bt->lchild;
//			}
//	}
//}
//非递归前序遍历
void p1(BiNode* root)
{
	BiNode* s[10], * bt = root;
	int top = -1;
	printf("\n该二叉树的非递归前序遍历序列是：");
	while (bt != NULL || top != -1)
	{
		while (bt != NULL)
		{
			printf("%c", bt->data);
			s[++top] = bt;
			bt = bt->lchild;
		}
		if (top != -1)
		{
			bt = s[top--];
			bt = bt->rchild;
		}
	}
}
//非递归中序遍历
void p2(BiNode* root)
{
	BiNode* s[10], * bt = root;
	int top = -1;
	printf("\n该二叉树的非递归中序遍历序列是：");
	while (bt != NULL || top != -1)
	{
		while (bt != NULL)
		{
			s[++top] = bt;
			bt = bt->lchild;
		}
		if (top != -1)
		{
			bt = s[top--];
			printf("%c", bt->data);
			bt = bt->rchild;
		}
	}
}