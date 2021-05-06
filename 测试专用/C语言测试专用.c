#include<stdio.h>
struct student
{
	char Name[20];
	int iNumber;
	struct student* pNext;
};
int iCount = 0;
struct student* Create()
{
	struct student* pHead = NULL;
	struct student* pNew, * pEnd;
	pNew = pEnd = (struct student*)malloc(sizeof(int));
	scanf_s("%s", &pNew->Name, 20);
	scanf_s("%d", &pNew->iNumber);
	while (pNew->iNumber != NULL)
	{
		iCount++;
		if (iCount == 1)
		{
			pNew->pNext = pHead;
			pEnd = pNew;
			pHead = pNew;
		}
		else
		{
			pNew->pNext = NULL;
			pEnd->pNext = pNew;
			pEnd = pNew;
		}
		pNew = (struct student*)malloc(sizeof(struct student));
		scanf_s("%s", &pNew->Name, 20);
		scanf_s("%d", &pNew->iNumber);
	}
	free(pNew);
	return pHead;
}
void Printf(struct student* pHead)
{
	struct student* pTemp;
	pTemp = pHead;
	int ilndex = 1;
	printf("该链表现在有%d个成员\n", iCount);
	printf("\n");
	while (pTemp != NULL)
	{
		printf("第%d个成员信息\n", ilndex);
		printf("姓名：%s\n", pTemp->Name);
		printf("学号：%d\n", pTemp->iNumber);
		printf("\n");
		pTemp = pTemp->pNext;
		ilndex++;
	}
}
struct student* Insert(struct student* pHead)
{
	struct student* pNew;
	pNew = (struct student*)malloc(sizeof(struct student));
	scanf_s("%s", &pNew->Name, 20);
	scanf_s("%d", &pNew->iNumber);
	pNew->pNext = pHead;
	pHead = pNew;
	iCount++;
	return pHead;
}
void Delete(struct student* pHead)
{
	int DeleteNode;
	printf("请输入要删除的结点：");
	scanf_s("%d", &DeleteNode);
	struct student* pTemp;
	struct student* pPre;
	pTemp = pHead;
	pPre = pTemp;
	for (int i = 1; i < DeleteNode; i++)
	{
		pPre = pTemp;
		pTemp = pTemp->pNext;
	}
	pPre->pNext = pTemp->pNext;
	iCount--;
	free(pTemp);
}
int main()
{
	struct student* pHead;
	pHead = Create();
	pHead = Insert(pHead);
	Delete(pHead);
	Printf(pHead);
	return 0;
}