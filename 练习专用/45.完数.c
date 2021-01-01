#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main45()
{
	int m, n;
	scanf_s("%d%d", &m, &n);
	for (;m <=n;m++)
	{
		int sum = 0;
		for (int i =1; i < m; i++)
		{
			if (m %i== 0)
			{
				sum += i;
			}
		}
		if (sum==m)
		{
			printf("%-2dÊÇÍêÊý\n", m);
		}
	}
	return 0;
}