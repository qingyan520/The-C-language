#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s", arr1);
//}
//�Զ��庯�����ַ���׷��
char* my_strcat(char* arr1, const char* arr2)
{
	char* ret = arr1;
	//�ҵ�\0��λ��
	while (*arr1 != '\0')
		arr1++;
	//�ַ���׷��
	while (*arr1++ = *arr2++);
	return ret;
	
}
int main3()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	my_strcat(arr1, arr2);
	printf("%s", arr1);
	return 0;
}
