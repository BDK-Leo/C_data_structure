#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"
//��ʼ��
void SLInit(SL* ps)
{
	ps->arr = NULL;//����mallocҲ����
	ps->size = ps->capacity = 0;
}

//����
void SLDestroy(SL* ps)
{
	if (ps->arr)
	{
		free(ps->arr);
	}
	ps->arr = NULL;
	ps->size = ps->capacity = 0;
}

//У��ռ亯��
void SLCheckCapacity(SL* ps)
{
	if (ps->capacity == ps->size)
	{
		//����ռ�
		int NewCapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;//���ռ�
		SLDataType* tmp = (SLDataType*)realloc(ps->arr, NewCapacity * 2 * sizeof(SLDataType));
		if (tmp == NULL)
		{
			perror("realloc fail!");
			exit(1);
		}
		//�ռ�����ɹ�
		ps->arr = tmp;
		ps->capacity = NewCapacity;
	}
}

//β��
void SLPushBack(SL* ps, SLDataType x)
{
	assert(ps);//����
	SLCheckCapacity(ps);
	ps->arr[ps->size++] = x;
}

//ͷ��
void SLPushFront(SL* ps, SLDataType x)
{
	assert(ps);
	SLCheckCapacity(ps);
	for (int i = ps->size;i > 0;i--)
	{
		ps->arr[i] = ps->arr[i - 1];
	}
	ps->arr[0] = x;
	++ps->size;
}

//βɾ
void SLPopBack(SL* ps)
{
	assert(ps);
	assert(ps->size);
	//˳���Ϊ��
	//ps->arr[ps->size - 1] = -1;
	--ps->size;
}

//ͷɾ
void SLPopFront(SL* ps)
{
	assert(ps);
	assert(ps->size);
	for (int i = 0;i < ps->size - 1;i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}

//��ӡ
void SLPrint(SL s)
{
	for (int i = 0;i < s.size;i++)
	{
		printf("%d ",s.arr[i]);
	}
	printf("\n");
}