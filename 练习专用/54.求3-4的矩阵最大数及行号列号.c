#include<stdio.h>
int main54()
{
	//����3*4�ľ����������ֵ�������������±�����±�
	int arr[3][4] = { {1,2,3,4},{90,8,7,6},{-10,10,-5,2} };//����һ��3*4�ľ���
	int row, column, max;//�����У�����ţ������ֵ���
	for (int i = 0; i < 3; i++)//��ӡ����
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
	max = arr[0][0];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[i][i] > max)//ȡ�����ֵ�����±�
			{
				max = arr[i][j];
				row = i;
				column = j;
			}
		}
	}
	printf("max=%d\n", max);
	printf("����Ϊ��%d\n", row+1);//�����±��ܱ��к�����һ
	printf("����Ϊ��%d\n", column + 1);
	return 0;
}