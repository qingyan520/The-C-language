//#include<stdio.h>
//#include<stdbool.h>
//#include<string.h>
////�ж��Ƿ�Ϊ��ĸ
//bool Is_Letter(char c);
//int main()
//{
//	char str[100] = { 0 };
//	gets(str);
//	printf("%s\n", str);
//	//ͳ�Ʒ���ĸ�ַ��ĸ���
//	int count = 0;
//	//����һ�������Ź��˺���ַ���
//	char* arr = (char*)malloc(sizeof(char) * (strlen(str) + 1));
//	int j = 0;
//	for (int i = 0; i < strlen(str); i++)
//	{
//		if (!Is_Letter(str[i]))
//		{
//			count++;
//			arr[j] = str[i];
//			j++;
//		}
//	}
//	arr[j] = '\0';
//	printf("���˺���ַ���Ϊ:%s\n", arr);
//	printf("����ĸ�ַ�������%d\n", count);
//
//	return 0;
//}
//
//bool Is_Letter(char c)
//{
//	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
//	{
//		return true;
//	}
//	return false;
//}


//
//#include<stdio.h>
//#include<conio.h>
//#include<string.h>
//int fun(char* str, char* substr);
//int main()
//{
//	char str[81], substr[4];
//	int n;
//	//clrscr();
//	printf("�������ӷ�����\n");
//	gets(str);
//	printf("�������ַ�����\n");
//	gets(substr);
//	n = fun(str, substr);
//	printf("%d\n", n);
//
//	return 0;
//}
//int fun(char* str, char* substr)
//{
//	int n = 0;
//	for (int i = 0; i <= strlen(str) - 3; i++)
//	{
//		if (str[i] == substr[0] && str[i + 1] == substr[1] && str[i + 2] == substr[2])
//		{
//			++n;
//		}
//	}
//	return n;
//}










#include<stdio.h>
#include<string.h>
int fun(char* str, char* substr)
{
	int i, n = 0;
	for (i = 0; i <= strlen(str) - 3; i++)
	{
		if (str[i] == substr[0] && str[i + 1] == substr[1] && str[i + 2] == substr[2])
		{
			++n;
		}
	}
	return n;
}
int main()
{
	char str[81], substr[4];
	int n;

	printf("�������ӷ�����\n");
	gets(str);
	printf("�������ַ�����\n");
	gets(substr);
	n = fun(str, substr);
	printf("%d\n", n);
	gets(substr);
	puts(str);
	puts(substr);
	n = fun(str,substr);
	printf("n=%d\n", n);
	getchar();

	return 0;
}
