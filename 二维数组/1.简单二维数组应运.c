#include<stdio.h>
int main1()
{
	int arr[2][3] = { {1,2,3},{4,5,6} };
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d", arr[i] [j]);
		}
		printf("  \n");		
	}
	//printf("��ά�����С:%d\n", sizeof(arr));
	//printf("��ά���鵥��Ԫ�ش�С:%d\n", sizeof(arr[0][0]));
	//printf("��ά����Ԫ�ظ���:%d\n", sizeof(arr) / sizeof(arr[0][0]));
	//printf("��ά��������:%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));
	//printf("��ά��������:%d\n", sizeof(arr) / sizeof(arr[0]));
	printf("%p\n", arr[0][0]);
	printf("%p\n", arr[0][1]);
	return 0;
}