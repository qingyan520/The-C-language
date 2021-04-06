#include"SList.h"
//������Ĵ�ӡ
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
//�����½ڵ�
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
//������β��
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
//������βɾ
void SListPopBack(SListNode** pphead)
{
	//βɾ���������
	//1.ֱ��Ϊ��
	//2.ֻ��һ��Ԫ��
	//3.�����Ԫ��
	if (*pphead == NULL)//1.ֱ��Ϊ��
	{
		return;
	}
	else//2.��Ϊ��
	{
		SListNode* tail = *pphead;
		if ((*pphead)->next == NULL)//2.1��ֻ��һ��Ԫ��
		{
			free(*pphead);
			*pphead=NULL;
		}
		else//2.2�кܶ�Ԫ��
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
//������ͷ��
void SListPushFront(SListNode** pphead, SListDataType x)
{
	SListNode* NewNode = BuySListNode(x);
	NewNode->next = *pphead;
	*pphead = NewNode;
}

//������Ĳ���
SListNode* SListFind(SListNode* plist, SListDataType x)
{
	//һ��ѭ�����Ҹ����֣���ѭ��������û���ҵ���˵����Ԫ�ز����ڣ����ؿ�
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
//������Ĳ��룬��pos֮�����
void SListInsertAfter(SListNode* pos, SListDataType x)
{
	SListNode* next = pos->next;
	SListNode* NewNode = BuySListNode(x);
	pos->next = NewNode;
	NewNode->next = next;
}
//���������ض�λ�ú�ɾ��
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