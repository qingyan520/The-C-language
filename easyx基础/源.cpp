//1.����ͷ�ļ�
#include<graphics.h>
#include<stdio.h>
int main()
{
	printf("hello");
	//2.��������
	initgraph(1024, 480);

	//3.��Բ
	circle(50, 50, 50);
	fillcircle(50, 150, 50);
	solidcircle(50, 250, 50);
	//2.1�رմ���
	getchar();
	closegraph();
	return 0;
}