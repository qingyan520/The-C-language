//链表的插入分为头指针位置插入和链表某个结点进行插入，或者像创建链表结构一样在链表末尾添加结点
//虽然三种插入方法不同，但其操作思想是一样的，下面进行第一种操作方式，在链表得头指针后添加结点
//1.头结点后面插入：插入结点的过程就像手拉手的小盆友连成一条线，这时又来了一个小朋友，他要站在老师和小朋友之间，那么老师就要放开原来的小朋友，握住新加
//入的小盆友，这个新加入得小盆友就要握住原来那个小朋友的手，这样这条连成的线还是连在一起
//设计一个函数，用来向链表中添加结点：
//struct student*Insert(struct student*pHead)
//{
//	struct student* pNew;//定义一块新的空间
//	pNew = (struct student*)malloc(sizeof(struct student));//为这块新的空间分配内存
//	scanf_s("%s", &pNew.Name, );//输入信息
//	scanf_s("%d", &pNew.iNuumber);
//	pNew.pNext = pHead;//让新加入的结点指向头结点
//	pHead = pNew;//让新加入的结点成为头结点
//	iCount++;//结点个数增加
//	return pHead;
//}///////////////
;
#include<stdio.h>
#include<stdlib.h>
struct student
{
	char Name[20];
	int iNumber;
	struct student* pNext;
};
int iCount5 = 0;
struct student* Create5()
{
	struct student* pHead = NULL;
	struct student* pEnd, * pNew;
	pNew = pEnd = (struct student*)malloc(sizeof(struct student));
	scanf_s("%s", &pNew->Name, 20);
	scanf_s("%d", &pNew->iNumber);
	while (pNew->iNumber != 0)
	{
		iCount5++;
		if (iCount5 == 1)
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
		scanf_s("%s", &pNew->Name,20);
		scanf_s("%d", &pNew->iNumber);
	}
	free(pNew);
	return pHead;
}
struct student* Insert5(struct student* pHead)
{
	//指向新分配的内存
	struct student* pNew;
	printf("---首先插入一个成员---\n");
	//分配一块内存空间，并返回指向该内存空间的指针
	pNew = (struct student*)malloc(sizeof(struct student));
	scanf_s("%s", &pNew->Name, 20);
	scanf_s("%d", &pNew->iNumber);
	//新结点指向原来的尾结点
	pNew->pNext = pHead;
	//让头结点为新结点
	pHead = pNew;
	//结点数量增加
	iCount5++;
	//返回头指针
	return pHead;
}
void Printf5(struct student* pHead)
{
	int ilndex = 1;
	struct student* pTemp;
	pTemp = pHead;
	printf("该链表共有%d个成员\n", iCount5);
	printf("\n");
	while (pTemp != NULL)
	{
		printf("第%d个成员：\n",ilndex);
		printf("姓名：%s\n", pTemp->Name);
		printf("学号：%d\n", pTemp->iNumber);
		printf("\n");
		pTemp = pTemp->pNext;
		ilndex++;
	}
}
int main5()
{
	struct student* pHead;
	pHead = Create5();
	pHead = Insert5(pHead);
	Printf5(pHead);
	return 0;
}