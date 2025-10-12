#define _CRT_SECURE_NO_WARNINGS 1
#include"Queue.h"

//��ʼ��
void QueueInit(Queue* pq)
{
	assert(pq);
	pq->phead = NULL;
	pq->ptail = NULL;
	pq->size = 0;
}

//����
void QueueDestry(Queue* pq)
{
	assert(pq);

	QNode* cur = pq->phead;
	while (cur)
	{
		QNode* next = cur->next;
		free(cur);

		cur = next;
	}

	pq->phead = pq->ptail = NULL;
	pq->size = 0;
}

//��β����
void QueuePush(Queue* pq, QDataType x)
{
	assert(pq);

	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode == NULL)
	{
		perror("malloc fail!");
		return;
	}

	newnode->next = NULL;
	newnode->val = x;

	if (pq->ptail == NULL)
	{
		pq->phead = pq->ptail = newnode;
	}
	else
	{
		pq->ptail->next = newnode;
		pq->ptail = newnode;
	}

	pq->size++;
}

//��ͷɾ��
void QueuePop(Queue* pq)
{
	assert(pq);
	assert(pq->phead);
	//assert(pq->size != 0);

	/*QNode* next = pq->phead->next;
	free(pq->phead);
	pq->phead = next;

	if (pq->phead == NULL)
	{
		pq->ptail = NULL;
	}*/

	if (pq->phead->next == NULL)
	{
		free(pq->phead);
		pq->phead = pq->ptail = NULL;
	}
	else
	{
		QNode* next = pq->phead->next;
		free(pq->phead);
		pq->phead = next;
	}

	pq->size--;
}

//ȡ��ͷ������
QDataType QueueFront(Queue* pq)
{
	assert(pq);
	assert(pq->phead);

	return pq->phead->val;
}

//ȡ��β������
QDataType QueueBack(Queue* pq)
{
	assert(pq);
	assert(pq->ptail);

	return pq->ptail->val;
}

int QueueSize(Queue* pq)
{
	assert(pq);

	return pq->size;
}

//�п�
bool QueueEmpty(Queue* pq)
{
	assert(pq);

	return pq->size == 0;
}