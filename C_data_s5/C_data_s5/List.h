#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//����˫������ڵ�Ľṹ
typedef int LTDataType;
typedef struct ListNode
{
	LTDataType data;
	struct ListNode* next;
	struct ListNode* prev;
}LTNode;

//����˫���������ṩ�ķ���

//��ʼ��1
//void LTInit(LTNode** pphead);

//��ʼ��2
LTNode* LTInit();

//����
void LTDestroy(LTNode* phead);

//��ӡ
void LTPrint(LTNode* phead);

//β��
void LTPushBack(LTNode* phead, LTDataType x);//���ı��ڱ�λ�ĵ�ַ������һ��ָ�뼴��

//ͷ��
void LTPushFront(LTNode* phead, LTDataType x);

//βɾ
void LTPopBack(LTNode* phead);

//ͷɾ
void LTPopFront(LTNode* phead);

//����ָ��λ�õ�����
LTNode* LTFind(LTNode* phead, LTDataType x);

//��posλ��֮���������
void LTInsert(LTNode* pos, LTDataType x);

//ɾ��pos�ڵ�
void LTErase(LTNode* pos);
