//#include<stdio.h>
//int main()
//{
//	int arr[20] = { 0 };
//	for (int i = 0; i < 20; i++)
//	{
//		int n = i + 1;
//		if (n == 1)
//		{
//			arr[i] = 1;
//		}
//		else if (n == 2)
//		{
//			arr[i] = 2 * n - 1;
//		}
//		else
//		{
//			arr[i] = arr[i - 1] + 2 * n;
//		}
//	}
//	for (int i = 0; i < 20; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;;
//}


//#include<stdio.h>
//void Search(int* arr, int n)
//{
//	int j = 0;
//	for (int i = 1; i <= 500; i++)
//	{
//		if ((i % 7 == 0 && i % 11 != 0) || (i % 11 == 0 && i % 7 != 0))
//		{
//			arr[j] = i;
//			j++;
//		}
//	}
//}
//int main()
//{
//	int count = 0;
//	int arr[104] = { 0 };
//	int n = sizeof(arr) / sizeof(int);
//	Search(arr, n);
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


#include<stdio.h>
#include<time.h>
void Print(int arr[][10])
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%d ", arr[i][j]);
			if (j == 9)//ÿ10��Ԫ�ؽ��л���
			{
				printf("\n");
			}
		}
	}
}
int main()
{
	int arr[10][10] = {0};//������ά���鲢�����ʼ��Ϊ0
	srand((unsigned int)time(NULL));//�����������ӣ������������Ϊ��ά���鸳ֵ������ͷ�ļ�time.h�����������ʱ��仯
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			arr[i][j] = rand() % 10;//���������λ��0~9��Ϊ��ά������и�ֵ����
		}
	}
	Print(arr);//��װ��ӡ��������ӡ���10*10�Ķ�ά����
	printf("\n");
	int max = arr[0][0];//����һ�����ֵ��Ȼ��ѭ�����������ά���飬�������ֵ
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}
	}
	printf("����10*10�Ķ�ά�������ֵΪ��%d\n", max);

}