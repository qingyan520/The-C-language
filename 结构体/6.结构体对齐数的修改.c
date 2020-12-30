#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#pragma pack(1)
struct s
{
	char c;
	int i;
	double d;
};
#pragma pack()
int main6()
{
	printf("%d", sizeof(struct s));
	return 0;
}