
//1.��1`10000����������
//#include<stdio.h>
//int Judge_leap_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	for (int i = 1; i <= 10000; i++)
//	{
//		if (Judge_leap_year(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//2.��д������1/(1*1+1)+1/(2*2+1)+......+1/(n*n+1),���һ��С��0.000001
//#include<stdio.h>
//int main()
//{
//	float sum = 0;
//	int i = 1;
//	while (1.0 / (i * i + 1) > 0.000001)
//	{
//		sum += 1.0 / (i * i + 1);
//		i++;
//	}
//	printf("%.3f", sum);
//	return 0;
//}
//
////3.��1~1000֮�ڵ�����
//#include<stdio.h>
//int is_number(int n)
//{
//	int sum = 0;
//	for (int i = 1; i<n; i++)
//	{
//		if (n % i == 0)
//		{
//			sum += i;
//		}
//	}
//	if (n == 0)
//	{
//		return 0;
//	}
//	if (sum == n)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	for (int i = 0; i <= 1000; i++)
//	{
//		if (is_number(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//4.ѭ������ѧ���ɼ�����������ƽ���ɼ�
#include<stdio.h>
int main()
{
	int arr[100] = { 0 };
	int i = 0;
	float sum = 0;
	printf("������ɼ�������-99ֹͣ����:\n");
	while (1)
	{
		int score = 0;
		scanf_s("%d", &score);
		if (score == -99)
		{
			break;
		}
		else
		{
			sum += score;
			i++;
		}
	}
	if (i == 0)
	{
		printf("ƽ����Ϊ��0");
	}
	printf("ƽ����Ϊ��%.2f", sum / i);

	return 0;
}