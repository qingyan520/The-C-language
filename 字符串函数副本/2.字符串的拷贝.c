#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
char* my_strcpy(char* arr1, const char* arr2)
{
	char* ret = arr1;
	while (*arr1++ = *arr2++);
	return ret;
}
int main2()
{
	char arr1[] = "hello";
	char arr2[] = "bit";
	char arr=my_strcpy(arr1, arr2);
	printf("%s", arr1);
}
