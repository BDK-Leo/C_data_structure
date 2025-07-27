#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"

SLTNode* SLTBuyNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		perror("malloc faul!\n");
		exit(1);
	}
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}

void SLTPushBack(SLTNode** pphead, SLTDataType x)
{
	assert(pphead);
	SLTNode* newnode = SLTBuyNode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SLTNode* ptail = *pphead;
		while (ptail->next)
		{
			ptail = ptail->next;
		}
		ptail->next = newnode;
	}
}

void SLTPushFront(SLTNode** pphead, SLTDataType x)
{
	assert(pphead);
	SLTNode* newnode = SLTBuyNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}

SLTNode* SLTFind(SLTNode* phead, SLTDataType x)
{
	SLTNode* pcur = phead;
	while (pcur)
	{
		if (pcur->data == x)
		{
			return pcur;
		}
		pcur = pcur->next;
	}
	return NULL;
}

void SLTInsertBefore(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
	assert(pphead && *pphead);
	assert(pos);
	SLTNode* newcode = SLTBuyNode(x);
	if (pos == *pphead)
	{
		SLTPushFront(pphead,x);
	}
	else
	{
		SLTNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		newcode->next = pos;
		prev->next = newcode;
	}
}

void SLTInsertAfter(SLTNode* pos, SLTDataType x)
{
	assert(pos);
	SLTNode* newnode = SLTBuyNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}

void SLTPopBack(SLTNode** pphead)
{
	assert(pphead && *pphead);
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SLTNode* prev = *pphead;
		SLTNode* ptail = *pphead;
		while (ptail->next)
		{
			prev = ptail;
			ptail = ptail->next;
		}
		free(ptail);
		ptail = NULL;
		prev->next = NULL;
	}
}

void SLTPopFront(SLTNode** pphead)
{
	assert(pphead && *pphead);
	SLTNode* next = (*pphead)->next;
	free(*pphead);
	*pphead = next;
}

void SLTErase(SLTNode** pphead, SLTNode* pos)
{
	assert(pphead && *pphead);
	assert(pos);
	if (pos == *pphead)
	{
		SLTPopFront(pphead);
	}
	else
	{
		SLTNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = pos->next;
		free(pos);
		pos = NULL;
	}
}

void SLTEraseAfter(SLTNode* pos)
{
	assert(pos && pos->next);
	SLTNode* del = pos->next;
	pos->next = del->next;
	free(del);
	del = NULL;
}

void SLTPrint(SLTNode* phead)
{
	SLTNode* pcur = phead;
	while (pcur)
	{
		printf("%d->",pcur->data);
		pcur = pcur->next;
	}
	printf("NULL\n");
}

void SLTDestroy(SLTNode** pphead)
{
	assert(pphead && *pphead);
	SLTNode* pcur = *pphead;
	while (pcur)
	{
		SLTNode* next = pcur->next;
		free(pcur);
		pcur = next;
	}
	*pphead = NULL;
}