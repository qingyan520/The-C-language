#include<stdio.h>
int main()
{
	int arr[1000] = {0};
	for (int i = 0; i < 1000; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	for (int i = 0; i < 1000; i++)
	{
		if (arr[i] == 500)
		{
			printf("第%d个数为500\n", i + 1);
		}
	}
	return 0;
}