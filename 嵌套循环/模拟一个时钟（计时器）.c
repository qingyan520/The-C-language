#include<stdio.h>
#include<Windows.h>
int main111()
{
	for ( int i = 0; i < 24; i++)
	{
		for ( int j = 0; j < 60; j++)
		{
			for (int k = 0; k < 60; k++)
			{
				//clsÇåÆÁ
				system("cls");
				printf("%02d:%02d:%02d\n", i, j, k);
				Sleep(1000);
			}
		}

	}
	return 0;
}