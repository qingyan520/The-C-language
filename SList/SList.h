#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
typedef int SListDataType;
typedef struct SListNode
{

	SListDataType data;
	struct SListNode* next;
}SListNode;
void SListPushBack(SListNode** pphead, SListDataType x);//β����������
void SListPopBack(SListNode** pphead);//β��ɾ������
void SListPrint(SListNode* phead);//��ӡ����
void SListPushFront(SListNode** phead, SListDataType x);//ͷ����������
void SListPopFront(SListNode** phead);//ͷ��ɾ������

bool adjust(SListNode** head);