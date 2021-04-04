#include"SList.h"
void SListPrint(SListNode* phead)//��ӡ����
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
		printf("�½ڵ㿪��ʧ��\n");
		exit(-1);
	}
	return newNode;
}
void SListPushBack(SListNode** pphead, SListDataType x)//β����������
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
			printf("�½ڵ㿪��ʧ��\n");
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
			printf("�½ڵ㿪��ʧ��\n");
			exit(-1);
		}
		*pphead = newNode;
	}

}