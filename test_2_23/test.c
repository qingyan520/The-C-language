#include<stdio.h>
#include<stdlib.h>
typedef struct stu
{
	int a;
}SLDataTYpe;
struct SeqList
{
	SLDataTYpe* array;
	size_t size;
	size_t capicity;
};
