#define _CRT_SECURE_NO_WARNINGS 1

//������

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
}

int main()
{
	TestHeap1();

	return 0;
}