#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//定义双向链表节点的结构
typedef int LTDataType;
typedef struct ListNode
{
	LTDataType data;
	struct ListNode* next;
	struct ListNode* prev;
}LTNode;

//声明双向链表中提供的方法

//初始化1
//void LTInit(LTNode** pphead);

//初始化2
LTNode* LTInit();

//销毁
void LTDestroy(LTNode* phead);

//打印
void LTPrint(LTNode* phead);

//尾插
void LTPushBack(LTNode* phead, LTDataType x);//不改变哨兵位的地址，所以一级指针即可

//头插
void LTPushFront(LTNode* phead, LTDataType x);

//尾删
void LTPopBack(LTNode* phead);

//头删
void LTPopFront(LTNode* phead);

//查找指定位置的数据
LTNode* LTFind(LTNode* phead, LTDataType x);

//在pos位置之后插入数据
void LTInsert(LTNode* pos, LTDataType x);

//删除pos节点
void LTErase(LTNode* pos);
