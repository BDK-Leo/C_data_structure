#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>

typedef int STDataType;

typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;
}ST;

//初始化
void STInit(ST* pst);

//销毁
void STDestroy(ST* pst);

//入栈
void STPush(ST* pst, STDataType x);

//删除
void STPop(ST* pst);

//获取栈顶数据
STDataType STTop(ST* pst);

//判断栈是否为空
bool STEmpty(ST* pst);

//栈里的数据个数
int STSize(ST* pst);