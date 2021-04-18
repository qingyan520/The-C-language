#include"DList.h"
struct ListNode* BuyListNode(ListDataType x)
{
	struct ListNode* NewNode = (ListNode*)malloc(sizeof(struct ListNode));
	if (NewNode != NULL)
	{
		NewNode->x = x;
		NewNode->next = NULL;
		NewNode->prev = NULL;
	}
	return NewNode;
}
ListNode* InitListNode()
{
	ListNode* head = BuyListNode(0);
	head->next = head;
	head->prev = head;
	return head;
}
void Push_Back(ListNode* phead, ListDataType x)
{
	ListNode* newnode = BuyListNode(x);
	ListNode* tail = phead->prev;
	tail->next = newnode;
	newnode->prev = tail;
	newnode->next = phead;
	phead->prev = newnode;
}
void Print(ListNode* phead)
{
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d->", cur->x);
		cur = cur->next;
	}
	printf("phead\n");
}
void Push_Front(ListNode* phead, ListDataType x)
{
	ListNode* newnode = BuyListNode(x);
	ListNode* next = phead->next;
	phead->next = newnode;
	phead->prev = newnode;
	newnode->next = next;
	next->prev = newnode;
	newnode->prev = phead;
}
//Pop_Back不知道为何运行不了
void Pop_Back(ListNode* phead)
{
	ListNode* tail = phead->prev;
	ListNode* tailprev = tail->prev;
	free(tail);
	phead->prev = tailprev;
	tailprev->next = phead;
}
void Pop_Front(ListNode* phead)
{
	/*ListNode* first = phead->next;
	ListNode* second = first->next;
	free(first);
	phead->next = second;
	second->prev = phead;*/
	PopListNode(phead->next);
}

ListNode* FindListNode(ListNode*phead,ListDataType x)
{
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->x == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}
//pos位置之前插入数据
void InsertListNode(ListNode* pos, ListDataType x)
{
	ListNode* Prev = pos->prev;
	ListNode* newnode = BuyListNode(x);
	Prev->next = newnode;
	newnode->prev = Prev;
	newnode->next = pos;
	pos->prev = newnode;
}

void PopListNode(ListNode* pos)
{
	ListNode* Prev = pos->prev;
	ListNode* next = pos->next;
	Prev->next = next;
	next->prev = Prev;
	free(pos);
}