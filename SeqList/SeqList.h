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

//ͷ��ͷɾ��β��βɾ
//β��
void SeqListPushBack(SeqList* pq, SeqDateType);//��д
//ͷ��
void SeqListPushFront(SeqList* pq, SeqDateType);//��д
//βɾ
void SeqListPopBack(SeqList* pq);//��д
//ͷɾ
void SeqListPopFront(SeqList* pq);//��д
//��ӡ
void SeqListPrint(SeqList* pq);//��д
//��������Ƿ���
void SeqListCheckCapacity(SeqList* pq);//��д
//���г�ʼ��
void SeqListInit(SeqList* pq);//��д
//�������Ա�
void SeqListDestory(SeqList* pq);//��д
// ˳������
void SeqListFind(SeqList* ps, SeqDateType x);
// ˳�����posλ�ò���x
void SeqListInsert(SeqList* ps, size_t pos, SeqDateType x);
// ˳���ɾ��posλ�õ�ֵ
//void SeqListErase(SeqList* ps, size_t pos);

