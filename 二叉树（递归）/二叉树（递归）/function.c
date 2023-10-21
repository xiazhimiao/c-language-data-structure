#define _CRT_SECURE_NO_WARNINGS
#include "function.h"
//��չ������ǰ����������
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
		InOrder(root->lchild);
		printf("%c", root->data);
		InOrder(root->rchild);
	}
}
//�������
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