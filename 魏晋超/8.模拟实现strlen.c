#include<stdio.h>
int my_strlen(char* str)
{
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}
int main8()
{
	char str[100];
	scanf_s("%s", &str,100);
	my_strlen(&str);
	printf("该字符串长度为：%d\n", my_strlen(str));
	return 0;
}
