#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main4()
{
	FILE* pf = open("text.txt1", "r");
	if (pf == NULL)
		return 0;
	//1.��λ�ļ�ָ��
	//fseek:�����ļ�ָ���λ�õ�ƫ��������λָ���ļ�
	fseek(pf, 2, SEEK_SET);
	//��ָ������ƫ�������ļ�ָ��λ�ã�
	//SEEK_CUR�ļ�ָ�뵱ǰλ��
	//SEEK_END�ļ�ָ��ĩβλ��
	//SEEK_SET	�ļ�ָ����ʼλ��
	int ch = fgetc(pf);
	printf("%c", ch);
	fclose(pf);
	pf = NULL;
	return 0;
}