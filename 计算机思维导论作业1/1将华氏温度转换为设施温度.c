#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main1()
{
	int F;
	printf("�����뻪���¶ȣ�");
	scanf_s("%d", &F);
	int C = 5 * (F - 32) / 9;
	printf("��Ӧ�������¶�Ϊ��%d\n", C);
	return 0;
}