//д���뽫���������Ӵ�С���
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf_s("%d%d%d", &a, &b, &c);
//	if (a <b)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		int temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		int temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//дһ�������ӡ1 - 100֮������3�ı���������
//#include<stdio.h>
//int main()
//{
//	for (int i = 1; i < 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//���������������������������Լ��
//����һ���Գ���
//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	scanf_s("%d%d", &a, &b);
//	int max_yueshu = a > b ? b : a;
//	while (max_yueshu)
//	{
//		if (a % max_yueshu == 0 && b % max_yueshu == 0)
//		{
//			break;
//		}
//		max_yueshu--;
//	}
//	printf("%d", max_yueshu);
//	return 0;
//}
//��������շת����������Լ������С������
//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	scanf_s("%d%d", &a, &b);
//	int d = a * b;
//	int c = 0;
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);//���Լ��
//	printf("%d\n", d / b);//��С������=a*b/���Լ��
//
//	return 0;
//
//}
//��ӡ1000�굽2000��֮�������
///*#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for ( i = 1000; i <=2000; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0*/;
//}
//��ӡ100~200֮������� ��ӡ������N�־���
//��򵥵ķ���
//#include<stdio.h>
//int main()
//{
//	int count = 0;
//	for (int i = 100; i <=200; i++)
//	{
//		int flag = 1;
//		for (int j = 2; j <i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}
//�Ż���
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int count = 0;
//	for (int i = 100; i <=200; i++)
//	{
//		int flag = 1;
//		for (int j = 2; j <=sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}
//���հ汾
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int count = 0;
//	for (int i = 101; i <=200; i+=2)
//	{
//		int flag = 1;
//		for (int j = 2; j <=sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}
//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//#include<stdio.h>
//int main()
//{
//	int count = 0;
//	for (int i = 1; i < 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ����ӡ�����
//#include<stdio.h>
//int main()
//{
//	float sum = 0;
//	int flag = 1;
//	for (int i = 1; i <=100; i++)
//	{
//		sum += flag * (1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf", sum);
//	return 0;
//}
//��10�����������ֵ
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("%d", max);
//	return 0;
//}
//����Ļ�����9 * 9�˷��ھ���
#include<stdio.h>
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	for (int i =1; i <= n; i++)
	{
		for (int j =1; j <=i; j++)
		{
			printf("%d*%d=%-5d\t", j, i, i * j);
		}
		printf("\n");
	}
	return 0;
}
//��д������һ���������������в��Ҿ����ĳ����
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = len - 1;
//	int mid = 0;
//	while (left<=right)
//	{
//		mid = left + (right - left) / 2;
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] <k)
//			left = mid + 1;
//		else
//		{
//			printf("%d", mid);
//			break;
//		}
//	}
//	if (right > left)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}
//��д����������������ֵ
//#include<stdio.h>
//void swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 30;
//	printf("����ǰa=%d b=%d\n", a, b);
//	swap(&a, &b);
//	printf("������a=%d b=%d\n", a, b);
//	return 0;
//}
//��д�����ж��ǲ�������
//#include<stdio.h>
//#include<math.h>
//is_prime(int i)
//{
//	for (int j = 2; j <=sqrt(i); j++)
//	{
//		if (i % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	for (int i = 100; i <=200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//��дһ�������ж��Ƿ�Ϊ����
//#include<stdio.h>
//int is_run_year(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int year = 0;
//	scanf_s("%d", &year);
//	if (is_run_year(year))
//	{
//		printf("%d��������", year);
//	}
//	else
//	{
//		printf("%d��������", year);
//	}
//	return 0;
//}
//дһ��������ʵ�ֶ��ֲ���
//#include<stdio.h>
//int search(int arr[], int k,int len)
//{
//	int left = 0;
//	int right = len - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] == k)
//			return mid;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//			left = mid + 1;
//
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int ret = search(arr, k,len);
//	printf("%d", ret);
//	return 0;
//}