#include <stdio.h>

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
	//�ҵ�\0��λ��
	char* ret = arr1;
	while (*arr1 == '\0')
		arr1++;
	//�ַ���׷��
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