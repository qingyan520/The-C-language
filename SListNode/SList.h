#pragma once
#include<stdio.h>
#include<stdlib.h>
typedef int SListDataType;
typedef struct SListNode
{
	SListDataType data;
	struct SListNode* next;
}SListNode;
void SListPrint(SListNode* phead);//�������ӡ
void SListPushBack(SListNode** pphead, SListDataType x);//������β��
void SListPopBack(SListNode** pphead);//������βɾ
void SListPushFront(SListNode** pphead, SListDataType x);//������ͷ��

SListNode* SListFind(SListNode* plist, SListDataType x);// ���������

void SListInsertAfter(SListNode* pos, SListDataType x);
// ��������posλ��֮�����x
// ����˼��Ϊʲô����posλ��֮ǰ���룿

void SListEraseAfter(SListNode* pos);
// ������ɾ��posλ��֮���ֵ
// ����˼��Ϊʲô��ɾ��posλ�ã�

void SListDestory(SListNode* plist);// �����������
