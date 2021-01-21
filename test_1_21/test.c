//写代码将三个数按从大到小输出
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
//写一个代码打印1 - 100之间所有3的倍数的数字
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
//给定两个数，求这两个数的最大公约数
//方法一：试除法
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
//方法二：辗转相除法求最大公约数和最小公倍数
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
//	printf("%d\n", b);//最大公约数
//	printf("%d\n", d / b);//最小公倍数=a*b/最大公约数
//
//	return 0;
//
//}
//打印1000年到2000年之间的闰年
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
//打印100~200之间的素数 打印素数的N种境界
//最简单的方法
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
//优化后：
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
//最终版本
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
//编写程序数一下 1到 100 的所有整数中出现多少个数字9
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
//计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值，打印出结果
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
//求10个整数中最大值
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
//在屏幕上输出9 * 9乘法口诀表
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
//编写代码在一个整形有序数组中查找具体的某个数
//要求：找到了就打印数字所在的下标，找不到则输出：找不到。
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
//		printf("找不到\n");
//	}
//	return 0;
//}
//编写函数交换两个数的值
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
//	printf("交换前a=%d b=%d\n", a, b);
//	swap(&a, &b);
//	printf("交换后a=%d b=%d\n", a, b);
//	return 0;
//}
//编写函数判断是不是素数
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
//编写一个函数判断是否为闰年
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
//		printf("%d年是闰年", year);
//	}
//	else
//	{
//		printf("%d年是闰年", year);
//	}
//	return 0;
//}
//写一个函数，实现二分查找
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