#define _CRT_SECURE_NO_WARNINGS
#include "header.h"
int main() {
	AddressBook book;
	init(&book); // 初始化通讯录
	char name[20];
	char haoma[12];
	scanf("%s %s", name, haoma);
	insert(&book, name, haoma);
	insert(&book, "Alice", "123456789");  // 插入联系人
	insert(&book, "Bob", "987654321");
	insert(&book, "Charlie", "456789123");
	traverse(&book);
	int index = search(&book, "Bob");  // 查找联系人
	if (index != -1)
	{
		printf("找到联系人：%s，电话：%s\n",book.contacts[index].name, book.contacts[index].phone);
	}
	else {
		printf("未找到联系人。\n");
	}
	deleteContact(&book, "Charlie");  // 删除联系人
	traverse(&book);  // 遍历通讯录
	release(&book);
	return 0;
}