#include<stdio.h>
int main2(void)
{
	char ch = 'a';
	int* p = &ch;
	printf("%p\n", p);
	printf("%p\n", &ch);
	printf("%d\n", sizeof(char*));
	return 0;
}
//��321λ����ϵͳ�У�����ָ���ַ��4�ֽ�
//��64λ����ϵͳ�У�����ָ���ַ����8�ֽ�