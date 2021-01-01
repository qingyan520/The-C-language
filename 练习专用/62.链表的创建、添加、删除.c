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
	struct student* pEnd, * pNew;
	pEnd = pNew = (struct student*)malloc(sizeof(struct student));
	printf("请输入姓名，学号：");
	scanf_s("%s", &pNew->Name, 20);
	scanf_s("%d", &pNew->iNumber);
	while (pNew->iNumber != 0)
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
struct student* Insert(struct student* pHead)
{
	struct student* pNew;
	pNew = (struct student*)malloc(sizeof(struct student));
	printf("请插入一条信息：");
	scanf_s("%s", &pNew->Name, 20);
	scanf_s("%d", &pNew->iNumber);
	pNew->pNext = pHead;
	pHead = pNew;
	iCount++;
	return pHead;
}
Printf(struct student* pHead)
{
	struct student* pTemp;
	pTemp = pHead;
	int ilndex = 1;
	printf("该链表共有%d个成员\n", iCount);
	while (pTemp != NULL)
	{
		printf("第%d个成员\n", ilndex);
		printf("姓名：%s\n", pTemp->Name);
		printf("学号：%d\n", pTemp->iNumber);
		printf("\n");
		pTemp = pTemp->pNext;
		ilndex++;
	}
}
void Delete(struct student* pHead)
{
	struct student* pTemp;
	struct student* pPre;
	int ilndex;
	printf("请输入要删除的结点位置");
	scanf_s("%d", &ilndex);
	pTemp = pHead;
	pPre = pTemp;
	for (int i = 1; i < ilndex; i++)
	{
		pPre = pTemp;
		pTemp = pTemp->pNext;
	}
	pPre->pNext = pTemp->pNext;
	free(pTemp);
	iCount--;
	printf("删除成功\n");
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