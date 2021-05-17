
//1.求1`10000中所有闰年
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


//2.编写程序求1/(1*1+1)+1/(2*2+1)+......+1/(n*n+1),最后一项小于0.000001
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
////3.求1~1000之内的完数
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

//4.循环输入学生成绩，并计算其平均成绩
#include<stdio.h>
int main()
{
	int arr[100] = { 0 };
	int i = 0;
	float sum = 0;
	printf("请输入成绩，并按-99停止输入:\n");
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
		printf("平均分为：0");
	}
	printf("平均分为：%.2f", sum / i);

	return 0;
}