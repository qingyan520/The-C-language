#include<stdio.h>
#include<ctype.h>
int main61()
{
	int ch;
	//getchar����һ���ַ�
	while ((ch = getchar()) != EOF)
	{
		if (islower(ch))//islower�ж϶�����ĸ�Ƿ�ΪСд��ĸ
		{
			printf("%c\n", toupper(ch));//��Сд��ĸת��Ϊ��д��ĸ
		}
		if (isupper(ch))//isupper�ж϶�����ĸ�Ƿ�Ϊ��д��ĸ
		{
			printf("%c", tolower(ch));//tolower����д��ĸת��ΪСд��ĸ
		}
	}
	return 0;
}