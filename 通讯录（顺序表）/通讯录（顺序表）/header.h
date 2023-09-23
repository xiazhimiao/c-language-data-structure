#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NAME_LENGTH 50
#define MAX_PHONE_LENGTH 20
#define MAX_CONTACTS 100//��ʼ�������
#define Expansion 10//ÿ����������
typedef struct {
	char name[MAX_NAME_LENGTH];
	char phone[MAX_PHONE_LENGTH];
} Contact;
typedef struct {
	Contact* contacts;  // ��̬�������ϵ������
	int size;           // ��ǰͨѶ¼�е���ϵ������
	int capacity;       // ͨѶ¼������
} AddressBook;
//��ʼ��˳���
void init(AddressBook* book);
//��������
void insert(AddressBook* book, const char* name, const char* phone);
//����˳���
void traverse(AddressBook* book);
//��������
int search(AddressBook* book, const char* name);
//ɾ��Ԫ��
void deleteContact(AddressBook* book, const char* name);
//�ͷ��ڴ�
void release(AddressBook* book);


