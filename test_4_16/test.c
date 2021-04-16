//
//
////1.
//#include<stdio.h>
//int main()
//{
//	while (1)
//	{
//		int score = 0;
//		printf("请输入成绩:\n");
//		scanf_s("%d", &score);
//		if (score > 100 || score < 0)
//		{
//			printf("输入错误，请重新输入\n");
//		}
//		else
//		{
//			switch (score / 10)
//			{
//			case 10:
//			case 9:
//				printf("A\n");
//				break;
//			case 8:
//				printf("B\n");
//				break;
//			case 7:
//				printf("C\n");
//				break;
//			case 6:
//				printf("D\n");
//				break;
//			default:
//				switch (score / 10)
//				{
//				case 10:
//				case 9:
//					printf("A\n");
//					break;
//				case 8:
//					printf("B\n");
//					break;
//				case 7:
//					printf("C\n");
//					break;
//				case 6:
//					printf("D\n");
//					break;
//					break;
//				default:
//					printf("E\n");
//					break;
//
//				}
//				break;
//
//			}
//		}
//	}
//	return 0;
//}



////4.10运费计算
//#include<stdio.h>
//int main()
//{
//	int c, s;
//	float p, w, d, f;
//	printf("please enter price ,weight,discount:");
//	scanf_s("%f%f%d", &p, &w, &s);
//	if (s >= 3000)
//	{
//		c = 12;
//	}
//	else
//	{
//		c = s / 250;
//	}
//	switch (c)
//	{
//	case 0:
//		d = 0;
//		break;
//	case 1:
//		d = 2;
//		break;
//	case 2:
//	case 3:
//		d = 5;
//		break;
//	case 4:
//	case 5:
//	case 6:
//	case 7:
//		d = 8;
//		break;
//	case 8:
//	case 9:
//	case 10:
//	case 11:
//		d = 10;
//		break;
//	case 12:
//		d = 10;
//		break;
//	}
//	f = p * w * s*(1 - d / 100);
//	printf("freight=%10.2f\n", f);
//	return 0;
//}


//水仙花数
#include<stdio.h>
#include<math.h>
int main()
{
	for (int i = 100; i < 1000; i++)
	{
		int m = i;
		int sum = 0;
		while (m)
		{
			sum += pow(m % 10, 3);

			m=m/10;
		}
		if (sum==i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}