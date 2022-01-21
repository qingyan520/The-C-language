#include<stdio.h>
int main6()
{
	char str[100] = { 0 };
	printf("请输入要判断啊的字符串：>");
	gets(str);
	int len = strlen(str);
	for (int i = 0; i < len/2; i++)
	{
		if (str[i] != str[len - i - 1])
			printf("不是回文字符串\n");
	}
	printf("%s是回文字符串\n",str);

	return 0;
}