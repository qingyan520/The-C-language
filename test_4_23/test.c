//#include<stdio.h>
//int main()
//{
//	int y = 1;
//	int i = 0;
//	while (i < 9)
//	{
//		y = (y + 1) * 2;
//		i++;
//	}
//	printf("%d\n", y);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int y = 1;
//	int i = 0;
//	while (i < 9)
//	{
//		y = (y + 2) * 2;
//		i++;
//	}
//	printf("%d\n", y);
//	return 0;
//}



//牛顿迭代法求方程的解
//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	float x,y,y1;
//	x = 10000;
//	do
//	{
//		y = 2 * x * x * x - 4 * x * x + 3 * x - 6;
//		x = x - y / (6 * x * x - 8 * x + 3);
//	} while (y != 0);
//	printf("%.2f\n", x);
//	return 0;
//}

#include<stdio.h>
#include<math.h>
#include<windows.h>
#include<time.h>
#define U 0.1
#define V 0.053
void SetColor(unsigned short ForeColor, unsigned short BackGroundColor)
{
	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hCon, (ForeColor % 16) | (BackGroundColor % 16 * 16));
}
int main()
{
	int i, s = 0, t, a = 10, b = 11, c = 12, d = 13, e = 14;
	int z[] = { 32,32,206,210,176,174,196,227,32,32 };
	float x, y;
	srand(time(NULL));
	for (y = 1.3; y >= -1.1; y -= U)
	{
		for (x = -2; x < 1.4; x += V)
		{
			if ((((x * x + y * y - 1) * (x * x + y * y - 1) * (x * x + y * y - 1) - x * x * y * y * y) <= 0))
			{
				if (y >= 1.3 - 10 * U || y <= 1.3 - 11 * U)
				{
					s++;
					if (s % 4 == 1) { SetColor(a, 0); printf("l"); }
					if (s % 4 == 2) { SetColor(e, 0); printf("o"); }
					if (s % 4 == 3) { SetColor(c, 0); printf("v"); }
					if (s % 4 == 0) { SetColor(d, 0); printf("e"); }
				}
				else
				{
					for (i = 0; i < 42; i++)
					{
						if (i <= 14 || i >= 28)
						{
							s++;
							if (s % 4 == 1) { SetColor(a, 0); printf("l"); }
							if (s % 4 == 2) { SetColor(e, 0); printf("o"); }
							if (s % 4 == 3) { SetColor(c, 0); printf("v"); }
							if (s % 4 == 0) { SetColor(d, 0); printf("e"); }
						}
						else
						{
							SetColor(b, 0);
							printf("%c", z[i - 15]);
							Sleep(50);
						}
					}
					break;
				}
			}
			else
				printf(" ");
			Sleep(1);
		}
		printf("\n");
	}
	printf("按任意键继续！");
	getchar();
	while (1)
	{
		system("cls");
		t = a; a = b; b = c; c = d; d = e; e = t;
		for (y = 1.3; y >= -1.1; y -= U)
		{
			for (x = -2; x < 1.4; x += V)
			{
				if ((((x * x + y * y - 1) * (x * x + y * y - 1) * (x * x + y * y - 1) - x * x * y * y * y) <= 0))
				{
					if (y >= 1.3 - 10 * U || y <= 1.3 - 11 * U)
					{
						s++;
						if (s % 4 == 1) { SetColor(a, 0); printf("l"); }
						if (s % 4 == 2) { SetColor(b, 0); printf("o"); }
						if (s % 4 == 3) { SetColor(c, 0); printf("v"); }
						if (s % 4 == 0) { SetColor(d, 0); printf("e"); }
					}
					else
					{
						for (i = 0; i < 42; i++)
						{
							if (i <= 14 || i >= 28)
							{
								s++;
								if (s % 4 == 1) { SetColor(a, 0); printf("l"); }
								if (s % 4 == 2) { SetColor(b, 0); printf("o"); }
								if (s % 4 == 3) { SetColor(c, 0); printf("v"); }
								if (s % 4 == 0) { SetColor(d, 0); printf("e"); }
							}
							else
							{
								SetColor(e, 0);
								printf("%c", z[i - 15]);
							}
						}
						break;
					}
				}
				else
					printf(" ");
			}
			printf("\n");
		}
		Sleep(1000);
		system("cls");

	}
}