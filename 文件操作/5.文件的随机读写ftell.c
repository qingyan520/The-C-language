#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main5()
{
	FILE* pf = fopen("text1.txt","w");
	if (pf == NULL)
		return 0;
	fseek(pf, 3, SEEK_END);
	//�����ļ�ָ���������ʼλ��ƫ������С
	int pos = ftell(pf);
	printf("%d", pos);
	return 0;
}