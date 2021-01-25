#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main1()
{
	char name[] = "zhangsan";
	int age = 16;
	float hight = 1.80;
	char* p1 = name;
	int* p2 = &age;
	float* p3 = &hight;
	printf("%c\n", *p1);

	printf("%d\n", *p2);
	printf("%f\n", *p3);

	return 0;
}