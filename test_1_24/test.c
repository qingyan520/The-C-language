//1.写一个冒泡排序(函数版)
//#include<stdio.h>
//void bulle_sort(int arr[], int len)
//{
//	for (int i = 0; i < len-1; i++)
//	{
//		int flag = 1;//定义一个标志让程序更加高效
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
//2.数组相关知识
//数组是一块连续的内存空间
//数组名是数组首元素地址
//but有两个例外：
//1.sizeof(数组名)—数组名表示的是整个数组，不是数组首元素的地址，
//sizeof(数组名)计算的是整个数组的大小
//2.&数组名—数组名表示整个数组，这里取出的是整个数组的地址
//除此之外，所有数组名都是数组首元素的地址
//&arr[0]表示数组首元素的地址
//&arr代表整个数组的地址
//arr代表数组首元素的地址
//实现一个对整形数组的冒泡排序
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
//3.创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。
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

//4.将数组A中的内容和数组B中的内容进行交换。（数组一样大）
#include<stdio.h>
int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 10,9,8,7,6,5,4,3,2,1 };
	printf("交换前：\n");
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
	printf("交换后：\n");
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