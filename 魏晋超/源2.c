#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main2()
{
	double math_score;
	double Chinese_score;
	double English_score;
	double history_score;
	double PE_score;
	printf("��ֱ�����������ѧ�����ģ�Ӣ���ʷ�������ɼ���");
	scanf_s("%lf%lf%lf%lf%lf", &math_score, &Chinese_score, &English_score, &history_score, &PE_score);
	double average = (math_score + Chinese_score + English_score + history_score + PE_score) / 5;
	printf("����ƽ����Ϊ��%.2lf", average);
	return 0;
}