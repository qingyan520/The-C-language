#pragma once
#include<stdio.h>
#include<stdlib.h>
typedef int SListDataType;
typedef struct SListNode
{
	SListDataType data;
	struct SListNode* next;
}SListNode;
void SListPrint(SListNode* phead);//单链表打印
void SListPushBack(SListNode** pphead, SListDataType x);//单链表尾插
void SListPopBack(SListNode** pphead);//单链表尾删
void SListPushFront(SListNode** pphead, SListDataType x);//单链表头插

SListNode* SListFind(SListNode* plist, SListDataType x);// 单链表查找

void SListInsertAfter(SListNode* pos, SListDataType x);
// 单链表在pos位置之后插入x
// 分析思考为什么不在pos位置之前插入？

void SListEraseAfter(SListNode* pos);
// 单链表删除pos位置之后的值
// 分析思考为什么不删除pos位置？

void SListDestory(SListNode* plist);// 单链表的销毁
