#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int val;
	char str[20];

	strcpy(str, "98993489");
	val = atoi(str);
	printf("�ַ���ֵ = %s, ����ֵ = %d\n", str, val);

	strcpy(str, "runoob.com");
	val = atoi(str);
	printf("�ַ���ֵ = %s, ����ֵ = %d\n", str, val);

	return(0);
}