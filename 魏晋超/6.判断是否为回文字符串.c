#include<stdio.h>
int main6()
{
	char str[100] = { 0 };
	printf("������Ҫ�жϰ����ַ�����>");
	gets(str);
	int len = strlen(str);
	for (int i = 0; i < len/2; i++)
	{
		if (str[i] != str[len - i - 1])
			printf("���ǻ����ַ���\n");
	}
	printf("%s�ǻ����ַ���\n",str);

	return 0;
}