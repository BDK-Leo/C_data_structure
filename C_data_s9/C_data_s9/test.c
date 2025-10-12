#define _CRT_SECURE_NO_WARNINGS 1
#include"Queue.h"
//栈和队列2

//队列
/*
队列的概念及结构
队列：只允许在一端进行插入数据操作，在另一端进行删除数据操作的特殊线性表。
	 队列具有先进先出。
	 入队列：进行插入操作的一端称为队尾。
	 出队列：进行删除操作的一端称为队头。

广度优先遍历。
*/

int main()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q,1);
	QueuePush(&q,2);
	QueuePush(&q,3);

	while (!QueueEmpty(&q))
	{
		printf("%d ",QueueFront(&q));
		QueuePop(&q);
	}
	printf("\n");

	return 0;
}