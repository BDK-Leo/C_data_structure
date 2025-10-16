#define _CRT_SECURE_NO_WARNINGS 1

//二叉树 堆

//树
/*struct TreeNode
{
	int val;
	
	//左孩子右兄弟表示法
	struct TreeNode* leftchild;
	struct TreeNode* rightBrother;
};

int main()
{

	return 0;
}*/

/*
1.顺序存储
用数组下标父子关系来表示。
假设父亲在数组中的下标：i
左孩子在数组中的下标：2*i+1
右孩子在数组中的下标：2*i+2

假设孩子在数组中的下标：j
父亲在数组中的下标：(j-1)/2

数组只适合存储满二叉树和完全二叉树
*/

/*
2.链式存储

*/

/*
大堆：
完全二叉树。
任何一个父亲都>=孩子

小堆：
完全二叉树
任何一个父亲都<=孩子
*/

#include"Heap.h"
#include<time.h>

void TestHeap1()
{
	int a[] = {4,2,8,1,5,6,9,7};
	HP hp;
	HPInit(&hp);
	for (size_t i = 0;i < sizeof(a)/sizeof(int);i++)
	{
		HPPush(&hp,a[i]);
	}

	//排序 空间复杂度为O(N)
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

	//找出最大的前k个
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

//堆排序
//O(N*logN)
void HeapSort(int* a, int n)
{
	//建堆
	//降序，建小堆
	//升序，建大堆
	/*for (int i = 1; i < n; i++)
	{
		//向上调整建堆O(N*logN)
		AdjustUp(a, i);
	}*/

	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		//向下调整建堆O(N)，效率更高
		AdjustDown(a, n, i);
	}

	//O(N*logN)
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

//用前K个数建一个小堆，剩下的数据跟堆顶数据比较，
//如果比堆顶的数据大就替代堆顶入堆(覆盖根位置，然后向下调整)
//最终这个小堆中的K个，就是最大的前K个
//O(N)
void CreateDate()
{
	//造数据
	int n = 100000;
	srand(time(0));
	const char* file = "data.txt";
	FILE* fin = fopen(file,"w");
	if (fin == NULL)
	{
		perror("fopen error");
		return;
	}
	
	for (int i = 0;i < n;++i)
	{
		int x = (rand() + i) % 10000000;
		fprintf(fin, "%d\n", x);
	}

	fclose(fin);
}

void TestHeap3()
{
	int k;
	printf("输入K的个数：");
	scanf("%d",&k);
	int* Kminheap = (int*)malloc(sizeof(int)*k);
	if (Kminheap == NULL)
	{
		perror("malloc fail!");
		return;
	}

	//读
	const char* file = "data.txt";
	FILE* fout = fopen(file, "r");
	if (fout == NULL)
	{
		perror("fopen error");
		return;
	}

	//读取文件中前K个数
	for (int i = 0;i < k;i++)
	{
		fscanf(fout,"%d", &Kminheap[i]);
	}

	//建K个数的小堆 O(K)
	for (int i = (k-1-1)/2;i >= 0;i--)
	{
		AdjustDown(Kminheap, k, i);
	}

	//读取剩下的N-K个数
	int x = 0;
	while (fscanf(fout,"%d", &x) > 0)
	{
		if (x > Kminheap[0])
		{
			Kminheap[0] = x;
			AdjustDown(Kminheap,k,0);
		}
	}

	printf("最大的前K个：");
	for (int i = 0;i < k;i++)
	{
		printf("%d ",Kminheap[i]);
	}
	printf("\n");
}

int main()
{
	//TestHeap1();
	//TestHeap2();

	//CreateDate();
	TestHeap3();

	return 0;
}