#include <stdio.h>

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
	//找到\0的位置
	char* ret = arr1;
	while (*arr1 == '\0')
		arr1++;
	//字符串追加
	while (*arr1++ = *arr2++);
	return  ret;

}
int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	char* ret = my_strcat(arr1, arr2);
	printf("%s", ret);
	return 0;
}