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
* 因为要改变结构体的指针的指针，所以要用二级指针
//队尾插入
void QueuePush(QNode** pphead, QNode** pptail, QDataType x);
//队头删除
void QueuePop(QNode** pphead, QNode** pptail);
*/

//针对插入删除优化,不需要二级指针了
typedef struct Queue
{
	QNode* phead;
	QNode* ptail;
	int size;
}Queue;

//初始化
void QueueInit(Queue* pq);

//销毁
void QueueDestry(Queue* pq);

//这里直接改变结构体的指针，即一级指针即可
//队尾插入
void QueuePush(Queue* pq, QDataType x);
//队头删除
void QueuePop(Queue* pq);

//取队头队尾的数据
QDataType QueueFront(Queue* pq);
QDataType QueueBack(Queue* pq);

int QueueSize(Queue* pq);

//判空
bool QueueEmpty(Queue* pq);