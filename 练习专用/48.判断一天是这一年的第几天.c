#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int estimate(int year)
{
	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0 ? 1 : 0;
}
int judge(int year, int month, int day)//�жϾ�������һ��
{
	int a[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int b[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	//���������·ݣ������ƽ����������a,������������b
	int sum = 0;
	int n = estimate(year);//�ж���ƽ�껹������
	if (n == 1)
	{
		//
		for (int i = 0; i < month - 1; i++)
		{
			sum + b[i];
		}
	}
	else
	{
		for (int i = 0; i < month - 1; i++)
		{
			sum += a[i];
		}
	}
	return sum + day;
}
int main48()
{
	//����������
	int year, month, day;
	printf("������������:");
	scanf_s("%d.%d.%d", &year, &month, &day);
	int m = judge(year, month, day);//���ú����жϾ�������һ��
	printf("%d.%d.%dΪ%d���%d��", year, month, day, year, m);
	return 0;
}