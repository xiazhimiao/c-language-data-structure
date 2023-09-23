#pragma once
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 定义图书结构体
typedef struct Book {
    char title[100];
    char author[100];
    char publish_date[100];
    struct Book* next;
} Book;

//添加图书
void addBook(Book** library, char* title, char* author, char* publish_date);
// 遍历图书
void traverse(Book* library);
//新增书籍
void insertBook(Book** library, char* title, char* author, char* publish_date, int position);
// 释放内存
void freeMemory(Book* library);
//查找书名
int find(Book* library, char* title);
//借走书籍
void deleteBook(Book** library, char* title);