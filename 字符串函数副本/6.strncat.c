#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main6()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	strncat(arr1, arr2, 20);
	printf("%s", arr1);
}