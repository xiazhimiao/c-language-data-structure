#define _CRT_SECURE_NO_WARNINGS
#include "header.h"
void init(AddressBook* book) {
	book->contacts = (Contact*)malloc(MAX_CONTACTS * sizeof(Contact));  // 分配内存空间
	book->size = 0;     // 初始化联系人数量为0
	book->capacity = MAX_CONTACTS;  // 设置通讯录容量
}
void insert(AddressBook* book, const char* name, const char* phone) {
	while (book->size >= book->capacity) {
		// 通讯录已满，扩增容量
		book->capacity += Expansion; // 增加容量
		book->contacts = (Contact*)realloc(book->contacts, book->capacity * sizeof(Contact));
	}
	

	Contact* newContact = &(book->contacts[book->size]);
	strncpy(newContact->name, name, MAX_NAME_LENGTH);
	strncpy(newContact->phone, phone, MAX_PHONE_LENGTH);
	book->size++;
}	
void traverse(AddressBook* book)//遍历
{
	printf("通讯录内容：\n");
	for (int i = 0; i < book->size; i++)
	{
		printf("姓名：%s，电话：%s\n", book->contacts[i].name, book->contacts[i].phone);
	}
}
int search(AddressBook* book, const char* name) {
	for (int i = 0; i < book->size; i++) {
		if (strcmp(book->contacts[i].name, name) == 0) {  // 比较姓名
			return i;  // 找到联系人，返回索引
		}
	}
	return -1;  // 未找到联系人，返回-1
}
void deleteContact(AddressBook* book, const char* name) {
	int index = search(book, name); // 查找要删除的联系人的索引 
	if (index == -1)
	{
		printf("未找到联系人：%s\n", name); return;
	}
	for (int i = index; i < book->size - 1; i++) {
		book->contacts[i] = book->contacts[i + 1];  // 将后面的联系人向前移动
	}
	book->size--;  // 减少联系人数量
}
void release(AddressBook* book)
{
	free(book->contacts); // 释放动态分配的内存
	book->size = 0; // 重置联系人数量为0
	book->capacity = 0; // 重置通讯录容量为0 
}



