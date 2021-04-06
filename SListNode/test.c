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
	//test01();//���Ե�����Ĵ�ӡ��β��
	//test02();//���Ե�����β��
	//test03();//������ͷ�����
	//test04();//��������Ҳ���
	//test05();//���ض�λ�ò���
	test06();//ɾ���ض�λ��֮���λ��
	return 0;
}