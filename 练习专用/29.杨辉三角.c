#include<stdio.h>
int main29()
{
	int arr[11][11];
	for (int i = 1; i <11; i++)
	{
		//����Խ���������
		arr[i][1] = 1;
		arr[i][i] = 1;
	}
	for (int i = 3; i < 11; i++)
	{
		for (int j = 2; j <= i-1; j++)
		{
			//�ӵ����еڶ��п�ʼ���и�ֵ
			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
		}
	} 
	for(int i=1;i<11;i++)
	{
		for (int j = 1;j<=i; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}