#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

void SLTest01()
{
	//≥ı ºªØ
	SL sl;
	SLInit(&sl);

	//≤‚ ‘Œ≤≤Â
	SLPushBack(&sl,1);
	SLPushBack(&sl,2);
	SLPushBack(&sl,3);
	SLPushBack(&sl,4);

	//≤‚ ‘Õ∑≤Â
	SLPushFront(&sl,5);
	SLPushFront(&sl,6);
	SLPrint(sl);

	//≤‚ ‘Œ≤…æ
	SLPopBack(&sl);
	
	//≤‚ ‘Õ∑…æ
	SLPopFront(&sl);
	
	//œ˙ªŸ
	SLDestroy(&sl);
}

int main()
{
	SLTest01();
	return 0;
}