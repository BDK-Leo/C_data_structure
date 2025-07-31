#define _CRT_SECURE_NO_WARNINGS 1
//单链表的经典算法

//题目一：移除链表元素
//typedef struct ListNode ListNode;
//struct ListNode* removeElements(struct ListNode* head, int val)
//{
//	ListNode* newhead, * newtail;
//	newhead = newtail = NULL;
//	ListNode* pcur = head;
//	while (pcur)
//	{
//		if (pcur->val != val)
//		{
//			if (newhead == NULL)
//			{
//				newhead = newtail = pcur;
//			}
//			else
//			{
//				newtail->next = pcur;
//				newtail = newtail->next;
//			}
//		}
//		pcur = pcur->next;
//	}
//	if (newtail)
//	{
//		newtail->next = NULL;
//	}
//	return newhead;
//}

//题目二：206反转链表
//typedef struct ListNode ListNode;
//struct ListNode* reverseList(struct ListNode* head)
//{
//	if (head == NULL)
//	{
//		return head;
//	}
//	ListNode* newhead, * middle, * newtail;
//	newhead = NULL; middle = head; newtail = middle->next;
//	while (middle)
//	{
//		middle->next = newhead;
//		newhead = middle;
//		middle = newtail;
//		if (newtail)
//		{
//			newtail = newtail->next;
//		}
//	}
//	return  newhead;
//}

//题目三：











