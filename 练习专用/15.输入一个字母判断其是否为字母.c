#include<stdio.h>
int main15()
{
	char c;
	printf("������һ����ĸ��");
	scanf_s("%c", &c);
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		printf("%c����ĸ", c);
	}
	else
	{
		printf("%c������ĸ", c);
	}
	return 0;
}