#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//����OJ
//������1�����ص�����K���ڵ�(����)
//����ָ��
//int kthTolast(struct ListNode* head,int k)
//{
//	struct ListNode* fast = head, * slow = head;
//	//��ָ������k��
//	while (k--)
//	{
//		fast = fast->next;
//	}
//	while (fast)
//	{
//		skow = slow->next;
//		fast = fast->next;
//	}
//	return slow->val;
//}

//������2������Ļ���(�Գ�)�ṹ(ţ��)
//class Solution {
//public:
//	struct ListNode* middleNode(struct ListNode* head)
//	{
//		struct ListNode* slow = head, * fast = head;
//		while (fast && fast->next)
//		{
//			slow = slow->next;
//			fast = fast->next->next;
//		}
//		return slow;
//	}
//
//	struct ListNode* ReverseList(struct ListNode* head)
//	{
//		if (head == NULL)
//		{
//			return head;
//		}
//		struct ListNode* cur = head->next;
//		struct ListNode* pre = head;
//
//		while (cur)
//		{
//			pre->next = cur->next;
//			cur->next = head;
//			head = cur;
//			cur = pre->next;
//		}
//		return head;
//	}
//
//	bool isPail(struct ListNode* head)
//	{
//		struct ListNode* mid = middleNode(head);
//		struct ListNode* rmid = ReverseList(mid);
//
//		while (rmid && head)
//		{
//			if (rmid->val != head->val)
//			{
//				return false;
//			}
//			rmid = rmid->next;
//			head = head->next;
//		}
//		return true;
//	}
//};

//������3���ཻ����
//struct ListNode* getIntersectionNode(struct ListNode* headA,struct ListNode* headB)
//{
//	struct ListNode* curA = headA, * curB = headB;
//	int lenA = 1, lenB = 1;
//	while (curA->next)
//	{
//		curA = curA->next;
//		++lenA;
//	}
//	while (curB->next)
//	{
//		curB = curB->next;
//		++lenB;
//	}
//	//β�ڵ㲻��Ⱦ��ǲ��ཻ
//	if (curA != curB)
//	{
//		return NULL;
//	}
//	//�������߲�ಽ��������ͬʱ�ߣ���һ����Ⱦ��ǽ���
//	//���跨
//	int gap = abs(lenA - lenB);//�����ֵ
//	struct ListNode* longList = headA, * shortList = headB;
//	if (lenB > lenA)
//	{
//		longList = headB;
//		shortList = headA;
//	}
//	while (gap--)
//	{
//		longList = longList->next;
//	}
//	while (longList != shortList)
//	{
//		longList = longList->next;
//		shortList = shortList->next;
//	}
//	return longList;
//}

