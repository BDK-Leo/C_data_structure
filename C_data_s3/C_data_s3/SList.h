﻿#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLTDataType;

typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;

//打印
void SLTPrint(SLTNode* phead);

//尾插
void SLTPushBack(SLTNode** pphead,SLTDataType x);

//头插
void SLTPushFront(SLTNode** pphead,SLTDataType x);

//查找
SLTNode* SLTFind(SLTNode* phead,SLTDataType x);

//在指定位置之前插入数据
void SLTInsertBefore(SLTNode** pphead, SLTNode* pos, SLTDataType x);

//在指定位置之后插入数据
void SLTInsertAfter(SLTNode* pos,SLTDataType x);

//尾删
void SLTPopBack(SLTNode** pphead);

//头删
void SLTPopFront(SLTNode** pphead);

//删除pos节点
void SLTErase(SLTNode** pphead,SLTNode* pos);

//删除pos之后的节点
void SLTEraseAfter(SLTNode* pos);

//链表的销毁
void SLTDestroy(SLTNode** pphead);