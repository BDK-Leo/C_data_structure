#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"

//˫������ר��

//�������:8��(2*2*2)
//��ͷ ����ͷ
//���� ˫��
//ѭ�� ��ѭ��

//��õ�����:
//������(����ͷ����ѭ������)
//˫������(��ͷ˫��ѭ������)

void ListTest01()
{
	////��ʼ��1
	//LTNode* plist = NULL;
	//LTInit(&plist);

	//��ʼ��2
	LTNode* plist = LTInit();

	LTPushBack(plist, 1);
	LTPushBack(plist, 2);
	LTPushBack(plist, 3);
	LTPrint(plist);

	LTPushFront(plist, 0);
	LTPrint(plist);

	//LTPopBack(plist);
	//LTPrint(plist);
	//LTPopBack(plist);
	//LTPrint(plist);

	//LTPopFront(plist);
	//LTPrint(plist);
	//LTPopFront(plist);
	//LTPrint(plist);

	LTNode* Find = LTFind(plist, 0);
	if (Find == NULL)
	{
		printf("NULL!\n");
	}
	else
	{
		printf("Find!\n");
	}

	LTInsert(Find, 99);
	LTPrint(plist);

	LTErase(Find);
	Find = NULL;
	LTPrint(plist);

	LTDestroy(plist);
	plist = NULL;//plist�ֶ��ÿ�,����Ϊ�˱���ָ��ӿ�һ���Եı׶ˣ�����һ��ָ��;������ָ���򲻻ᣬ�βλ�Ӱ�쵽ʵ��,�������Ӽ���ɱ�
}

int main()
{
	ListTest01();
	return 0;
}