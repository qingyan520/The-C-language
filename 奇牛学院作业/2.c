#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main2()
{
	int score[10];
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &score[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		sum += *(score + i);
	}
	printf("��10��ͬѧ�����ܷ�Ϊsum=%d\n", sum);
	printf("��10��ͬѧ����ƽ����avreage=%d", sum / 10);
	return 0;
}