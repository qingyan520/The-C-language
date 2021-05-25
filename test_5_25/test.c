#include<stdio.h>
int main()
{
	float t= 0.0, r = 0.0;
	int n = 0;
	//t代表存款金额，r代表利率，n代表要存的年份
	printf("请移除输入存款金额，存款利率，存款年份，并用空格隔开:\n");
	scanf_s("%f%f%d", &t, &r, &n);
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += t * r;
		t = t * (1 + r);
	}
	printf("%d年后获得的利息为:%f", n,sum);

	return 0;
}
