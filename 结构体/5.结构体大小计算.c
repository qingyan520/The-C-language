#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct stu
{
	char a;
	int i;
	double c;
};
int main5()
{
	printf("%d", sizeof(struct stu));
	return 0;
}