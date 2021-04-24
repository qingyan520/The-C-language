#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
#include<string.h>
typedef int HPDataType;
typedef struct Heap
{
	HPDataType* a;
	int capacity;
	int size;
}HP;


//��ʼ����
void HeapInit(HP* hp, HPDataType* arr, int n);

//���ٶ�
void HeapDestory(HP* hp);

//��������
void HeapPush(HP* hp, HPDataType x);

//ɾ���Ѷ�Ԫ��
void HeapPop(HP* hp);

//�õ��Ѷ�Ԫ��
HPDataType HeapTop(HP* hp);

//����ѵĴ�С
int HeapSize(HP*hp);

//�ж϶��Ƿ�Ϊ��
bool HeapEmpty(HP* hp);


//��ӡ����
void Print(HP* hp);