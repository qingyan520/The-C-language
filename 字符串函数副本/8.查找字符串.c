#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char* p1 = "abcdegf";
	char* p2 = "cde";
	char* ret = strstr(p1, p2);
	
		printf("%s\n", ret);
		return 0;

}