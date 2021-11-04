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

bool adjust(SListNode** head)
{
	SListNode* cur = *head;//curָ���һ���ڵ�
	cur = cur->next;
	int count = 0;//����ڵ�ĸ���
	while (cur != NULL)
	{
		cur = cur->next;
		count++;
	}

	//������ڵ�����󿪱����飬���ڵ����ݱ��浽������
	int* arr = malloc(count * sizeof(int));
	if (arr == NULL)
		exit(-1);
	int i = 0;
	cur = *head;
	cur = cur->next;
	//���ڵ����ݱ��浽������
	while (cur != NULL)
	{
		arr[i] = cur->data;
		i++;
		cur = cur->next;
	}
	for (int i = 0; i < count; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	//��Ŀ��˵��i>=2��Ҳ����������3�ڵ�
	int d = arr[1] - arr[0];
	for (int i = 2; i < count; i++)
	{
		if (arr[i] - arr[i - 1] != d)
		{
			return false;
		}
	}
	return true;
}
