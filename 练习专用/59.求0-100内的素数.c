#include<stdio.h>
int main59()
{
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i <=n; i++)
	{
		int count = 1;
		for (int j =2 ; j < i-1; j++)//�м���С�������������һ����Ȼ��������
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