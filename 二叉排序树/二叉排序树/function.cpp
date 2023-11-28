#define _CRT_SECURE_NO_WARNINGS
#include "function.h"

//��������������
void CreateBST(BST_P* T, int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        Insert_BST(T, a[i]);
    }
}
//�������
void Insert_BST(BST_P* root, DataType data)
{
    //��ʼ������ڵ�
    BST_P p = (BST_P)malloc(sizeof(struct BST_Node));
    if (!p) return;
    p->data = data;
    p->lchild = p->rchild = NULL;

    //����ʱ��ֱ����Ϊ���ڵ�
    if (*root == NULL)
    {
        *root = p;
        return;
    }

    //�Ƿ���ڣ��Ѵ����򷵻أ�������
    if (Search_BST(*root, data) != NULL) {
        cout << "�ڵ�" << data << "�Ѵ���" << endl;
        return;
    }

    //���в��룬�����ҵ�Ҫ�����λ�õĸ��ڵ�
    BST_P tnode = NULL, troot = *root;
    while (troot)
    {
        tnode = troot;
        troot = (data < troot->data) ? troot->lchild : troot->rchild;
    }
    if (data < tnode->data)
        tnode->lchild = p;
    else
        tnode->rchild = p;
}
//�ݹ����ң��ҵ����عؼ��ֵĽ��ָ�룬û�ҵ�����NULL��
BST_P Search_BST(BST_P root, DataType key)
{
    if (root == NULL)
        return NULL;
    if (key > root->data) //����������  
        return Search_BST(root->rchild, key);
    else if (key < root->data) //����������  
        return Search_BST(root->lchild, key);
    else
        return root;
}
//�������
void PreOrderTraverse(BST_P T)
{
    if (T)
    {
        cout << T->data << " ";
        PreOrderTraverse(T->lchild);
        PreOrderTraverse(T->rchild);
    }
}
//�������
void PostOrderTraverse(BST_P T)
{
    if (T)
    {
        PostOrderTraverse(T->lchild);
        PostOrderTraverse(T->rchild);
        cout << T->data << " ";
    }
}
//ɾ���ڵ�
void DeleteBSTNode(BST_P* root, DataType data)
{
    BST_P p = *root, parent = NULL, s = NULL;

    if (!p) return;

    if (p->data == data) //�ҵ�Ҫɾ���Ľڵ���
    {
        /* ����һ��Ҷ�ڵ� */
        if (!p->rchild && !p->lchild)
            *root = NULL;

        // ֻ��һ����ڵ�
        else if (!p->rchild && p->lchild)
            *root = p->lchild;

        // ֻ��һ���ҽڵ�
        else if (!p->lchild && p->rchild)
            *root = p->rchild;

        //���ҽڵ㶼����
        else
        {
            s = p->rchild;//�Һ���
            /* the s without left child */
            if (!s->lchild)
                s->lchild = p->lchild;
            /* the s have left child */
            else
            {
                /* �ҳ�s���������е���С�ڵ� */
                while (s->lchild)
                {
                    /* ��¼s�ĸ��ڵ� */
                    parent = s;
                    s = s->lchild;
                }
                parent->lchild = s->rchild;
                s->lchild = p->lchild;
                s->rchild = p->rchild;
            }
            *root = s;
        }
        free(p);
    }
    else if (data > p->data) //������
        DeleteBSTNode(&(p->rchild), data);
    else if (data < p->data) //������
        DeleteBSTNode(&(p->lchild), data);
}