#include<stdio.h>
int main0000()
{
	int i = 100;
	int a = i / 100;
	int b = i % 10;
	int c = (i % 100) / 10;
	while (i <= 999)
	{
		if (a * a * a + b * b * b + c * c * c == i)
		{
			printf("ˮ�ɻ�����%d\n", i);
		}
		i++;
	}
	return 0;

}