#define _CRT_SECURE_NO_WARNINGS
#include "function.h"
int main()
{
	char arr[10] = "ab#d##c##";
	//һ��һ������������
	BiNode* root = NULL;//����������ĸ�ָ�����
	root = CreatBiTree(root);//��չ������ǰ����������
	printf("�ö������ĸ�����ǣ�%c\n", root->data);
	printf("\n�ö�������ǰ����������ǣ�");
	PreOrder(root);
	printf("\n�ö�������������������ǣ�");
	InOrder(root);
	printf("\n�ö������ĺ�����������ǣ�");
	PostOrder(root);
	DestroyBiTree(root);
	return 0;
}