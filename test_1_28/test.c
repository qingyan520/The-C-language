//#include<stdio.h>
//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//��n�Ľ׳�
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int sum = 1;
//	scanf_s("%d", &n);
//	for (int i = 1; i <=n; i++)
//	{
//		sum *= i;
//	}
//	printf("%d ", sum);
//	return 0;
//}

//��1��+2!+����n!
//����һ���Ƚϵ�Ч
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	scanf_s("%d", &n);
//	for (int i = 1; i <=n ; i++)
//	{
//		int flag = 1;
//		for (int j = 1; j <=i ; j++)
//		{
//			flag *= j;
//		}
//		sum += flag;
//	}
//	printf("%d", sum);
//	return 0;
//}
//��������
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int sum = 0;
//	int ret = 1;
//	for (int i = 1; i <=n ; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0; i <=12 ; i++)
//	{
//		//arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}

//ģ��ʵ��strcpy����
#include<stdio.h>
#include<assert.h>
//assert:���ԡ����ʽ��������Ϊ�棬ʲôҲ�������������еı��ʽΪ�٣��ͻᱨ��
//��ԭʼ�ķ�����
//void my_strcpy(char* str1, char* str2)
//{
//	while (*str2 != '\0')
//	{
//		*str1 = *str2;
//		str1++;
//		str2++;
//	}
//	*str1 = *str2;
//}
//void my_strcpy(char* str1, char* str2)
//{
//	while (*str1++ = *str2++);
//}
//void my_strcpy(char* str1, char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	while (*str1++ = *str2++);
//}
//void my_strcpy(char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	while (*str1++ = *str2++);
//}
//char*my_strcpy(char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	char* desk = str1;
//	while (*desk++ = *str2++);
//	return desk;
//}
//int main()
//{
//	char str1[] = "ppppppppppppp";
//	char str2[] = "hello bit";
//	my_strcpy(str1, str2);
//	printf("%s", str1);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{/*
	/*int num = 10;
	int* p = &num;
	*p = 20;
	printf("%d", num);*///*/
	/*int num = 10;
	int a = 0;*/
	//const int* p = &num;
	//*p = 20;//�ᱨ��
	//const ����ָ�룬����*��ߣ����ε���ָ��ָ������ݣ�ʹ��ָ��ָ������ݲ�����ͨ��ָ��������޸�
	//p = &a;//����ָ���ָ����Է����ı�

	//int b = 10;
	//int* const p = &b;//ָ�������ָ�򲻿����޸ģ�����ָ���ֵ���޸�
	//p = &a;//����
	//*p = 20;
	/*const int* const p = &num;//const ������ָ�������α�������ָ������ݶ��������޸�
	*p = 20;
	p = &a;*/

//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		//arr[i] = 0;
//		printf("hello bit\n");
//	}
//	return 0;
//}

//ģ��ʵ��strlen����
#include<stdio.h>
//1.������
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//2.�ݹ�
//int my_strlen(char* str)
//{
//	return *str == 0 ? 0 : 1 + my_strlen(str + 1);
//}
//3.ָ��-ָ��
//int my_strlen(char* str)
//{
//	const char* eos = str;
//	while (*eos++);
//	return(eos - str - 1);
//
//}
//int main()
//{
//	char str[] = "hello bit";
//	int ret = my_strlen(str);
//	printf("%d", ret);
//	return 0;
//}

//ģ��ʵ�ֿ⺯��strcpy
//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(char* str1,const char*str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	char* desk = str1;
//	while (*str1++ = *str2++);
//	return desk;
//}
//int main()
//{
//	char str1[] = "pppppppppp";
//	char str2[] = "hello bit";
//	char* ret = my_strcpy(str1, str2);
//	printf("%s", ret);
//	return 0;
//}
//char* my_strcpy(char* dest, const char *src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//  //����srcָ������ݵ�destָ��Ŀռ䣬����\0
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	//strcpy - string copy
//	char arr1[20] = "qqqqqqqqqqqqqq";
//	char arr2[] = "abcdef";
//	char*p2 = arr2;
//	//my_strcpy
//	printf("%s\n", my_strcpy(arr1, p2));//abcdef
//
//	return 0;
//}

//��ӡ����
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n-1-i; j++)
//		{
//			printf("  ");
//		}
//		for (int j = 0; j <2*i+1; j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	for (int i = 0; i <n-1 ; i++)
//	{
//		for (int j = 0; j <=i ; j++)
//		{
//			printf("  ");
//		}
//		for (int j =0; j <2*(n-1)-2*i-1 ; j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	int sum = 0;
//	int m = a;
//	while (a/100000==0)
//	{
//		printf("%d ", a);
//		sum += a;
//		a = a * 10 + m;
//	}
//	printf("\n%d", sum);
//	return 0;
//}

//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
//#include<stdio.h>
//int main()
//{
//	int money = 0;
//	scanf_s("%d", &money);
//	int total = money;
//	int empty = money;
//	while (empty > 1)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d", total);
//
//	return 0;
//}

//��������ʹ����ȫ����λ��ż��ǰ�档
//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
#include<stdio.h>
void change(int* arr)
{
	for (int i = 0; i < ; i++)
	{

	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	change(arr);
	for (int i = 0; i < 10; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}