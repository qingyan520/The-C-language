#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void fun(int* arr)
{
	int* p, * x, * j, m = (10 - 1) / 2;
	p = arr;//���������Ԫ�ص�ַ
	x = arr + 9;//����ĩβԪ�ص�ַ
	j = arr + m;//�����м�Ԫ�ص�ַ
	for ( ; p<=j; p++,x--)
	{
		//����ǰ��κͺ��ε�����
		int temp = *p;
		*p = *x;
		*x = temp;
	}
}
int main51()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	fun(arr);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}