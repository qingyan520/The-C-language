#include<stdio.h>
int main53()
{
	int count = 0;
	int flag = 0;
	//����һ��flag���м�����ÿ��ѭ������ʼ��flag��ֵΪ0
	for (int i = 100; i < 1000; i++)
	{
		for (int n = 2; n < i - 1; n++)
		{
			flag = 0;
			if (i % n == 0)
			{
				flag = 1;
				break;
			}

		}
		if (flag == 0)
		{
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}