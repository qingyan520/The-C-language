#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main43()
{
	int x, y;
	printf("����������x,y:");
	scanf_s("%d%d", &x, &y);
	//���ϴ�������x
	if (x < y)
	{
		int temp = x;
		x = y;
		y = temp;
	}
	//����С����y��ֵ��i��Ȼ��i��ʼ�ݼ�����x,y�ֱ����i�������һ�η��������ļ�Ϊ���Լ����Ȼ����������ѭ��
	for (int i =y; i>0; i--)
	{
		if (x % i == 0 && y % i == 0)
		{
			printf("%d,%d�����Լ��Ϊ��%d", x, y, i);
			break;
		}
	}
	return 0;
}