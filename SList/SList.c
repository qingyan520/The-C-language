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

bool adjust(SListNode** head)
{
	SListNode* cur = *head;//cur指向第一个节点
	cur = cur->next;
	int count = 0;//计算节点的个数
	while (cur != NULL)
	{
		cur = cur->next;
		count++;
	}

	//计算完节点个数后开辟数组，将节点数据保存到数组中
	int* arr = malloc(count * sizeof(int));
	if (arr == NULL)
		exit(-1);
	int i = 0;
	cur = *head;
	cur = cur->next;
	//将节点数据保存到数组中
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
	//题目中说了i>=2，也就是至少有3节点
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
