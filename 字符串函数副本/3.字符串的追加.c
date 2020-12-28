#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s", arr1);
//}
//自定义函数求字符串追加
char* my_strcat(char* arr1, const char* arr2)
{
	char* ret = arr1;
	//找到\0的位置
	while (*arr1 != '\0')
		arr1++;
	//字符串追加
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
