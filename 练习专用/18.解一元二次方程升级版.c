#include<stdio.h>
#include<math.h>
int main18()
{
	double a, b, c, d,x1,x2;
	char ch;
	do
	{
		printf("�����������ϵ��a��");
		scanf_s("%lf", &a);
		printf("������һ����ϵ��b:");
		scanf_s("%lf", &b);
		printf("�����볣����c:");
		scanf_s("%lf", &c);
		d = sqrt(b * b - 4 * a * c);
		if (d >= 0)
		{
			x1 = (-b + d) /( 2 * a);
			x2 = (-b - d) /( 2 * a);
			if (d > 0)
			{
				printf("�÷�����������ͬ��ʵ���⣬�ֱ�Ϊx1=%d,x2=%lf\n", x1, x2);
			}
			else
			{
				printf("�÷�����������ȵ�ʵ���⣺x1=x2=%lf\n", x1);
			}
		}
		else
		{
			printf("�÷�����ʵ����\n");
		}
		printf("�Ƿ���������˳����밴y||Y��;���������밴�����\n");
		scanf_s("%c",&ch);
	} while (ch=='y' || ch == 'Y');
	return 0;
}