#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"

void HPInit(HP* php)
{
	assert(php);
	php->a = NULL;
	php->capacity = php->size = 0;
}

void HPDestroy(HP* php)
{
	assert(php);
	free(php->a);
	php->a = NULL;
	php->capacity = php->size = 0;
}

//交换
void Swap(HPDataType* p1,HPDataType* p2)
{
	HPDataType tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

//向上调整
void AdjustUp(HPDataType* a,int child)
{
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (a[child] < a[parent])
		{
			Swap(&a[child],&a[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}

void HPPush(HP* php, HPDataType x)
{
	assert(php);

	if (php->size == php->capacity)
	{
		int newcapacity = php->capacity == 0 ? 4 : php->capacity * 2;
		HPDataType* tmp = (HPDataType*)realloc(php->a,newcapacity * sizeof(HPDataType));
		if (tmp == NULL)
		{
			perror("realloc fail!");
			return;
		}

		php->a = tmp;
		php->capacity = newcapacity;
	}

	php->a[php->size] = x;
	php->size++;

	AdjustUp(php->a,php->size - 1);
}

//向下调整
void AdjustDown(HPDataType* a,int n,int parent)
{

}

//删除堆顶的数据(根位置)
void HPPop(HP* php)
{
	assert(php);
	assert(php->size > 0);

	Swap(&php->a[0],&php->a[php->size - 1]);
	php->size--;

	AdjustDown(php->a,php->size,0);
}