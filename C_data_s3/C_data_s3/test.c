#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"

//单链表专题

void Test()
{
	SLTNode* plist = NULL;

	SLTPushBack(&plist,1);
	SLTPushBack(&plist,2);
	SLTPushBack(&plist,3);
	SLTPushBack(&plist,4);
	SLTPrint(plist);

	SLTPushFront(&plist,0);
	SLTPushFront(&plist,-1);
	SLTPrint(plist);

	SLTPopBack(&plist);
	SLTPrint(plist);
}

int main()
{
	Test();
	return 0;
}