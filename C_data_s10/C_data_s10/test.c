#define _CRT_SECURE_NO_WARNINGS 1

//二叉树

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

void TestHeap1()
{
	int a[] = {4,2,8,1,5,6,9,7};
	HP hp;
	HPInit(&hp);
	for (size_t i = 0;i < sizeof(a)/sizeof(int);i++)
	{
		HPPush(&hp,a[i]);
	}
}

int main()
{
	TestHeap1();

	return 0;
}