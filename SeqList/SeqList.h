#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
typedef int SeqDateType;
typedef struct SeqList
{
	SeqDateType* a;
	int size;
	int capacity;
}SeqList;

//头插头删，尾插尾删
//尾插
void SeqListPushBack(SeqList* pq, SeqDateType);//已写
//头插
void SeqListPushFront(SeqList* pq, SeqDateType);//已写
//尾删
void SeqListPopBack(SeqList* pq);//已写
//头删
void SeqListPopFront(SeqList* pq);//已写
//打印
void SeqListPrint(SeqList* pq);//已写
//检查容量是否满
void SeqListCheckCapacity(SeqList* pq);//已写
//进行初始化
void SeqListInit(SeqList* pq);//已写
//销毁线性表
void SeqListDestory(SeqList* pq);//已写

