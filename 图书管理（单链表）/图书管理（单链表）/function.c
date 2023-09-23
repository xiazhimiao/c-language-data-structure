#define _CRT_SECURE_NO_WARNINGS
#include "header.h"
// ���ͼ��
void addBook(Book** library, char* title, char* author, char* publish_date) {
    Book* newBook = (Book*)malloc(sizeof(Book));
    strcpy(newBook->title, title);
    strcpy(newBook->author, author);
    strcpy(newBook->publish_date, publish_date);
    newBook->next = NULL;

    if (*library == NULL) {
        *library = newBook;
    }
    else {
        Book* current = *library;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newBook;
    }
}

// ����ͼ��
void traverse(Book* library) {
    Book* current = library;
    while (current != NULL) {
        printf("����: %s\n", current->title);
        printf("����: %s\n", current->author);
        printf("����ʱ��: %s\n", current->publish_date);
        printf("-----------------------\n");
        current = current->next;
    }
}
// �ͷ��ڴ�
void freeMemory(Book* library) {
    Book* current = library;
    while (current != NULL) {
        Book* temp = current;
        current = current->next;
        free(temp);
    }
}
//����
void insertBook(Book** library, char* title, char* author, char* publish_date, int position) {
    Book* newBook = (Book*)malloc(sizeof(Book));
    strcpy(newBook->title, title);
    strcpy(newBook->author, author);
    strcpy(newBook->publish_date, publish_date);
    newBook->next = NULL;

    if (position == 1) {
        newBook->next = *library;
        *library = newBook;
    }
    else {
        Book* current = *library;
        int count = 1;
        while (current != NULL && count < position - 1) {
            current = current->next;
            count++;
        }
        if (current == NULL) {
            printf("Invalid position. Book not inserted.\n");
            free(newBook);
            return;
        }
        newBook->next = current->next;
        current->next = newBook;
    }
}
int find(Book* library, char* title)
{
    Book* s = library;
    while (s!=NULL)
    {
        if (strcmp(s->title, title) == 0) {
            printf("�ҵ���\n");
            printf("Title: %s\n", s->title);
            printf("Author: %s\n", s->author);
            printf("Publish Date: %s\n", s->publish_date);
            printf("-----------------------\n");
            return 1;
        }
        s = s->next;
    }
    printf("zhaobud");
    return 0;
    
}
void deleteBook(Book** library, char* title) {
    if (*library == NULL) {
        printf("ͼ���Ϊ��\n");
        return;
    }

    Book* current = *library;
    Book* previous = NULL;

    // ����Ҫɾ����ͼ��
    while (current != NULL && strcmp(current->title, title) != 0) {
        previous = current;
        current = current->next;
    }

    // ����ҵ���Ҫɾ����ͼ��
    if (current != NULL) {
        // ���Ҫɾ����ͼ��������ĵ�һ���ڵ�
        if (previous == NULL) {
            *library = current->next;
        }
        else {
            previous->next = current->next;
        }
        free(current);
        printf("�ɹ�ɾ��%s\n", title);
    }
    else {
        printf("ɾ��ʧ��%s\n", title);
    }
}







