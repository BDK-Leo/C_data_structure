#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

void SLTest01()
{
	//��ʼ��
	SL sl;
	SLInit(&sl);

	//����β��
	SLPushBack(&sl,1);
	SLPushBack(&sl,2);
	SLPushBack(&sl,3);
	SLPushBack(&sl,4);

	//����ͷ��
	SLPushFront(&sl,5);
	SLPushFront(&sl,6);
	SLPrint(sl);

	//����βɾ
	SLPopBack(&sl);
	
	//����ͷɾ
	SLPopFront(&sl);
	
	//����
	SLDestroy(&sl);
}

int main()
{
	SLTest01();
	return 0;
}