#include<stdio.h>
int main5()
{
	int i;
	srand((unsigned int)time(NULL));
	int value = rand() % 100;
	while(1)
	{
		printf("���������֣�");
		scanf_s("%d", &i);
		if (i > value)
		{
			printf("�����������̫����");
		}
		if (i < value)
		{
			printf("�����������̫С��");
		}
		if (i == value)
		{
			printf("��ϲ���������");
			break;
		}
		printf("\n");

	}
	return 0;

}