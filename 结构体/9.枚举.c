#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//ö�٣�����Ҫ��������һһ�о�
enum Day//����ö������
{
	//��������
	monday,
	sunday
	//����Ĭ�ϴ�0��ʼ�������޸ģ���monday=1,sunday=9
};
//��#define��Ƚ�ö�ٸ��ӷ��㣬���

int main9()
{
	//��ֵ
	int c = monday;
	int d = sunday;
	//ֻ����ö�ٳ�����ö�ٱ�����ֵ���Ų���������Ͳ���
	enum day b = monday;
	printf("%d\n", c);
	printf("%d\n", d);
	printf("%d",b);

	return 0;
}