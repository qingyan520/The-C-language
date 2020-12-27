#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main4()
{
	FILE* pf = open("text.txt1", "r");
	if (pf == NULL)
		return 0;
	//1.定位文件指针
	//fseek:根据文件指针的位置的偏移量来定位指针文件
	fseek(pf, 2, SEEK_SET);
	//（指针名，偏移量，文件指针位置）
	//SEEK_CUR文件指针当前位置
	//SEEK_END文件指针末尾位置
	//SEEK_SET	文件指针起始位置
	int ch = fgetc(pf);
	printf("%c", ch);
	fclose(pf);
	pf = NULL;
	return 0;
}