#include<stdio.h>
int main55()
{
	//�ö�ά�����к��н���λ��
	int arr[2][3] = { {1,2,3},{4,5,6} };//����һ����ά����
	int b[3][2];
	printf("���������Ϊ��\n");//��ӡ��������
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%6d", arr[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j= 0; j<3 ; j++)
		{
			b[j][i] = arr[i][j];//�䱾���ǽ����к��е�λ��
		}
	}
	printf("���������Ϊ��\n");//��ӡ������
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%6d", b[i][j]);
		}
		printf("\n");
	}
	return 0;

}