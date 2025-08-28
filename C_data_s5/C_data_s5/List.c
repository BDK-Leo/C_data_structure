#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"

//����ڵ�
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

////��ʼ��1
//void LTInit(LTNode** pphead)
//{
//	//��˫��������һ���ڱ�λ
//	*pphead = LTBuyNode(-1);
//}

//��ʼ��2
LTNode* LTInit()
{
	LTNode* phead = LTBuyNode(-1);
	return phead;
}

//��ӡ
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

//β��
void LTPushBack(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* newnode = LTBuyNode(x);

	newnode->prev = phead->prev;
	newnode->next = phead;

	phead->prev->next = newnode;
	phead->prev = newnode;
}

//ͷ��
void LTPushFront(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* newnode = LTBuyNode(x);
	newnode->next = phead->next;
	newnode->prev = phead;

	phead->next->prev = newnode;
	phead->next = newnode;
}

//βɾ
void LTPopBack(LTNode* phead)
{
	//���������Ч��������Ϊ�գ�ֻ��һ���ڱ�λ��
	assert(phead && phead->next != phead);

	LTNode* del = phead->prev;

	del->prev->next = phead;
	phead->prev = del->prev;

	free(del);
	del = NULL;
}

//ͷɾ
void LTPopFront(LTNode* phead)
{
	assert(phead && phead->next != phead);

	LTNode* del = phead->next;

	phead->next = del->next;
	del->next->prev = phead;

	free(del);
	del = NULL;
}

//����ָ��λ�õ�����
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

//��posλ��֮���������
void LTInsert(LTNode* pos, LTDataType x)
{
	assert(pos);
	LTNode* newnode = LTBuyNode(x);

	newnode->next = pos->next;
	newnode->prev = pos;

	pos->next->prev = newnode;
	pos->next = newnode;
}

//ɾ��pos�ڵ�
void LTErase(LTNode* pos)//���ֽӿ�һ����,��һ��ָ��
{
	assert(pos);

	pos->next->prev = pos->prev;
	pos->prev->next = pos->next;

	free(pos);
	pos = NULL;
}

//����
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