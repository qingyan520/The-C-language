#include<stdio.h>
void judge(double high, double weight)
{
	double BIM = weight / high / high;
	if (BIM >= 18 && BIM <= 25)
	{
		printf("��������״̬����\n");
	}
	else
		printf("��������״̬������\n");
}
int main11()
{
	double high, weight;
	printf("��ֱ�����������ߣ�����(���������mΪ��λ��������kgΪ��λ):");
	scanf_s("%lf%lf", &high, &weight);
	judge(high, weight);
	return 0;
}