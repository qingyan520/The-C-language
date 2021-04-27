#include<stdio.h>
int main()
{
	char ch;
	while (~scanf_s("%d", &ch,sizeof(char)))
	{
		if (ch >= 'A' && ch <= 'Z')
		{
			printf("%c是大写字母\n", ch);
		}
		else if (ch >= 'a' && ch <= 'z')
		{
			printf("%c是小写字母\n", ch);
		}
		else if (ch >= '0' && ch <= '9')
		{
			printf("%c是数字字符\n", ch);
		}
		else
		{
			printf("%c是其它字符\n", ch);
		}
		getchar();
	}

}