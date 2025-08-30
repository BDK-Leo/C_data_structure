#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"

//双向链表专题

//链表分类:8种(2*2*2)
//带头 不带头
//单向 双向
//循环 不循环

//最常用的两种:
//单链表(不带头单向不循环链表)
//双向链表(带头双向循环链表)

void ListTest01()
{
	////初始化1
	//LTNode* plist = NULL;
	//LTInit(&plist);

	//初始化2
	LTNode* plist = LTInit();

	LTPushBack(plist, 1);
	LTPushBack(plist, 2);
	LTPushBack(plist, 3);
	LTPrint(plist);

	LTPushFront(plist, 0);
	LTPrint(plist);

	//LTPopBack(plist);
	//LTPrint(plist);
	//LTPopBack(plist);
	//LTPrint(plist);

	//LTPopFront(plist);
	//LTPrint(plist);
	//LTPopFront(plist);
	//LTPrint(plist);

	LTNode* Find = LTFind(plist, 0);
	if (Find == NULL)
	{
		printf("NULL!\n");
	}
	else
	{
		printf("Find!\n");
	}

	LTInsert(Find, 99);
	LTPrint(plist);

	LTErase(Find);
	Find = NULL;
	LTPrint(plist);

	LTDestroy(plist);
	plist = NULL;//plist手动置空,这是为了保持指针接口一致性的弊端，都是一级指针;若二级指针则不会，形参会影响到实参,但会增加记忆成本
}

int main()
{
	ListTest01();
	return 0;
}