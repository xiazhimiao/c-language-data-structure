#define _CRT_SECURE_NO_WARNINGS
#include "header.h"
int main() {
    Book* library=NULL;


    char title[20], name[20], riqi[20];
    scanf("%s %s %s", title, name, riqi);
    addBook(&library, title, name, riqi);

    addBook(&library, "�����뺣", "������", "1952");
    addBook(&library, "���μ�", "��ж�", "����");
    addBook(&library, "���ھ���Ժѧն��", "��������", "2021");
    traverse(library);
    insertBook(&library, "���˵���", "�⾩", "2019", 2);
    traverse(library);
    find(library, "���˵���");
    deleteBook(&library, "���˵���");
    traverse(library);
    freeMemory(library);
    return 0;
}