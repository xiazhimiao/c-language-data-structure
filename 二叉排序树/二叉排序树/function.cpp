#define _CRT_SECURE_NO_WARNINGS
#include "function.h"

//创建二叉排序树
void CreateBST(BST_P* T, int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        Insert_BST(T, a[i]);
    }
}
//插入代码
void Insert_BST(BST_P* root, DataType data)
{
    //初始化插入节点
    BST_P p = (BST_P)malloc(sizeof(struct BST_Node));
    if (!p) return;
    p->data = data;
    p->lchild = p->rchild = NULL;

    //空树时，直接作为根节点
    if (*root == NULL)
    {
        *root = p;
        return;
    }

    //是否存在，已存在则返回，不插入
    if (Search_BST(*root, data) != NULL) {
        cout << "节点" << data << "已存在" << endl;
        return;
    }

    //进行插入，首先找到要插入的位置的父节点
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
//递归版查找（找到返回关键字的结点指针，没找到返回NULL）
BST_P Search_BST(BST_P root, DataType key)
{
    if (root == NULL)
        return NULL;
    if (key > root->data) //查找右子树  
        return Search_BST(root->rchild, key);
    else if (key < root->data) //查找左子树  
        return Search_BST(root->lchild, key);
    else
        return root;
}
//先序遍历
void PreOrderTraverse(BST_P T)
{
    if (T)
    {
        cout << T->data << " ";
        PreOrderTraverse(T->lchild);
        PreOrderTraverse(T->rchild);
    }
}
//后序遍历
void PostOrderTraverse(BST_P T)
{
    if (T)
    {
        PostOrderTraverse(T->lchild);
        PostOrderTraverse(T->rchild);
        cout << T->data << " ";
    }
}
//删除节点
void DeleteBSTNode(BST_P* root, DataType data)
{
    BST_P p = *root, parent = NULL, s = NULL;

    if (!p) return;

    if (p->data == data) //找到要删除的节点了
    {
        /* 它是一个叶节点 */
        if (!p->rchild && !p->lchild)
            *root = NULL;

        // 只有一个左节点
        else if (!p->rchild && p->lchild)
            *root = p->lchild;

        // 只有一个右节点
        else if (!p->lchild && p->rchild)
            *root = p->rchild;

        //左右节点都不空
        else
        {
            s = p->rchild;//右孩子
            /* the s without left child */
            if (!s->lchild)
                s->lchild = p->lchild;
            /* the s have left child */
            else
            {
                /* 找出s的左子树中的最小节点 */
                while (s->lchild)
                {
                    /* 记录s的父节点 */
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
    else if (data > p->data) //向右找
        DeleteBSTNode(&(p->rchild), data);
    else if (data < p->data) //向左找
        DeleteBSTNode(&(p->lchild), data);
}