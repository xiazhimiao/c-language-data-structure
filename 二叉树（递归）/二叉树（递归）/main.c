#define _CRT_SECURE_NO_WARNINGS
#include "function.h"
int main()
{
	char arr[10] = "ab#d##c##";
	//一个一个输入有问题
	BiNode* root = NULL;//定义二叉树的根指针变量
	root = CreatBiTree(root);//扩展二叉树前序建立二叉树
	printf("该二叉树的根结点是：%c\n", root->data);
	printf("\n该二叉树的前序遍历序列是：");
	PreOrder(root);
	printf("\n该二叉树的中序遍历序列是：");
	InOrder(root);
	printf("\n该二叉树的后序遍历序列是：");
	PostOrder(root);
	DestroyBiTree(root);
	return 0;
}