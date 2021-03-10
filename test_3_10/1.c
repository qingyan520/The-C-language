#include<stdio.h>
#include<stddef.h>
struct s
{
	char c1;
	int i;

}s1;
int main()
{
	printf("%d", offsetof(struct s, i));
	return 0;
}