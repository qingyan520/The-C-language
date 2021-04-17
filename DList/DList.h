#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef struct ListNode
{
	int val;
	struct ListNode* prev;
	struct ListNOde* next;
}ListNode;

ListNode* BuyNodeList(int x);//开辟新节点
ListNode*InitListNode();//开辟头结点
void Push_back(ListNode* phead, int x);//尾部插入数据
void Print(ListNode* phead);//打印数据
void Push_Front(ListNode* phead,int x);//头部插入数据
void Pop_Front(ListNode* phead);//头部删除数据
void Pop_Back(ListNode* phead);//尾部删除数据
ListNode* FindListNode(ListNode*phead,int x);//找到指定数据位置
void Insert(ListNode* pos,int x );//在指定位置pos之前插入元素x
void Erase(ListNode* pos);//删除pos位置的元素