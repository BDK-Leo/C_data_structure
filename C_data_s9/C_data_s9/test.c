#define _CRT_SECURE_NO_WARNINGS 1
#include"Queue.h"
//ջ�Ͷ���2

//����
/*
���еĸ���ṹ
���У�ֻ������һ�˽��в������ݲ���������һ�˽���ɾ�����ݲ������������Ա�
	 ���о����Ƚ��ȳ���
	 ����У����в��������һ�˳�Ϊ��β��
	 �����У�����ɾ��������һ�˳�Ϊ��ͷ��

������ȱ�����
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