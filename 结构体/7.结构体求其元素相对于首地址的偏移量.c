#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stddef.h>
struct s
{
	char c;
	int i;
	double d;
};
int main7()
{
	printf("%d\n", offsetof(struct s,c));
	printf("%d\n", offsetof(struct s, i));
	printf("%d\n", offsetof(struct s,d));
	return 0;
}