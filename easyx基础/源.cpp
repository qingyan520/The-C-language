//1.包含头文件
#include<graphics.h>
#include<stdio.h>
int main()
{
	printf("hello");
	//2.创建窗口
	initgraph(1024, 480);

	//3.画圆
	circle(50, 50, 50);
	fillcircle(50, 150, 50);
	solidcircle(50, 250, 50);
	//2.1关闭窗口
	getchar();
	closegraph();
	return 0;
}