#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NAME_LENGTH 50
#define MAX_PHONE_LENGTH 20
#define MAX_CONTACTS 100//初始最大数量
#define Expansion 10//每次增加数量
typedef struct {
	char name[MAX_NAME_LENGTH];
	char phone[MAX_PHONE_LENGTH];
} Contact;
typedef struct {
	Contact* contacts;  // 动态分配的联系人数组
	int size;           // 当前通讯录中的联系人数量
	int capacity;       // 通讯录的容量
} AddressBook;
//初始化顺序表
void init(AddressBook* book);
//插入数据
void insert(AddressBook* book, const char* name, const char* phone);
//遍历顺序表
void traverse(AddressBook* book);
//查找名字
int search(AddressBook* book, const char* name);
//删除元素
void deleteContact(AddressBook* book, const char* name);
//释放内存
void release(AddressBook* book);


