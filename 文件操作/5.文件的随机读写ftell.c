#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main5()
{
	FILE* pf = fopen("text1.txt","w");
	if (pf == NULL)
		return 0;
	fseek(pf, 3, SEEK_END);
	//返回文件指针相对于起始位置偏移量大小
	int pos = ftell(pf);
	printf("%d", pos);
	return 0;
}