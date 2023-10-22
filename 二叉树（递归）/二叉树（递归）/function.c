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
//��չ�������ǵݹ�������������
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
//				root = (BiNode*)malloc(sizeof(BiNode));// �����½��
//				root->data = ch;
//				s[++top] = bt;
//				bt = bt->lchild;
//			}
//	}
//}
//�ǵݹ�ǰ�����
void p1(BiNode* root)
{
	BiNode* s[10], * bt = root;
	int top = -1;
	printf("\n�ö������ķǵݹ�ǰ����������ǣ�");
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
//�ǵݹ��������
void p2(BiNode* root)
{
	BiNode* s[10], * bt = root;
	int top = -1;
	printf("\n�ö������ķǵݹ�������������ǣ�");
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