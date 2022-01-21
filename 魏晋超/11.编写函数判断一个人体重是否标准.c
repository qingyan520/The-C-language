#include<stdio.h>
void judge(double high, double weight)
{
	double BIM = weight / high / high;
	if (BIM >= 18 && BIM <= 25)
	{
		printf("您的身体状态健康\n");
	}
	else
		printf("您的身体状态不健康\n");
}
int main11()
{
	double high, weight;
	printf("请分别输入您的身高，体重(其中身高以m为单位，体重以kg为单位):");
	scanf_s("%lf%lf", &high, &weight);
	judge(high, weight);
	return 0;
}