#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct S//����ṹ������
{
	int a;
	char c;
	double d;
};
void fuzhi(struct S* s)//���庯��Ϊ�ṹ�������ֵ
{
	s->a = 100;
	s->c = 'a';
	s->d = 3.14;

}
void Point3(struct S s)
{
	printf("ֵ���ݣ�a=%d  c=%c d=%lf\n", s.a, s.c, s.d);
}
void Point4(struct S* s)
{
	printf("ַ���ݣ�a=%d c=%c  d=%lf", s->a, s->c, s->d);
}
int main8()
{
	struct S s = { 0 };
	fuzhi(&s);
	//��ӡ�ṹ�����
	Point3(s);
	Point4(&s);//��ַ���ݸ���������

	return 0;

}