#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_strlen(char* ch)
{
	int count = 0;
	while(ch!='\0')
	{
		
			(*ch)++;
			count++;
		
	}
	return count;
}
int main()
{
	char ch []= "abcde";
	int num = my_strlen(ch);
	printf("%d", num);
}