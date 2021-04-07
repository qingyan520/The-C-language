#include"SList.h"
void test01()
{
	SListNode* pList = NULL;
	SListPushBack(&pList, 1);
	SListPushBack(&pList, 2);
	SListPushBack(&pList, 3);
	SListPushBack(&pList, 4);
	SListPushBack(&pList, 5);
	SListPrint(pList);
}
void test02()
{
	SListNode* pList = NULL;
	SListPushBack(&pList, 1);
	SListPushBack(&pList, 2);
	SListPushBack(&pList, 3);
	SListPushBack(&pList, 4);
	SListPushBack(&pList, 5);
	SListPopBack(&pList);
	SListPopBack(&pList);
	SListPopBack(&pList);
	SListPopBack(&pList);
	SListPopBack(&pList);

	SListPrint(pList);
	SListPushBack(&pList, 1);
	SListPushBack(&pList, 2);
	SListPushBack(&pList, 3);
	SListPushBack(&pList, 4);
	SListPushBack(&pList, 5);
	SListPrint(pList);
}
void test03()
{
	SListNode* pList = NULL;
	SListPushFront(&pList, 1);
	SListPushFront(&pList, 2);
	SListPushFront(&pList, 3);
	SListPushFront(&pList, 4);
	SListPushFront(&pList, 5);
	SListPrint(pList);
}
void test04()
{
	SListNode* pList = NULL;
	SListPushBack(&pList, 1);
	SListPushBack(&pList, 2);
	SListPushBack(&pList, 3);
	SListPushBack(&pList, 4);
	SListPushBack(&pList, 5);
	SListNode* dst = SListFind(pList, 6);
	SListPrint(dst);
	SListPrint(pList);
	SListNode* p = NULL;
	SListNode* d = SListFind(p, 1);
	SListPrint(d);
}
void test05()
{
	SListNode* pList = NULL;
	SListPushBack(&pList, 1);
	//SListPushBack(&pList, 2);
	SListPushBack(&pList, 3);
	SListPushBack(&pList, 4);
	SListPushBack(&pList, 5);
	SListPrint(pList);
	SListInsertAfter(SListFind(pList, 1), 2);
	SListPrint(pList);
}
void test06()
{
	SListNode* pList = NULL;
	SListPushBack(&pList, 1);
	SListPushBack(&pList, 2);
	SListPushBack(&pList, 3);
	SListPushBack(&pList, 4);
	SListPushBack(&pList, 5);
	SListEraseAfter(SListFind(pList, 6));
	SListPrint(pList);
}
int main()
{
	test01();//测试单链表的打印和尾插
	//test02();//测试单链表尾插
	//test03();//单链表头插测试
	//test04();//单链表查找测试
	//test05();//在特定位置插入
	//test06();//删除特定位置之后的位置
	return 0;
}