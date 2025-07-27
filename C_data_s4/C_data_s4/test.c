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