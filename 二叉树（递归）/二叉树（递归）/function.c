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
		root = (BiNode*)malloc(sizeof(BiNode));// �����½��
		root->data = ch;
		root->lchild = CreatBiTree(root->lchild);//�ݹ齨��������
		root->rchild = CreatBiTree(root->rchild);//�ݹ齨��������
	}
	return root;
}
//ǰ�����
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
//�������
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
//�������
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