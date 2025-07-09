#pragma once
//定义顺序表的结构以及声明顺序表的方法
//动态顺序表
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* arr;
	int size;
	int capacity;
}SL;

//顺序表初始化
void SLInit(SL* ps);

//顺序表的销毁
void SLDestroy(SL* ps);

//顺序表的插入
void SLPushBack(SL* ps,SLDataType x);//尾插
void SLPushFront(SL* ps,SLDataType x);//头插

//顺序表的删除
void SLPopBack(SL* ps);//尾删
void SLPopFront(SL* ps);//头删

//顺序表的打印
void SLPrint(SL s);