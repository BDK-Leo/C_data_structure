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

//题目三：876链表的中间节点
//(快慢指针)
//typedef struct ListNode ListNode;
//struct ListNode* middleNode(struct ListNode* head)
//{
//	//创建快慢指针
//	ListNode* slow = head;
//	ListNode* fast = head;
//	while (fast && fast->next)
//	{
//		slow = slow->next;
//		fast = fast->next->next;
//	}
//	return slow;
//}

//题目四：21合并两个有序链表
//typedef struct ListNode ListNode;
//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
//{
//	if (list1 == NULL)
//	{
//		return list2;
//	}
//	if (list2 == NULL)
//	{
//		return list1;
//	}
//
//	ListNode* l1 = list1;
//	ListNode* l2 = list2;
//
//	//创建新链表
//	ListNode* newHead, * newTail;
//	newHead = newTail = (ListNode*)malloc(sizeof(ListNode));
//
//	while (l1 && l2)
//	{
//		if (l1->val < l2->val)
//		{
//			newTail->next = l1;
//			newTail = newTail->next;
//			l1 = l1->next;
//		}
//		else
//		{
//			newTail->next = l2;
//			newTail = newTail->next;
//			l2 = l2->next;
//		}
//	}
//	if (l2)
//	{
//		newTail->next = l2;
//	}
//	if (l1)
//	{
//		newTail->next = l1;
//	}
//	ListNode* ret = newHead->next;
//	free(newHead);
//	newHead = NULL;
//	return ret;
//}

//题目五：循环链表的经典应用-环形链表的约瑟夫问题
//typedef struct ListNode ListNode;
////创建节点
//ListNode* BuyNode(int x)
//{
//	ListNode* node = (ListNode*)malloc(sizeof(ListNode));
//	if (node == NULL)
//	{
//		exit(1);
//	}
//	node->val = x;
//	node->next = NULL;
//	return node;
//}
//
////创建带环链表
//ListNode* CreateCircle(int n)
//{
//	//先创建头节点
//	ListNode* phead = BuyNode(1);
//	ListNode* ptail = phead;
//	for (int i = 2;i <= n;i++)
//	{
//		ptail->next = BuyNode(i);
//		ptail = ptail->next;
//	}
//	ptail->next = phead;
//	return ptail;
//}
//
//int ysf(int n, int m)
//{
//	//根据n创建带环链表
//	ListNode* prev = CreateCircle(n);
//	ListNode* pcur = prev->next;
//	int count = 1;
//	while (pcur->next != pcur)
//	{
//		if (count == m)
//		{
//			prev->next = pcur->next;
//			free(pcur);
//			pcur = prev->next;
//			count = 1;
//		}
//		else
//		{
//			prev = pcur;
//			pcur = pcur->next;
//			count++;
//		}
//	}
//	return pcur->val;
//}

//题目六：

