#pragma once
#include<stdio.h>
#include<stdlib.h>
typedef int ListDataType;
typedef struct ListNode
{
	ListDataType x;
	struct ListNode* next;
	struct ListNode* prev;
}ListNode;


//1.动态申请结点
struct ListNode* BuyListNode(ListDataType x);
//2.建立头结点
ListNode* InitListNode();
//3.尾部插入数据
 void Push_Back(ListNode* phead, ListDataType x);
//4.头部插入数据
 void Push_Front(ListNode* phead, ListDataType x);
//5.尾部删除数据
 void Pop_Back(ListNode* phead);
//6.头部删除数据
 void Pop_Front(ListNode* phead);
//7.查找指定元素
 ListNode*FindListNode(ListNode*phead,ListDataType x);

 //8.在pos结点之前插入数据
 void InsertListNode(ListNode* pos, ListDataType x);
 //此节点可以进行服用：
 //如在head之前的结点插入数据相当于尾插
 //在head->next元素之前插入元素相当于头插

 //9.删除在pos元素之前的元素
 void PopListNode(ListNode* pos);
 //删除结点也可以进行服用：
 // 如在head结点之前插入删除数据相当于尾删
 // 在head->next->next相当于头删
//8.打印元素
 void Print(ListNode* phead);
//9.统计结点个数
