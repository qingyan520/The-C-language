//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int flag = 0;
//	for (int i = 2;  i<=sqrt(n) ; i++)
//	{
//		if (n % i == 0)
//		{
//			flag++;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("%d������\n", n);
//	}
//	else
//	{
//		printf("%d��������\n", n);
//	}
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//	for (int i = 2000; i <=2500; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a, b;
//	float d, e;
//	char c1, c2;
//	double f, g;
//	long m, n;
//	unsigned int p, q;
//	a = 61;
//	b = 62;
//	c1 = 'a';
//	c2 = 'b';
//	d = 3.56;
//	e = -6.87;
//	f = 3157.890121;
//	g = 0.23456789;
//	m = 50000;
//	n = -6000;
//	p = 32768;
//	printf("a=%d ,b=%d\nc1=%c,c2=%c\nd=%6.2f,e=%6.2f\n", a, b, c1, c2, d, e);
//
//}


//#ifdef:���ǰ��궨�������������ִ���������ݣ���ǰ��û�к궨����ִ����������
//#ifndef:���ǰ��궨������������򲻻�ִ���������ݣ���ǰ��û�к궨�����������ִ����������
//�����﷨
//#indef  ����
//     ִ������
//#endif
//#include<stdio.h>
//#define HHE 0
//int main()
//{
//#ifndef HHE
//	printf("hehe");
//#endif
//	return 0;
//}


//ifndef:
#include<stdio.h>
int main()
{
#ifndef HH
	printf("hehe\n");
#endif
	return 0;
}