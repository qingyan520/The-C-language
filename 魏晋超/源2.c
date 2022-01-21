#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main2()
{
	double math_score;
	double Chinese_score;
	double English_score;
	double history_score;
	double PE_score;
	printf("请分别输入您的数学，语文，英语，历史，体育成绩：");
	scanf_s("%lf%lf%lf%lf%lf", &math_score, &Chinese_score, &English_score, &history_score, &PE_score);
	double average = (math_score + Chinese_score + English_score + history_score + PE_score) / 5;
	printf("您的平均分为：%.2lf", average);
	return 0;
}