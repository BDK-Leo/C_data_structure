#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"
//ջ�Ͷ���

//ջ
/*
ջ�ĸ���ṹ��
	ջ��һ����������Ա���ֻ�����ڹ̶���һ�˽��в����ɾ��Ԫ�ز�����
	�������ݲ����ɾ��������һ�˳�Ϊջ������һ�˳�Ϊջ�ס�
	ѹջ��ջ�Ĳ����������ջ/ѹջ/��ջ����������ջ����
	��ջ��ջ��ɾ������������ջ��������Ҳ��ջ����
	ջ�е�����Ԫ�����غ���ȳ���ԭ��
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

//����ջ������Ԫ��
int main()
{
	ST s;
	STInit(&s);
	//Ҳ���Ա߽��߳�
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
