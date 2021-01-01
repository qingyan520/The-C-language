#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<time.h>
int main46()
{
	srand((unsigned)time(NULL));
	int temp;
	char ch;
	system("color 0A");
	for ( int i = 0; ;i++)
	{
		temp = rand() % 65 + 72;
		printf("%*c", temp % 250, temp);
		if (i % 500 == 0)
		{
			i = 0;
		}
		Sleep(10);
	}
	getchar();
	while (1);
	return 0;
}