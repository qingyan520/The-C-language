#include<stdio.h>
#include<string.h>
int searchInsert(char* ch, int len, char target)
{
	int i, mid,low = 0;
	int high = len - 1;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (target == ch[mid])
			return mid;
		else if (target > ch[mid])
			low = mid + 1;
		else if (target < ch[mid])
			high = mid - 1;
	}
	return low;
}
int main9()
{
	char ch[] = "hello world";
	int len = strlen(ch);
	char target = 'h';
	int c = searchInsert(ch, len, target);
	printf("%d\n", c);
	return 0;
}