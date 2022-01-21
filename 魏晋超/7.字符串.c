#include<stdio.h>
void Str_Change(char* str)
{
	while (*str)
	{
		if (*str >='a' && *str <'z')
		{
			*str = *str -31;
			//*str = *str + 1;
		}
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + 33;
			//*str = *str + 1;
		}
		str++;
	}
}
int main7()
{
	char str[100] = { 0 };
	printf("请输入要改变的字符串:>");
	scanf_s("%s", str,100);
	Str_Change(str);
	printf("%s\n", str);
	return 0;
}