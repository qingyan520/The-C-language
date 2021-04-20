#include<stdio.h>
#include<stdlib.h>
//创建链表结点
struct student
{
	// int number;
	char Name[20];
	int iNumber;
	struct student* pNext;
};
int iCount1 = 0;//定义一个全局变量记录结点个数
struct student* Create4()
{
	struct student* pHead=NULL;//创建头结点
	struct student* pEnd, * pNew;//创建尾结点和新结点
	pEnd = pNew = (struct student*)malloc(sizeof(struct student));//刚开始令尾结点和新结点指向同一块空间
	if (pNew != NULL)
	{
		//scanf_s("%d", &pNew->number);
		//输入数据
		scanf_s("%s", &pNew->Name, 20);
		scanf_s("%d", &pNew->iNumber);
	}
	while (pNew->iNumber!=0)
	{
		iCount1++;
		//第一次添加结点
		if (iCount1 == 1)
		{
			pNew->pNext = pHead;//令头结点指向新结点，即使新结点指向为空
			pEnd = pNew;//令尾结点为新结点
			pHead = pNew;//令头结点为信结点
		}
		//第二次添加结点
		else
		{
			pNew->pNext = NULL;//使新结点指针域指向为空
			pEnd->pNext = pNew;//使尾结点指针域指向空结点
			pEnd = pNew;//使尾结点为空结点
		}
		pNew = malloc(sizeof(struct student));//重新开辟一块空间来记录新数据
		if (pNew != NULL)
		{
			//scanf_s("%d", &pNew->number);
			//为新空间赋值
			scanf_s("%s", &pNew->Name, 20);
			scanf_s("%d", &pNew->iNumber);
		}
	}
	free(pNew);//释放内存
	return pHead;//返回头结点，通过头结点就可以找到整个链表
}
//定义一个函数来打印链表中的内容
void Print(struct student* pHead)//将头结点作为函数参数
{
	int ilindex = 1;//定义一个变量来记录打印信息的个数
	struct student* pTemp;//定义一个零时结点来遍历循环打印整个链表
	pTemp = pHead;//令零时结点为头结点
	printf("该链表现有%d个成员\n", iCount1);//打印已有的成员个数
	printf("\n");
	while (pTemp!= NULL)//判断循环终止条件，当零时结点指向为空时停止循环，即未添加元素时停止循环或者尾结点时停止循环
	{
		printf("第%d个链表成员:\n", ilindex);
		//printf("第%pq个同学信息\n", &pTemp->number);
		printf("姓名:%s\n", pTemp->Name);
		printf("学号:%d\n", pTemp->iNumber);
		printf("\n");
		pTemp = pTemp->pNext;//零时结点指向下一个结点首地址
		ilindex++;
	}
}
int main4()
{
	struct student* pHead;
	pHead = Create4();
	Print(pHead);
	return 0;
}