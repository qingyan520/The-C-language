//#include<stdio.h>
//#include<string.h>
//void Swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//void AdjustDown(int* arr, int n, int parent)
//{
//	int child = parent * 2 + 1;
//	while (child < n)
//	{
//		if (child + 1 < n && arr[child + 1] > arr[child])
//		{
//			child++;
//		}
//		if (arr[child] > arr[parent])
//		{
//			Swap(&arr[child], &arr[parent]);
//			parent = child;
//			child = parent * 2 + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//}
//void HeapSort(int* arr, int n)
//{
//	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
//	{
//		AdjustDown(arr, n, i);
//	}
//	int end = n - 1;
//	while (end > 0)
//	{
//		Swap(&arr[0], &arr[end]);
//		AdjustDown(arr, end, 0);
//		end--;
//	}
//}
//int main()
//{
//	int arr[] = { 10,2,5,4,7,8,10 };
//	//AdjustDown(arr, sizeof(arr) / sizeof(arr[0]), (sizeof(arr)/sizeof(arr[0])-1-1) / 2);
//	//printf("%d", arr[0]);
//	int n = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = 0; j < n - 1 - i; j++)
//		{
//			if (arr[j + 1] > arr[j])
//			{
//				Swap(&arr[j + 1], &arr[j]);
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//}
//
//#include<stdio.h>
//int main()
//{
//	char str[9] = { 0 };
//	gets(str);
//	int arr[8] = { 0 };
//	//将学号的每一位保存到数组中
//	for (int i = 0; i < 8; i++)
//	{
//		arr[i] = str[i] - '0';
//	}
//	//先将顺序和保存下来
//	int flag1 = 1;
//	int sum1 = 0;
//	for (int i = 7; i >= 0; i--)
//	{
//		sum1 += flag1 * arr[i];
//		flag1 *= 10;
//	}
//	//将逆序结果保存下来
//	int flag2 = 1;
//	int sum2 = 0;
//	for (int i = 0; i < 8; i++)
//	{
//		sum2 += flag2 * arr[i];
//		flag2 *= 10;
//	}
//	printf("sum1=%d\n", sum1);
//	printf("sum2=%d\n", sum2);
//	printf("%d", sum1 + sum2);
//	return 0;
//}



#include<stdio.h>
#include<assert.h>
#include<string.h>
//交换位置
void Swap(char* a, char* b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}
//得到字符串长度
int GetData(const char* str)
{
	assert(str != NULL);
	int sum1 = 0;
	int flag1 = 1;
	while (*str != '\0')
	{
		sum1 += (*str - 48) * flag1;
		flag1 *= 10;
		str++;
	}
	return sum1;
}
//逆置字符串
void reserve(char* str)
{
	int left = 0;
	int right = strlen(str) - 1;
	while (left < right)
	{
		Swap(&str[left], &str[right]);
		left++;
		right--;
	}
}
int main()
{
	char str[9] = { 0 };
	gets(str);
	//1.第一次我们先从前往后遍历字符串，求出他们的和，相当于求了逆序和2310102
	int sum1 = GetData(str);
	//2.将字符串逆置，这下我们继续复用第一个接口，这下求得顺序和20101320，两者相加得到最终结果
	reserve(str);
	int sum2 = GetData(str);
	printf("sum1=%d\n", sum1);
	printf("sum2=%d\n", sum2);
	printf("%d", sum1 + sum2);
	return 0;
}