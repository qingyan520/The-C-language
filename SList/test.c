//链表是针对顺序表的缺点设计的
//链表#的上一个节点存储着的是下一个节点的地址
#include"SList.h"
//检测单链表的打印与尾插尾删
void test01()
{
	SListNode* plist = NULL;
	SListPushBack(&plist, 0);
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 7);
	SListPushBack(&plist, 4);
	SListPushBack(&plist, 5);
	SListPushBack(&plist, 6);
	//SListPrint(plist);
	bool ret = adjust(&plist);
	if (ret)
	{
		printf("是等差单链表\n");
	}
	else
	{
		printf("不是等差单链表\n");
	}
}
int main()
{
	test01();
	return 0;
}