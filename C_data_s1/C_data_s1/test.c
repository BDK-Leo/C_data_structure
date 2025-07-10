#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

void SLTest01()
{
	//初始化
	SL sl;
	SLInit(&sl);

	//测试尾插
	SLPushBack(&sl,1);
	SLPushBack(&sl,2);
	SLPushBack(&sl,3);
	SLPushBack(&sl,4);

	//测试头插
	SLPushFront(&sl,5);
	SLPushFront(&sl,6);
	

	//测试尾删
	SLPopBack(&sl);
	
	//测试头删
	SLPopFront(&sl);
	SLPrint(sl);

	//销毁
	SLDestroy(&sl);
}

int main()
{
	SLTest01();
	return 0;
}