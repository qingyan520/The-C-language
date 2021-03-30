//实现顺序表的增删查改，动态增长
#include"SeqList.h"
void test01()
{
	SeqList q;
	SeqListInit(&q);
	SeqListPushBack(&q, 1);
	SeqListPushBack(&q, 2);
	SeqListPushBack(&q, 3);
	SeqListPushBack(&q, 4);
	SeqListPushBack(&q, 5);
	SeqListPushBack(&q, 6);
	SeqListPushBack(&q, 7);
	SeqListPrint(&q);
	SeqListPopBack(&q);
	SeqListPrint(&q);
	SeqListDestory(&q);
	SeqListPrint(&q);
	SeqListPushFront(&q, 8);
	SeqListPushFront(&q, 9);
	SeqListPushFront(&q, 10);
	SeqListPushFront(&q, 11);
	SeqListPushFront(&q, 12);
	SeqListPushFront(&q, 13);
	SeqListPushFront(&q, 14);
	SeqListPushFront(&q, 15);
	SeqListPushFront(&q, 16);
	SeqListPrint(&q);
	SeqListPopFront(&q);
	SeqListPrint(&q);
}
int main()
{
	test01();
	system("pause");
	return 0;
}