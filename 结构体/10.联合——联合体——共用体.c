#define _CRT_SECURE_NO_WARNINGS 1
//��������һ��������Զ������ͣ����������һϵ�г�Ա��
#include<stdio.h>
union U
{
	char a;
	int i;
};
int main()
{
	union U u;
	/*union U u = { 'b' };
	printf("%c\n", u.a);
	printf("%d", u.i);*/
	printf("%d\n", sizeof(u));
	//���������͵Ĵ�С����Ϊ�����ֵ�Ĵ�С
	//������Ա��������������������ʱ����Ҫ���뵽����������������
	printf("%p\n", &u);
	printf("%p\n", &(u.a));
	printf("%p\n", &(u.i));

	return 0;
}