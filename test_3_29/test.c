//#include<stdio.h>
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%d %d", ptr1[-1], *ptr2);
//	return 0;
//}

#include<stdio.h>
void abc(char* str)
{
	int a, b;
	for (a = b = 0; str[a] != \0¡¯; a++)
		if (str[a] != c¡¯)
			str[b++] = str[a];
	str[b] = '\0¡¯;
}
void main()
{
	char str[] = ¡±abcdef¡±;
	abc(str);
	printf(¡°str[] = % s¡±, str);
}