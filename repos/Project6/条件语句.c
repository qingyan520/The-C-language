#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int score;
	scanf("%d", &score);
	if (score > 700)
	{
		printf("��Ҫ���廪");
		if (score > 720)
		{
			printf("�����ϵ");
		}
		else if (score > 710)
		{
			printf("��ѧϵ");
		}
		else
		{
			printf("����ϵ");
		}
	}
	else if (score > 680)
	{
		printf("������ѧ");
	}
	else
	{
		printf("������ѧ");
	}
	return 0;
}