#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = "world";
//	int num = strcmp(arr1, arr2);
//	printf("%d", num);
//	return 0;
//}
int my_strcmp(const char* arr1, const char* arr2)
{
	assert(arr1 != NULL);
	assert(arr2 != NULL);
	while (arr1 == arr2)
	{
		if (arr1 == '\0')
			return 0;
		arr1++;
		arr2++;
	}
	//return arr1 - arr2;
	if (arr1 > arr2)
		return 1;
	else
		return -1;


}
int main4()
{
	char arr1 = "hello";
	char arr2 = "world";
	int num = my_strcmp(arr1, arr2);
	printf("%d", num);
	return 0;
}