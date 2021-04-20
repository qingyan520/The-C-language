//链表结点的删除：向链表中添加结点之后，如果希望删除结点，该怎么办呢？还是通过上次小朋友手拉手进行比喻
//例如：队伍中一个小朋友想离开队伍，并且这个队伍没有断开的方法就是他旁边的小朋友将手拉起来
//输出一行信息，表示要进行删除操作，然后利用for循环操作找到要删除的结点后，连接要删除结点两边的结点，并利用free函数将pTemp指向的内存空间进行释放
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
void Delete(struct student* pHead, int ilndex)
{
	struct student* pTemp;//定义一个零时结点
	struct student* pPre;//删除结点位置前的结点
	pTemp = pHead;//得到头结点
	pPre = pTemp;
	for (int i = 1; i < ilndex; i++)//for循环使得pTemp指向要删除的结点
	{
		pPre = pTemp;
		pTemp = pTemp->pNext;
	}
	pPre->pNext = pTemp->pNext;//连接要删除结点两边的结点
	free(pTemp);//释放要删除的结点
	iCount--;//结点数量减一
}
int main()
{
	struct student* pHead;
	pHead = Create();
	pHead = Insert(pHead);
	Printf(pHead);
	Delete(pHead, 2);
	Printf(pHead);
	return 0;
}