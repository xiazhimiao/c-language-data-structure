#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
typedef char DataType;
typedef struct BiNode {
	DataType data;
	struct BiNode* lchild, * rchild;//lΪ���ӣ�rΪ�Һ���
}BiNode;
//��չ������ǰ����������
BiNode *CreatBiTree(BiNode *root);
//ǰ�����
void PreOrder(BiNode* root);
//�������
void InOrder(BiNode* root);
//�������
void PostOrder(BiNode* root);
//���ٶ�����
void DestroyBiTree(BiNode *root);
//��չ�������ǵݹ�������������
//BiNode* p0(BiNode* root);
//�ǵݹ�ǰ�����
void p1(BiNode* root);
//�ǵݹ��������
void p2(BiNode* root);
