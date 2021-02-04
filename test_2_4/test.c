#define _CRT_SECURE_NO_WARNINGS 
//字符串函数:

//1.strlen函数：求字符串长度
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	printf("%d", strlen("hello bit"));
//	return 0;
//}
//三种方法模拟实现strlen函数
//方法一：计数器法
//#include<stdio.h>
//#include<assert.h>
//size_t my_strlen(const char* str)
//{
//	assert(str != NULL);
//	int count =0 ;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char str[] = "hello bit";
//	printf("%d", my_strlen(str));
//	return 0;
//}
//方法二:递归
//#include<stdio.h>
//#include<assert.h>
//size_t my_strlen(char* str)
//{
//	assert(str != NULL);
//	return *str == '\0' ? 0 : 1 + my_strlen(1 + str);
//}
//int main()
//{
//	char str[] = "hello bit";
//	printf("%d", my_strlen(str));
//	return 0;
//}
//方法三:指针减指针
//#include<stdio.h>
//#include<assert.h>
//size_t my_strlen(char* str)
//{
//	assert(str!=NULL);
//	char* start = str;
//	while (*str++ != '\0');
//	return str - start-1;
//}
//int main()
//{
//	char str[] = "hello bit";
//	printf("%d", my_strlen(str));
//	return 0;
//}


//2.strcpy函数:追加字符串
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[30] = "############";
//	char arr2[] = "hello bit";
//	printf("%s", strcpy(arr1, arr2));
//	return 0;
//}
//模拟实现strcpy函数
//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(char* arr1, const char* arr2)
//{
//	assert(arr1 != NULL);
//	assert(arr2 != NULL);
//	char* desk = arr1;
//	while (*arr1++ = *arr2++);
//	return desk;
//}
//int main()
//{
//	char arr1[20] = "##########";
//	char arr2[] = "hello bit";
//	printf("%s", my_strcpy(arr1, arr2));
//	return 0;
//}

//3.strcat函数:追加字符串
//#include<stdio.h>
//#include<assert.h>
//char* my_strcat(char* arr1, const char* arr2)
//{
//	assert(arr1 && arr2);
//	char* str = arr1;
//	//1.找到arr1中\0的位置
//	while (*arr1)
//	{
//		arr1++;
//	}
//	//2.追加
//	while (*arr1++ = *arr2++);
//	return str;
//}
//int main()
//{
//	char arr1[20] = "abc ";
//	char arr2[] = "hello bit";
//	printf("%s", my_strcat(arr1, arr2));
//	return 0;
//}



//4.strcmp:字符串比较函数
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = "bcd";
//	printf("%d", strcmp(arr1, arr2));
//	return 0;
//}
//模拟实现strcmp函数
#include<stdio.h>
#include<assert.h>
//int my_strcmp(char* arr1, char* arr2)
//{
//	assert(arr1 && arr2);
//	while (*arr1 == *arr2)
//	{
//		if (*arr1 == '\0')
//			return 0;
//		arr1++; 
//		arr2++;
//	}
//	 if (*arr1 > *arr2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}
//int my_strcmp(const char* arr1, const char* arr2)
//{
//	assert(arr1 && arr2);
//	while (*arr1 == *arr2)
//	{
//		if (*arr1 == '\0')
//			return 0;
//		arr1++;
//		arr2++;
//	}
//	return *arr1 - *arr2;
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = "bcd";
//	printf("%d", my_strcmp(arr1, arr2));
//	return 0;
//}


//5.有限定的函数：strncat,strncpy,strncmp
//strncar:
//#include<string.h>
//#include<stdio.h>
//int main()
//{
//	char arr1[40] = "**************";
//	char arr2[] = "hello bit";
//	printf("%s", strncat(arr1, arr2, 5));
//	return 0;
//}

//strncpy:
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[40] = "***************";
//	char arr2[] = "hello bit";
//	printf("%s", strncpy(arr1, arr2,9));
//	return 0;
//}

//strncmp:
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcqqqq";
//	printf("%d", strncmp(arr1, arr2,4));
//
//	return 0;
//}

//6.strstr函数:查找子字符串
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "abcdefgh";
//	char arr2[] = "efg";
//	printf("%s", strstr(arr1, arr2));
//	return 0;
//}
//模拟实现strstr函数：
//#include<stdio.h>
//#include<assert.h>
//char* my_strstr(const char* s1,const char* s2)
//{
//	assert(s1 && s2);
//	const char* pc = s1;
//	while (*pc)
//	{
//		const char* p1 = pc;
//		const char* p2 = s2;
//		while (*p1 == *p2 && p1 && p2)
//		{
//			p1++;
//			p2++;
//		}
//		if (*p2 == '\0')
//			return (char*)pc;
//		pc++;
//	 }
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "bcdefg";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret != NULL)
//	{
//		printf("%s", ret);
//	}
//	else
//	{
//		printf("找不到子串");
//	}
//	return 0;
//
//}