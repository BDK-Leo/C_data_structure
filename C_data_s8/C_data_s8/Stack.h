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

//��ʼ��
void STInit(ST* pst);

//����
void STDestroy(ST* pst);

//��ջ
void STPush(ST* pst, STDataType x);

//ɾ��
void STPop(ST* pst);

//��ȡջ������
STDataType STTop(ST* pst);

//�ж�ջ�Ƿ�Ϊ��
bool STEmpty(ST* pst);

//ջ������ݸ���
int STSize(ST* pst);