#define _CRT_SECURE_NO_WARNINGS
#include "header.h"
int main() {
	AddressBook book;
	init(&book); // ��ʼ��ͨѶ¼
	char name[20];
	char haoma[12];
	scanf("%s %s", name, haoma);
	insert(&book, name, haoma);
	insert(&book, "Alice", "123456789");  // ������ϵ��
	insert(&book, "Bob", "987654321");
	insert(&book, "Charlie", "456789123");
	traverse(&book);
	int index = search(&book, "Bob");  // ������ϵ��
	if (index != -1)
	{
		printf("�ҵ���ϵ�ˣ�%s���绰��%s\n",book.contacts[index].name, book.contacts[index].phone);
	}
	else {
		printf("δ�ҵ���ϵ�ˡ�\n");
	}
	deleteContact(&book, "Charlie");  // ɾ����ϵ��
	traverse(&book);  // ����ͨѶ¼
	release(&book);
	return 0;
}