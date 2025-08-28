#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"

//申请节点
LTNode* LTBuyNode(LTDataType x)
{
	LTNode* node = (LTNode*)malloc(sizeof(LTNode));
	if (node == NULL)
	{
		perror("malloc fail!");
		exit(1);
	}
	node->data = x;
	node->next = node->prev = node;

	return node;
}

////初始化1
//void LTInit(LTNode** pphead)
//{
//	//给双向链表创建一个哨兵位
//	*pphead = LTBuyNode(-1);
//}

//初始化2
LTNode* LTInit()
{
	LTNode* phead = LTBuyNode(-1);
	return phead;
}

//打印
void LTPrint(LTNode* phead)
{
	LTNode* pcur = phead->next;
	while (pcur != phead)
	{
		printf("%d->", pcur->data);
		pcur = pcur->next;
	}
	printf("\n");
}

//尾插
void LTPushBack(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* newnode = LTBuyNode(x);

	newnode->prev = phead->prev;
	newnode->next = phead;

	phead->prev->next = newnode;
	phead->prev = newnode;
}

//头插
void LTPushFront(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* newnode = LTBuyNode(x);
	newnode->next = phead->next;
	newnode->prev = phead;

	phead->next->prev = newnode;
	phead->next = newnode;
}

//尾删
void LTPopBack(LTNode* phead)
{
	//链表必须有效且链表不能为空（只有一个哨兵位）
	assert(phead && phead->next != phead);

	LTNode* del = phead->prev;

	del->prev->next = phead;
	phead->prev = del->prev;

	free(del);
	del = NULL;
}

//头删
void LTPopFront(LTNode* phead)
{
	assert(phead && phead->next != phead);

	LTNode* del = phead->next;

	phead->next = del->next;
	del->next->prev = phead;

	free(del);
	del = NULL;
}

//查找指定位置的数据
LTNode* LTFind(LTNode* phead, LTDataType x)
{
	LTNode* pcur = phead->next;
	while (pcur != phead)
	{
		if (pcur->data == x)
		{
			return pcur;
		}
		pcur = pcur->next;
	}
	return NULL;
}

//在pos位置之后插入数据
void LTInsert(LTNode* pos, LTDataType x)
{
	assert(pos);
	LTNode* newnode = LTBuyNode(x);

	newnode->next = pos->next;
	newnode->prev = pos;

	pos->next->prev = newnode;
	pos->next = newnode;
}

//删除pos节点
void LTErase(LTNode* pos)//保持接口一致性,用一级指针
{
	assert(pos);

	pos->next->prev = pos->prev;
	pos->prev->next = pos->next;

	free(pos);
	pos = NULL;
}

//销毁
void LTDestroy(LTNode* phead)
{
	assert(phead);
	LTNode* pcur = phead->next;
	while (pcur != phead)
	{
		LTNode* next = pcur->next;
		free(pcur);
		pcur = next;
	}
	free(phead);
	phead = NULL;
}