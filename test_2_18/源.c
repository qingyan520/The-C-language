#include<stdio.h>
void Fnid_val(int* arr, int row, int col, int num)
{
	if (arr!=NULL && row > 0 && col > 0)
	{
		int tmpRow = 0;
		int tmpCol = col - 1;
		while (tmpRow < row && col >= 0)
		{
			if (arr[tmpRow * col + tmpCol] == num)
			{
				printf("%d,intdex == %d\n", arr[tmpRow * col + tmpCol], tmpRow * col +
					tmpCol);
				break;
			}
			else if (arr[tmpRow * col + tmpCol] > num)
			{
				--tmpCol;
			}
			else
			{
				++tmpRow;
			}
		}
	}
}
int main1()
{
	int arr[4][4] = { 1,2,8,9,
	2,4,9,12,
	4,7,10,13,
	6,8,11,15 };
	Fnid_val((int*)arr, 4, 4, 15);
	return 0;
}