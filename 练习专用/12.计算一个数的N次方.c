#include<stdio.h>
int main12()
{
	int base, expoint;
	printf("�����������");
	scanf_s("%d", &base);
	printf("������ָ����");
	scanf_s("%d", &expoint);
	int result = 1;
	while (expoint != 0)
	{
		result *= base;
		--expoint;
	}
	printf("���ս��Ϊ��%d",result);
}