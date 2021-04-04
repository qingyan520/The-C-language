#include"SList.h"
void SListPrint(SListNode* phead)//打印数据
{
	SListNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL");
}
SListNode* BuyListNode(SListDataType x)
{
	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
	if (newNode!=NULL)
	{
		newNode->data = x;
		newNode->next = NULL;
	}
	else
	{
		printf("新节点开辟失败\n");
		exit(-1);
	}
	return newNode;
}
void SListPushBack(SListNode** pphead, SListDataType x)//尾部插入数据
{
	SListNode* tail = *pphead;
	
	if (*pphead == NULL)
	{
		SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
		if (newNode != NULL)
		{
			newNode->data = x;
			newNode->next = NULL;
		}
		else
		{
			printf("新节点开辟失败\n");
			exit(-1);
		}
		*pphead = newNode;
	}
	else
	{
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
		if (newNode != NULL)
		{
			newNode->data = x;
			newNode->next = NULL;
		}
		else
		{
			printf("新节点开辟失败\n");
			exit(-1);
		}
		*pphead = newNode;
	}

}