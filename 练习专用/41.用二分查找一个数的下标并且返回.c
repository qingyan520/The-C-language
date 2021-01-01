#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int ret(int arr[], int k)
{
	int left = 0;
	int right = 9;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (k > arr[mid])
		{
			left = mid + 1;
		}
		if (k < arr[mid])
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
	
}
int main41()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 3;
	int m = ret(arr, k);
	if (ret == -1)
	{
		printf("找不到所找数字\n");
	}
	printf("找到了，下表为：%d\n", m);

}