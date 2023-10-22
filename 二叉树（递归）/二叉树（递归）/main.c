#define _CRT_SECURE_NO_WARNINGS
#include "function.h"

int main()
{
	char arr[10] = "ab#d##c##";
	//一个一个输入有问题
	//解答：因为输入区含有回车，回车被视为树中的一个结点data，因此树越来越大
	//在scanf之后getchar就能解决,同时只能一个一个输入
	BiNode* root = NULL;//定义二叉树的根指针变量
	root = CreatBiTree(root);//扩展二叉树前序建立二叉树
	printf("该二叉树的根结点是：%c\n", root->data);
	printf("\n该二叉树的前序遍历序列是：");
	PreOrder(root);
	printf("\n该二叉树的中序遍历序列是：");
	InOrder(root);
	printf("\n该二叉树的后序遍历序列是：");
	PostOrder(root);
	printf("\n----------------以下是非递归算法------------------");
	
	//BiNode* root1 = NULL;//定义二叉树的根指针变量
	//root1 = p0(root1);//扩展二叉树非递归中序建立二叉树
	p1(root);
	p2(root);

	DestroyBiTree(root);




	return 0;
}