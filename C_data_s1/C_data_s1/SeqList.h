#pragma once
//����˳���Ľṹ�Լ�����˳���ķ���
//��̬˳���
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

//˳����ʼ��
void SLInit(SL* ps);

//˳��������
void SLDestroy(SL* ps);

//˳���Ĳ���
void SLPushBack(SL* ps,SLDataType x);//β��
void SLPushFront(SL* ps,SLDataType x);//ͷ��

//˳����ɾ��
void SLPopBack(SL* ps);//βɾ
void SLPopFront(SL* ps);//ͷɾ

//˳���Ĵ�ӡ
void SLPrint(SL s);