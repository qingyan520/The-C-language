#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main1()
{
	int arr[20] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19 };
	int a = 0;
	int b = 0;
	for (int i = 0; i < 20; i++)
	{
		if (*(arr + i) %2==0&&*(arr+i)!=0)
			a++;
		if(*(arr+i)%2!=0&&*(arr+i)!=0)
			b++;
	}
	printf("ż������Ϊ��%d\n", a);
	printf("��������Ϊ��%d\n", b);
	return 0;
}