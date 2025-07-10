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

void SLTest02()
{
	SL sl;
	SLInit(&sl);

    //指定位置之前插入
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPrint(sl);
	SLInsert(&sl,sl.size,5);
	SLInsert(&sl, 0, 0);
	SLPrint(sl);

    //指定位置删除
	SLErase(&sl,0);
	SLErase(&sl, sl.size-1);
	SLPrint(sl);

    //查找
	int Find = SLFind(&sl,sl.size);
	if (Find < 0)
	{
		printf("没有找到！\n");
	}
	else
	{
		printf("位置为:%d", Find);
	}

	SLDestroy(&sl);
}

int main()
{
	//SLTest01();
	SLTest02();
	return 0;
}