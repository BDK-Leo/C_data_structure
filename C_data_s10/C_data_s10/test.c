#define _CRT_SECURE_NO_WARNINGS 1

//������ ��

//��
/*struct TreeNode
{
	int val;
	
	//�������ֵܱ�ʾ��
	struct TreeNode* leftchild;
	struct TreeNode* rightBrother;
};

int main()
{

	return 0;
}*/

/*
1.˳��洢
�������±길�ӹ�ϵ����ʾ��
���踸���������е��±꣺i
�����������е��±꣺2*i+1
�Һ����������е��±꣺2*i+2

���躢���������е��±꣺j
�����������е��±꣺(j-1)/2

����ֻ�ʺϴ洢������������ȫ������
*/

/*
2.��ʽ�洢

*/

/*
��ѣ�
��ȫ��������
�κ�һ�����׶�>=����

С�ѣ�
��ȫ������
�κ�һ�����׶�<=����
*/

#include"Heap.h"

void TestHeap1()
{
	int a[] = {4,2,8,1,5,6,9,7};
	HP hp;
	HPInit(&hp);
	for (size_t i = 0;i < sizeof(a)/sizeof(int);i++)
	{
		HPPush(&hp,a[i]);
	}

	//���� �ռ临�Ӷ�ΪO(N)
	int i = 0;
	while (!HPEmpty(&hp))
	{
		//printf("%d ", HPTop(&hp));
		a[i++] = HPTop(&hp);
		HPPop(&hp);
	}
	for (size_t j = 0; j < sizeof(a) / sizeof(int); j++)
	{
		printf("%d ", a[j]);
	}

	//�ҳ�����ǰk��
	/*int k = 0;
	scanf("%d",&k);

	while (k--)
	{
		printf("%d ",HPTop(&hp));
		HPPop(&hp);
	}
	printf("\n");*/

	HPDestroy(&hp);
}

//������
//O(N*logN)
void HeapSort(int* a, int n)
{
	//����
	//���򣬽�С��
	//���򣬽����
	for (int i = 1; i < n; i++)
	{
		AdjustUp(a, i);
	}

	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[0],&a[end]);
		AdjustDown(a,end,0);
		--end;
	}

	for (int j = 0; j < n; j++)
	{
		printf("%d ", a[j]);
	}
}

void TestHeap2()
{
	int a[] = { 4,2,8,1,5,6,9,7 };
	HeapSort(a,sizeof(a)/sizeof(int));
}

int main()
{
	//TestHeap1();
	TestHeap2();

	return 0;
}