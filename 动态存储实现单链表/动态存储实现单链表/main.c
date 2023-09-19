#define _CRT_SECURE_NO_WARNINGS
#include "head.h"
int main()
{
	int r[5] = { 1,2,3,4,5 }, i, x;
	Node* first = NULL;//头指针
	first = CreatList1(r, 5);//头插法
	PrintfList(first);
	Insert(first, 2, 8);
	PrintfList(first);
	


	return 0;
}