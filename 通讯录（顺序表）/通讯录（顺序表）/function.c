#define _CRT_SECURE_NO_WARNINGS
#include "header.h"
void init(AddressBook* book) {
	book->contacts = (Contact*)malloc(MAX_CONTACTS * sizeof(Contact));  // �����ڴ�ռ�
	book->size = 0;     // ��ʼ����ϵ������Ϊ0
	book->capacity = MAX_CONTACTS;  // ����ͨѶ¼����
}
void insert(AddressBook* book, const char* name, const char* phone) {
	while (book->size >= book->capacity) {
		// ͨѶ¼��������������
		book->capacity += Expansion; // ��������
		book->contacts = (Contact*)realloc(book->contacts, book->capacity * sizeof(Contact));
	}
	

	Contact* newContact = &(book->contacts[book->size]);
	strncpy(newContact->name, name, MAX_NAME_LENGTH);
	strncpy(newContact->phone, phone, MAX_PHONE_LENGTH);
	book->size++;
}	
void traverse(AddressBook* book)//����
{
	printf("ͨѶ¼���ݣ�\n");
	for (int i = 0; i < book->size; i++)
	{
		printf("������%s���绰��%s\n", book->contacts[i].name, book->contacts[i].phone);
	}
}
int search(AddressBook* book, const char* name) {
	for (int i = 0; i < book->size; i++) {
		if (strcmp(book->contacts[i].name, name) == 0) {  // �Ƚ�����
			return i;  // �ҵ���ϵ�ˣ���������
		}
	}
	return -1;  // δ�ҵ���ϵ�ˣ�����-1
}
void deleteContact(AddressBook* book, const char* name) {
	int index = search(book, name); // ����Ҫɾ������ϵ�˵����� 
	if (index == -1)
	{
		printf("δ�ҵ���ϵ�ˣ�%s\n", name); return;
	}
	for (int i = index; i < book->size - 1; i++) {
		book->contacts[i] = book->contacts[i + 1];  // ���������ϵ����ǰ�ƶ�
	}
	book->size--;  // ������ϵ������
}
void release(AddressBook* book)
{
	free(book->contacts); // �ͷŶ�̬������ڴ�
	book->size = 0; // ������ϵ������Ϊ0
	book->capacity = 0; // ����ͨѶ¼����Ϊ0 
}



