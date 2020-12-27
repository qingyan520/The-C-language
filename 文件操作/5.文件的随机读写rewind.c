#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main6()
{
	FILE* pf = fopen("text1.txt", "r");
	if (pf == NULL)
		return 0;
	fseek(pf, -2, SEEK_END);
	rewind(pf);
	//让文件指针回到起始位置
	fgetc(pf);
	fclose(pf);
	return 0;
}