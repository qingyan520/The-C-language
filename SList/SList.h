#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int SListDataType;
typedef struct SListNode
{

	SListDataType data;
	struct SListNode* next;
}SListNode;
void SListPushBack(SListNode** pphead, SListDataType x);//尾部插入数据
void SListPopBack(SListNode** pphead);//尾部删除数据
void SListPrint(SListNode* phead);//打印数据
void SListPushFront(SListNode** phead, SListDataType x);//头部插入数据
void SListPopFront(SListNode** phead);//头部删除数据

