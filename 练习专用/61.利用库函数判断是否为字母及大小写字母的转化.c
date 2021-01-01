#include<stdio.h>
#include<ctype.h>
int main61()
{
	int ch;
	//getchar读入一个字符
	while ((ch = getchar()) != EOF)
	{
		if (islower(ch))//islower判断读入字母是否为小写字母
		{
			printf("%c\n", toupper(ch));//将小写字母转化为大写字母
		}
		if (isupper(ch))//isupper判断读入字母是否为大写字母
		{
			printf("%c", tolower(ch));//tolower将大写字母转化为小写字母
		}
	}
	return 0;
}