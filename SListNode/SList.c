#include"SList.h"
//单链表的打印
void SListPrint(SListNode* phead)
{
	struct SListNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}
//开辟新节点
SListNode* BuySListNode(SListDataType x)
{
	SListNode* node = malloc(sizeof(SListNode));
	if (node != NULL)
	{
		node->data = x;
		node->next = NULL;
	}
	return node;
}
//单链表尾插
void SListPushBack(SListNode** pphead, SListDataType x)
{
	SListNode* NewNode = BuySListNode(x);
	if (*pphead == NULL)
	{
		*pphead = NewNode;
	}
	else
	{
		SListNode* tail = *pphead;
		while (tail->next != NULL)
		{
		
			tail = tail->next;
		}
		tail->next = NewNode;
	}
}
//单链表尾删
void SListPopBack(SListNode** pphead)
{
	//尾删分三种情况
	//1.直接为空
	//2.只有一个元素
	//3.又许多元素
	if (*pphead == NULL)//1.直接为空
	{
		return;
	}
	else//2.不为空
	{
		SListNode* tail = *pphead;
		if ((*pphead)->next == NULL)//2.1若只有一个元素
		{
			free(*pphead);
			*pphead=NULL;
		}
		else//2.2有很多元素
		{
			SListNode* pre = NULL;
			while (tail->next != NULL)
			{
				pre = tail;
				tail = tail->next;
			}
			free(tail);
			pre->next = NULL;
		}
	}
}
//单链表头插
void SListPushFront(SListNode** pphead, SListDataType x)
{
	SListNode* NewNode = BuySListNode(x);
	NewNode->next = *pphead;
	*pphead = NewNode;
}

//单链表的查找
SListNode* SListFind(SListNode* plist, SListDataType x)
{
	//一次循环查找该数字，若循环结束还没有找到，说明该元素不存在，返回空
	SListNode* cur = plist;
	while (cur != NULL)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}
//单链表的插入，在pos之后插入
void SListInsertAfter(SListNode* pos, SListDataType x)
{
	SListNode* next = pos->next;
	SListNode* NewNode = BuySListNode(x);
	pos->next = NewNode;
	NewNode->next = next;
}
//单链表在特定位置后删除
void SListEraseAfter(SListNode* pos)
{
	SListNode* next = pos->next;
	if (next != NULL)
	{
		SListNode* nextnext = next->next;
		free(next);
		pos->next = nextnext;
	}
}