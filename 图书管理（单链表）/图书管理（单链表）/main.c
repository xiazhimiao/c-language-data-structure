#define _CRT_SECURE_NO_WARNINGS
#include "header.h"
int main() {
    Book* library=NULL;
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