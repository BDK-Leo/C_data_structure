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

//������4����������141���ۣ�
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
���⣺
1��Ϊʲôһ������������û�п��ܻ�������֤����
  slow����ʱ��fast����׷��slow�������slow��һ����fast���������������һ�ݼ���
2��slowһ����һ����fast��n���ɲ����ԣ���֤����
  ��slow����ʱ����ΪN,���Ǿ�����һ����һ����һ�������������������ΪN-2���þ���N%2�Ľ�����ж��Ƿ�׷�ϡ�
  �軷����ΪC����NΪ������C-1Ϊ����������Զ׷���ϡ�������Զ׷���ϵ����������ڡ����ۣ�Ҫôfast��һ��׷�ϣ�Ҫô���ǵڶ���׷�ϡ�
���⣺Ѱ����ڵ�pos.
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

//������5���������ĸ��ƣ�138���ۣ�
/*
struct Node* copyRandomList(struct Node* head)
{
    struct Node* cur = head;
    //�����ڵ������ԭ�ڵ�ĺ���
    while(cur)
    {
        struct Node* copy = (struct Node*)malloc(sizeof(struct Node));
        copy->val = cur->val;

        copy->next = cur->next;
        cur->next = copy;

        cur = copy->next;
    }

    //����random
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

    //�ѿ����ڵ�ȡ����β���Ϊ�������ָ�ԭ����
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
        cur->next = next;//�ָ�
        cur = next;
    }
    return copyhead;
}
*/
