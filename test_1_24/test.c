//1.дһ��ð������(������)
//#include<stdio.h>
//void bulle_sort(int arr[], int len)
//{
//	for (int i = 0; i < len-1; i++)
//	{
//		int flag = 1;//����һ����־�ó�����Ӹ�Ч
//		for (int j = 0; j < len-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 9, 4, 5,1 ,3,7,8,10,2,6 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	bulle_sort(arr, len);
//	int* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", * (p + i));
//	}
//	return 0;
//}
//2.�������֪ʶ
//������һ���������ڴ�ռ�
//��������������Ԫ�ص�ַ
//but���������⣺
//1.sizeof(������)����������ʾ�����������飬����������Ԫ�صĵ�ַ��
//sizeof(������)���������������Ĵ�С
//2.&����������������ʾ�������飬����ȡ��������������ĵ�ַ
//����֮�⣬��������������������Ԫ�صĵ�ַ
//&arr[0]��ʾ������Ԫ�صĵ�ַ
//&arr������������ĵ�ַ
//arr����������Ԫ�صĵ�ַ
//ʵ��һ�������������ð������
//#include<stdio.h>
//void bubble_sort(int arr[], int len)
//{
//	for (int i = 0; i < len-1; i++)
//	{
//		int flag = 1;
//		for (int j = 0; j < len-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (flag)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 9,5,1,7,3,2,4,6,8,10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, len);
//	int* p = arr;
//	for (int i = 0;  i < len;  i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
//3.����һ���������飬��ɶ�����Ĳ���
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
//#include<stdio.h>
//void init(int arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	init(arr, len);
//	print(arr, len);
//	return 0;
//}
//#include<stdio.h>
//void reverse(int arr[], int len)
//{
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr, len);
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//4.������A�е����ݺ�����B�е����ݽ��н�����������һ����
#include<stdio.h>
int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 10,9,8,7,6,5,4,3,2,1 };
	printf("����ǰ��\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
	for (int  i = 0; i < 10; i++)
	{
		int temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
	printf("������\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}