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

//面试题4：环形链表（141力扣）
/*
bool hasCycle(struct ListNode* head)
{
	struct ListNode* slow = head,*fast = head;
	while(fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if(slow == fast)
			return true;
	}

	return false;
}
问题：
1：为什么一定会相遇，有没有可能会错过，请证明。
  slow进环时，fast处于追击slow的情况，slow走一步，fast便走两步，差距以一递减。
2：slow一次走一步，fast走n步可不可以，请证明。
  设slow进环时距离为N,考虑距离差，若一个走一步，一个走三步，则距离差规律为N-2，用距离N%2的结果来判断是否追上。
  设环长度为C，若N为奇数，C-1为奇数，则永远追不上。但是永远追不上的条件不存在。结论：要么fast第一轮追上，要么就是第二轮追上。
问题：寻找入口点pos.
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode* slow = head,*fast = head;
    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast)
        {
            struct ListNode* meet = slow;
            while(meet != head)
            {
                meet = meet->next;
                head = head->next;
            }
            return meet;
        }
    }
    return NULL;
}
 */

//面试题5：随机链表的复制（138力扣）
/*
struct Node* copyRandomList(struct Node* head)
{
    struct Node* cur = head;
    //拷贝节点插入在原节点的后面
    while(cur)
    {
        struct Node* copy = (struct Node*)malloc(sizeof(struct Node));
        copy->val = cur->val;

        copy->next = cur->next;
        cur->next = copy;

        cur = copy->next;
    }

    //控制random
    cur = head;
    while(cur)
    {
        struct Node* copy = cur->next;
        if(cur->random == NULL)
        {
            copy->random = NULL;
        }
        else
        {
            copy->random = cur->random->next;
        }

        cur = copy->next;
    }

    //把拷贝节点取下来尾插成为新链表，恢复原链表
    struct Node* copyhead = NULL,*copytail = NULL;
    cur = head;
    while(cur)
    {
        struct Node* copy = cur->next;
        struct Node* next = copy->next;

        if(copytail == NULL)
        {
            copyhead = copytail = copy;
        }
        else
        {
            copytail->next = copy;
            copytail = copytail->next;
        }
        cur->next = next;//恢复
        cur = next;
    }
    return copyhead;
}
*/
