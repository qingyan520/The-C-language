#include<stdio.h>
int main01()
{
	int i = 0;
	for (; ; )
	{
		if (i >= 10)
		{
			break;
			//��ѭ�������break��ʾ����ѭ����
		}
		printf("%d\n", i);
		i++;
	}
	return 0;
}