#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"
//栈和队列

//栈
/*
栈的概念结构：
	栈：一种特殊的线性表，其只允许在固定的一端进行插入和删除元素操作。
	进行数据插入和删除操作的一端称为栈顶，另一端称为栈底。
	压栈：栈的插入操作叫做栈/压栈/入栈，入数据在栈顶。
	出栈：栈的删除操作叫做出栈。出数据也在栈顶。
	栈中的数据元素遵守后进先出的原则。
*/

//int main()
//{
//	ST s;
//	STInit(&s);
//	STPush(&s,1);
//	STPush(&s,2);
//	STPush(&s,3);
//	STPush(&s,4);
//	STPush(&s,4);
//	printf("%d\n",STTop(&s));
//	printf("%d\n",STSize(&s));
//
//	STDestroy(&s);
//	return 0;
//}

//访问栈内所有元素
int main()
{
	ST s;
	STInit(&s);
	//也可以边进边出
	STPush(&s, 1);
	//printf("%d ", STTop(&s));
	STPush(&s, 2);
	//printf("%d ", STTop(&s));
	STPush(&s, 3);
	//printf("%d ", STTop(&s));
	STPush(&s, 4);
	//printf("%d ", STTop(&s));
	
	while (!STEmpty(&s))
	{
		printf("%d ",STTop(&s));
		STPop(&s);
	}

	STDestroy(&s);
	return 0;
}
