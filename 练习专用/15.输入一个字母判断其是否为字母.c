#include<stdio.h>
int main15()
{
	char c;
	printf("请输入一个字母：");
	scanf_s("%c", &c);
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		printf("%c是字母", c);
	}
	else
	{
		printf("%c不是字母", c);
	}
	return 0;
}