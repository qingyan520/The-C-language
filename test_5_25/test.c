#include<stdio.h>
int main()
{
	float t= 0.0, r = 0.0;
	int n = 0;
	//t�������r�������ʣ�n����Ҫ������
	printf("���Ƴ��������������ʣ������ݣ����ÿո����:\n");
	scanf_s("%f%f%d", &t, &r, &n);
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += t * r;
		t = t * (1 + r);
	}
	printf("%d����õ���ϢΪ:%f", n,sum);

	return 0;
}
