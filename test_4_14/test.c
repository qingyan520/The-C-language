////1.���ú���trapezoid���������
//#include<stdio.h>
//float trapezoid(float a, float b, float h)
//{
//	return (a + b) * h / 2.0;
//}
//int main()
//{
//	float a = 0;//�����ϵ�
//	float b = 0;//�����µ�
//	float h = 0;//���εĸ�
//	float s = 0;//���ε����
//	printf("�������������ε��ϵף��µף��ߣ����Կո����:\n");
//	scanf_s("%f%f%f", &a, &b,&h);
//	s = trapezoid(a, b, h);
//	printf("���ε����S=%.2f\n", s);
//	return 0;
//}

//
////2.���ú���V��Բ�����
//#include<stdio.h>
//#define PI 3.14//�궨�妰Ϊ3.14
//float V(float r, float h)
//{
//	return PI * r * r * h;
//}
//int main()
//{
//	float r = 0;//Բ������뾶
//	float h = 0;//Բ���ĸ�
//	float v = 0;//Բ�������
//	printf("��ֱ�����Բ���İ뾶����������Կո����:\n");
//	scanf_s("%f%f", &r, &h);
//	v = V(r, h);
//	printf("Բ�������V=%.2f\n", v);
//	return 0;
//}
//
////3.��д����rectangle(a.b,x)���޼���ƺ��ʱ��
//#include<stdio.h>
//float rectangle(float a, float b, float x)
//{
//	return a * b / x;
//}
//int main()
//{
//	float a = 0;//��ƺ�ĳ�
//	float b = 0;//��ƺ�Ŀ�
//	float x = 0;//�޼���ƺ���ٶ�
//	float t = 0;//�޼���ƺ����Ҫ��ʱ��
//	printf("��ֱ������ƺ�ĳ������޼��ٶȣ����Կո����:\n");
//	scanf_s("%f%f%f", &a, &b, &x);
//	t = rectangle(a, b, x);
//	printf("�޼���ƺ����Ҫ��ʱ��T=%.2fs\n", t);
//	return 0;
//}

//4.��д�������������λ��
//˼·������λ��ÿһλ�Ӻ���ǰ�ó����ֱ����10000��1000��100��10��1Ȼ�����
#include<stdio.h>
int intv(int m)
{
	int flag= 10000;
	int sum = 0;
	while (m)
	{
		int k = m;
		k = k % 10;
		sum += flag * k;
		flag = flag / 10;
		m = m / 10;
	}
	return sum;
}
int main()
{
	int m = 0;//���뷴ת�������
	int n = 0;//��ת�����
	printf("������Ҫ��ת����λ��:\n");
	scanf_s("%d", &m);
	n = intv(m);
	printf("��ת�����m=%d\n", n);
	return 0;
}