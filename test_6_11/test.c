////1.��n����Χ��һȦ
//#include <stdio.h>
//int main()
//{
//	int a[50] = {0}, i, n, count, flag = 0;
//	scanf_s("%d", &n);
//	count = n;
//	for (i = 1; i <= n; i++)
//		a[i] = 1;//�����˶���Ȧ�ڣ�Ϊ1 
//	for (i = 1; ; i++) {
//		if (i == n + 1)
//			i = 1;//���i������n���ˣ��������»ص�1 
//
//		if (a[i] != 0)	flag++;
//		else	continue;
//
//		if (flag % 3 == 0) {
//			a[i] = 0;
//			count--;
//		}
//
//		if (count == 1)//��ʾֻʣ��һ������Ȧ�� 
//			break;
//	}
//	for (i = 1; i <= n; i++)
//	{
//
//		if (a[i] != 0)
//			printf("%d", i);
//	}
//	return 0;
//}

//2.��һ��5*5�ľ����е����Ԫ�ط������ģ�4���Ƿֱ��4����С��Ԫ�أ�дһ������ʵ��

//#include<stdio.h>
//int main()
//{
//	void change(int* p);
//	int a[5][5];
//	int* p;
//	int i;
//	int j;
//	printf("input matrix:\n");
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			scanf_s("%d", &a[i][j]);
//		}
//	}
//	p = &a[0][0];
//	change(p);
//	printf("new,matrix:\n");
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%5d", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//void change(int* p)
//{
//	int i;
//	int j;
//	int temp;
//	int* pmax;
//	int* pmin;
//	pmax = p;
//	pmin = p;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = i; j < 5; j++)
//		{
//			if (*pmax < *(p + 5 * i + j))
//			{
//				pmax = p + 5 * i + j;
//			}
//			if (*pmin > *(p + 5 * i + j))
//			{
//				pmin = p + 5 * i + j;
//			}
//		}
//	}
//	temp = *(p + 12);
//	*(p + 12) = *pmax;
//	*pmax = temp;
//	temp = *p;
//	*p = *pmin;
//	*pmin = temp;
//	pmin = p + 1;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			if (((p + 5 * i + j) != p) && (*pmin > *(p + 5 * i + j)))
//			{
//				pmin = p + 5 * i + j;
//			}
//		}
//	}
//	temp = *pmin;
//	*pmin = *(p + 4);
//	*(p + 4) = temp;
//	pmin = p + 1;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			if (((p + 5 * i + j) != (p + 4)) && ((p + 5 * i + j) != p) && (*pmin > *(p + 5 * i + j)))
//			{
//				pmin = p + 5 * i + j;
//			}
//		}
//	}
//	temp = *pmin;
//	*pmin = *(p + 20);
//	*(p + 20) = temp;
//	pmin = p + 1;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			if (((p + 5 * i + j) != p) && (p + 5 * i + j) != (p + 4) && (p + 5 * i + j) != (p + 20)
//				&& (*pmin > *(p + 5 * i + j)))
//			{
//				pmin = p + 5 * i + j;
//			}
//		}
//	}
//	temp = *pmin;
//	*pmin = *(p + 24);
//	*(p + 24) = temp;
//}



//��һ��������ѧ����4�ſγ�
//��1��.���һ�ſγ̵�ƽ����
//��2��.�ҳ����������Ͽγ̲������ѧ����������ǵ�ѧ�ź�ȫ���γ̼�ƽ���ɼ�
//��3��.�ҳ�ƽ������90�����ϻ���ȫ���γ̳ɼ���85�����ϵ�ѧ����*/

#include <stdio.h>
#include <stdio.h>
int main()
{
	void first_class_average(float[][5]);
	void two_class_fail(float(*p)[5], int x);
	void aver_90_or_all_85(float(*p)[5], int x);
	float score[4][5], (*p)[5], * q;
	int i;
	printf("input scores:\n");
	for (q = *score; q < *score + 20; q++)  scanf("%f", q);
	first_class_average(score);
	p = score;
	for (i = 0; i < 4; i++)  two_class_fail(p + i, i);
	p = score;
	for (i = 0; i < 4; i++)  aver_90_or_all_85(p + i, i);
	return 0;

}
void first_class_average(float a[4][5])
{
	int i;
	float s = 0, aver;
	for (i = 0; i < 4; i++)
	{
		s = s + a[i][0];
	}
	aver = s / 4;
	printf("The average scores of first class:%2.1f\n", aver);

}
void two_class_fail(float(*p)[5], int x)
{
	int i, n = 0;
	float s = 0, aver;
	for (i = 0; i < 5; i++)
		if ((*(*p + i)) < 60)n++;
	if (n > 2)
	{
		printf("No.%d student has morn than two failed class scores.\n", x + 1);
		printf("His or her class scores:");
		for (i = 0; i < 5; i++)
		{
			printf("%2.1f ", *(*p + i));
			s = s + *(*p + i);
		}
		aver = s / 5;
		printf("\nHis or her average scores:%2.1f\n", aver);
	}

}
void aver_90_or_all_85(float(*p)[5], int x)
{
	int i, flag = 0;
	float s = 0, aver;
	for (i = 0; i < 5; i++)
	{
		if ((*(*p + i)) <= 85)flag = 1;
		s = s + (*(*p + i));
	}
	if (flag == 0)  printf("All of NO.%d student's class scores more than 85.\n", x + 1);
	aver = s / 5;
	if (aver > 90)  printf("The average of NO.%d student's score more than 90.\n", x + 1);
}
dq
