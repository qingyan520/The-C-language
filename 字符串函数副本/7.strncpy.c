#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main7()
{
	char arr1[] = "hello";
	char arr2[] = "horld";
	int num=strncmp(arr1, arr2, 1);
	printf("%d", num);
	return 0;

}