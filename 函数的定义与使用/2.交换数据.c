#include<stdio.h>
void swap(int a, int b)
{
	int temp = a;
    a=b;
    b=temp;
	printf("�����������a=%d\n", a);
	printf("�����������b=%d\n", b);
}
int main2(void)
{
	int a = 10;
	int b = 100;
	printf("����ǰ������a=%d\n", a);
	printf("����ǰ������b=%d\n", b);
	swap(a, b);

}