#include<stdio.h>
//�ڼ�����������1�����飬���A��������Ԫ��֮�ͣ��������洢������B��
int main32()
{
	int a[10];
	int b[10];
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (int i = 1; i <10; i++)
	{
		b[i-1] = a[i - 1] + a[i];
	}
	for (int i = 0; i < 9; i++)
	{
		printf("%d\t", b[i]);
	}
}