//ÇóËØÊı
#include<stdio.h>
#include<math.h>
int main()
{
	for (int i = 3; i <=100; i+=2)
	{
		int flag = 0;
		for (int j = 2; j <=sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag++;
			;
			}
		}
		if (flag==0)
		{
			printf("%d  ", i);
		}
	}
	return 0;
}