#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main1()
{
	int a, b;
	printf("�����볤���εĳ���");
	scanf_s("%d", &a);
	printf("�����볤���εĿ�");
	scanf_s("%d", &b);
	int s = a * b;
	printf("�����ε����Ϊ��%d",s);
	return 0;
}