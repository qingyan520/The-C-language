#include<stdio.h>
int main()
{
	char ch;
	while (~scanf_s("%d", &ch,sizeof(char)))
	{
		if (ch >= 'A' && ch <= 'Z')
		{
			printf("%c�Ǵ�д��ĸ\n", ch);
		}
		else if (ch >= 'a' && ch <= 'z')
		{
			printf("%c��Сд��ĸ\n", ch);
		}
		else if (ch >= '0' && ch <= '9')
		{
			printf("%c�������ַ�\n", ch);
		}
		else
		{
			printf("%c�������ַ�\n", ch);
		}
		getchar();
	}

}