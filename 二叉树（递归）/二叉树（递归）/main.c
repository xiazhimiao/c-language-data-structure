#define _CRT_SECURE_NO_WARNINGS
#include "function.h"
void p2(BiNode* root)
{
	BiNode* s[10], * bt = root;
	int top = -1;
	while (bt->data!='#' ||top!=-1)
	{
		while (bt->data != '#')
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
int main()
{
	char arr[10] = "ab#d##c##";
	//һ��һ������������
	//�����Ϊ���������лس����س�����Ϊ���е�һ�����data�������Խ��Խ��
	//��scanf֮��getchar���ܽ��,ͬʱֻ��һ��һ������
	BiNode* root = NULL;//����������ĸ�ָ�����
	root = CreatBiTree(root);//��չ������ǰ����������
	printf("�ö������ĸ�����ǣ�%c\n", root->data);
	printf("\n�ö�������ǰ����������ǣ�");
	PreOrder(root);
	printf("\n�ö�������������������ǣ�");
	InOrder(root);
	printf("\n�ö������ĺ�����������ǣ�");
	PostOrder(root);
	printf("\n");
	p2(root);

	DestroyBiTree(root);
	return 0;
}