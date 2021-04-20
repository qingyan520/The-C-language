//链表的建立是一个动态过程，动态建立结点时要为其分配内存，所以在学习建立链表之前要复习一下关于动态分配的函数
//malloc函数：void*malloc(unsigned int);
//            该函数的作用是在内存中动态的分配一块size大小的内存空间，malloc函数会返回一个指针该指针指向分配的内存空间，如果发生错误，则返回NULL
//calloc函数：void*calloc(unsigned n,unsigned size);
//            该函数的作用是在内存中动态的分配n个长度为size大小的连续内存空间数组，并对其进行初始化，该函数也会返回一个指针，该指针指向动态分配的连续内存空间地址
//free函数：void free(void*ptr);
//          释放由malloc或calloc动态开辟指向的内存空间
//下面我们就学习如何建立链表吧：
#include<stdlib.h>
#include<stdio.h>
//首先创建结点结构，表示每一位学生
//建立链表
struct student
{
	char cName[20];
	int iNumber;
	struct student* pNext;
};
//然后定义一个Create函数，用来创建链表，该函数将会返回连表的头指针
int iCount;//定义一个全局变量表示链表长度
struct student* Create3()
{
	//Create函数用来创建链表，在Create函数外部定义一个变量iCount，该变量用来记录链表中结点个数
	//在Create函数中，首先要定义指针变量,pHead用来表示头指针，pEnd用来指向原来的尾结点，pEnd用来指向原来的尾结点，pNew指向新创建的结点
	struct student* pHead = NULL;//初始化链表头指针为空
	struct student* pEnd, * pNew;
	iCount = 0;//初始化链表长度为0；
	pEnd = pNew = (struct student*)malloc(sizeof(struct student));
	printf("please first enter Name,then Number\n");
	scanf_s("%s", &pNew->cName,20);
	scanf_s("%d", &pNew->iNumber);
	while (pNew->iNumber != 0)
	{
		iCount++;
		if (iCount == 1)
		{
			pNew->pNext = pHead;//使得指向为空
			pEnd = pNew;//跟踪新加入的结点
			pHead = pNew;//头指针指向首结点
		}
		else
		{
			pNew->pNext = NULL;//新结点的指针为空
			pEnd->pNext = pNew;//原来的结点指向新结点
			pEnd=pNew;//pEnd指向新结点
		}
		pNew = (struct student*)malloc(sizeof(struct student));//再次分配结点内存空间
		scanf_s("%s", &pNew->cName,20);
		scanf_s("%d", &pNew->iNumber);
	}
	free(pNew);//释放没有用的内存空间
	return pHead;
}
//输出链表
void Print3(struct student* pHead)
{
	struct student* pTemp;//循环所用的临时指针
	int ilndex = 1;//表示链表中结点的序号
	printf("---这个链表中有%d个成员：---\n", iCount);//消息提示
	printf("\n");//换行
	pTemp = pHead;//指针得到首结点的地址
	while (pTemp != NULL)
	{
		printf("成员%d是：\n", ilndex);
		printf("姓名：%s\n", pTemp->cName);//输出姓名
		printf("学号：%d\n", pTemp->iNumber);//输出学号
		printf("\n");//换行
		pTemp = pTemp->pNext;//移动临时指针到下一个结点
		ilndex++;//进行自加运算
	}

}
int main3()
{
	struct student* pHead;//定义头结点
	pHead = Create();//创建结点
	Print(pHead);//输出链表
	return 0;
}