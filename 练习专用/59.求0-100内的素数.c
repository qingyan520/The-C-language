#include<stdio.h>
int main59()
{
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i <=n; i++)
	{
		int count = 1;
		for (int j =2 ; j < i-1; j++)//切忌是小于其自身的数减一，不然就凉凉了
		{
			if (i % j == 0) {
				count = 0;
				break;
			}
		}
		if (count)
			printf("%d ", i);
	}
	return 0;
}