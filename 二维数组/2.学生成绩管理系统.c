//����һ�����飬�洢����ѧ�����ųɼ�
//���ÿ��ѧ��ƽ���ɼ����ܳɼ�
//���ÿ��ѧ���ܳɼ���ƽ���ɼ�
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[5][3];
	//��ȡѧ���ɼ�
	for (int i=0;i<5;i++)
	{
		for (int j=0;j<3;j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	//��ʾѧ���ɼ�
	for (int i = 0; i < 5; i++)
    {
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	//���ÿ��ͬѧ�ܳɼ���ƽ���ɼ�
	for (int i = 0; i < 5; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
		    sum += arr[i][j];
		}
		printf("��%d��ѧ���ܳɼ�:%d/tƽ���ɼ�Ϊ:%d\n",i+1,sum,sum/3);
	}
	//���ÿ�ſ�Ŀ�ܷ֣�ƽ����
	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 5; j++)
		{
			sum += arr[j][i];
		}
		printf("��%d���γ��ܳɼ�:%d/tƽ���ɼ�Ϊ:%d\n",i+1, sum, sum / 5);
	}


	
	return 0;
}