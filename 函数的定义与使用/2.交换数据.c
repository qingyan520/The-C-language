#include<stdio.h>
void swap(int a, int b)
{
	int temp = a;
    a=b;
    b=temp;
	printf("交换后的数据a=%d\n", a);
	printf("交换后的数据b=%d\n", b);
}
int main2(void)
{
	int a = 10;
	int b = 100;
	printf("交换前的数据a=%d\n", a);
	printf("交换前的数据b=%d\n", b);
	swap(a, b);

}