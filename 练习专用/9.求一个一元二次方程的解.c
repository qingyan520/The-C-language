//��һԪ���η��̣�ax2 + bx + c = 0 �ĸ���
//����a��ϵ��������0��
#include<stdio.h>
#include<math.h>
int main9()
{
	double a, b, c, x1, x2,d;
	printf("��ֱ�����ϵ��a,b,c��");
	scanf_s("%lf%lf%lf", &a, &b, &c);
	if (a != 0)
	{
		d = sqrt(b*b-4*a*c);
		if (d < 0)
		{
			printf("�˷����޽�");
		}
		else
		{
			x1 = (-b + d) / (2 * a);
			x2 = (-b - d) / (2 * a);
			printf("%.2f,%.2f", x1, x2);
		}
	}
	return 0;

}
