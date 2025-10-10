#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//链表OJ
//面试题1：返回倒数第K个节点(力扣)
//快慢指针
//int kthTolast(struct ListNode* head,int k)
//{
//	struct ListNode* fast = head, * slow = head;
//	//快指针先走k步
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

//面试题2：链表的回文(对称)结构(牛客)
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

//面试题3：相交链表
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
//	//尾节点不相等就是不相交
//	if (curA != curB)
//	{
//		return NULL;
//	}
//	//长的先走差距步，两条再同时走，第一个相等就是交点
//	//假设法
//	int gap = abs(lenA - lenB);//求绝对值
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

