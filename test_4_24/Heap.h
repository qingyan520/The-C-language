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


//初始化堆
void HeapInit(HP* hp, HPDataType* arr, int n);

//销毁堆
void HeapDestory(HP* hp);

//插入数据
void HeapPush(HP* hp, HPDataType x);

//删除堆顶元素
void HeapPop(HP* hp);

//拿到堆顶元素
HPDataType HeapTop(HP* hp);

//计算堆的大小
int HeapSize(HP*hp);

//判断堆是否为空
bool HeapEmpty(HP* hp);


//打印函数
void Print(HP* hp);