//数组的缺点：数组的删除与添加需要移动数组元素，浪费时间与空间//
//与之相比链表则更加有优势：
//链表由一系列节点组成，其中每个节点包括两个域，一个是数据域，用来存储数据，另一个是指针域，用来存储下一个节点的地址，链表在内存中是非连续的
//链表在指定位置插入与删除不需要移动元素，只需要修改指针即可
//查找效率低一些相对于数组
//链表相对于数组来讲，多了指针域空间开销
//拿到链表第一个节点就相当于拿到整个链表
//链表的分类：静态链表，动态链表
//            单向链表，双向链表，循环链表，单向循环链表，双向循环链表
//链表和数组的区别
//数组：一次分配一块连续的存储空间
//优点：随机访问元素效率高
//缺点：(1)需要分配一块连续的存储区域(很大区域，有可能分配失败)
//      (2)删除和插入某个元素效率低
//链表：无需一次性分配一块连续的内存区域，只需分配n快节点存储区域，通过指针建立关系
//优点：(1)不需要一块连续的存储区域
//      (2)删除和插入某个元素效率高
//缺点：随机访问元素效率低
//


#include<stdio.h>
//链表结点定义
struct LinkNode
{
	int data;//定义链表数据
	struct LinkNode*next;//定义链表节点
};
void test()
{
	struct LinkNode node1 = { 10,NULL };
	struct LinkNode node2 = { 20,NULL };
	struct LinkNode node3 = { 30,NULL };
	struct LinkNode node4 = { 40,NULL };
	struct LinkNode node5 = { 50,NULL };
	struct LinkNode node6 = { 60,NULL };
	node1.next = &node2;
	node2.next = &node3;
	node3.next = &node4;
	node4.next = &node5;
	node5.next = &node6;
	//如何遍历链表：定义一个辅助指针
	struct LinkNode* pCurrent = &node1;
	while (pCurrent != NULL)
	{
		printf("%d ", pCurrent->data);
		//指针移动到下一个元素的首地址
		pCurrent = pCurrent->next;
	}
	
}
int main1()
{
	test();
	return 0;
}