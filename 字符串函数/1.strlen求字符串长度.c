#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main1()
{
	//char ch = "abcde";
	//int num=strlen(ch)不行，ch为数组首元素地址，不可做其他用途；
	int num = strlen("abcde");
	printf("%d", num);
}