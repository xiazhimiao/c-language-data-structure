#pragma once
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ����ͼ��ṹ��
typedef struct Book {
    char title[100];
    char author[100];
    char publish_date[100];
    struct Book* next;
} Book;

//���ͼ��
void addBook(Book** library, char* title, char* author, char* publish_date);
// ����ͼ��
void traverse(Book* library);
//�����鼮
void insertBook(Book** library, char* title, char* author, char* publish_date, int position);
// �ͷ��ڴ�
void freeMemory(Book* library);
//��������
int find(Book* library, char* title);
//�����鼮
void deleteBook(Book** library, char* title);