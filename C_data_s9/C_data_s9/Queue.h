#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>

typedef int QDataType;

typedef struct QueueNode
{
	struct QueueNode* next;
	QDataType val;
}QNode;

/*
* ��ΪҪ�ı�ṹ���ָ���ָ�룬����Ҫ�ö���ָ��
//��β����
void QueuePush(QNode** pphead, QNode** pptail, QDataType x);
//��ͷɾ��
void QueuePop(QNode** pphead, QNode** pptail);
*/

//��Բ���ɾ���Ż�,����Ҫ����ָ����
typedef struct Queue
{
	QNode* phead;
	QNode* ptail;
	int size;
}Queue;

//��ʼ��
void QueueInit(Queue* pq);

//����
void QueueDestry(Queue* pq);

//����ֱ�Ӹı�ṹ���ָ�룬��һ��ָ�뼴��
//��β����
void QueuePush(Queue* pq, QDataType x);
//��ͷɾ��
void QueuePop(Queue* pq);

//ȡ��ͷ��β������
QDataType QueueFront(Queue* pq);
QDataType QueueBack(Queue* pq);

int QueueSize(Queue* pq);

//�п�
bool QueueEmpty(Queue* pq);