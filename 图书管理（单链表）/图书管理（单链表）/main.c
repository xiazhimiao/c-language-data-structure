#define _CRT_SECURE_NO_WARNINGS
#include "header.h"
int main() {
    Book* library=NULL;


    char title[20], name[20], riqi[20];
    scanf("%s %s %s", title, name, riqi);
    addBook(&library, title, name, riqi);

    addBook(&library, "老人与海", "海明威", "1952");
    addBook(&library, "西游记", "吴承恩", "明代");
    addBook(&library, "我在精神病院学斩神", "三九音域", "2021");
    traverse(library);
    insertBook(&library, "流浪地球", "吴京", "2019", 2);
    traverse(library);
    find(library, "流浪地球");
    deleteBook(&library, "流浪地球");
    traverse(library);
    freeMemory(library);
    return 0;
}