//实现顺序表的增删查改，动态增长
#include"SeqList.h"
void menu()
{
	printf("1.显示线性表\n");
	printf("2.显示线性表长度\n");
	printf("3.按下表查找线性表元素\n");
	printf("4.查找指定元素\n");
	printf("5.删除指定元素\n");
	printf("6.排序\n");
	printf("7.中间任意位置插入元素\n");
	printf("0.退出\n");
}
int main()
{
	srand((unsigned int)time(NULL));//添加随机数种子
	SeqList q;//创建线性表
	SeqListInit(&q);//初始化线性表
	SeqListPush_Init(&q);////初始化时产生50个1~10随机数，将其中的偶数插入到顺序表中
	int select;
	while (1)
	{
		menu();
		printf("请输入对应的选项:\n");
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			SeqListPrint(&q);
			system("pause");
			system("cls");
			break;
		case 2:
			SeqListSize(&q);
			system("pause");
			system("cls");
			break;
		case 3:
			SeqListNumberSearch(&q);
			system("pause");
			system("cls");
			break;
		case 4:
			printf("请输入要查找元素:\n");
			int x;
			scanf("%d", &x);
			SeqListFind(&q, x);
			system("pause");
			system("cls");
			break;
		case 5:
			printf("输入删除的元素:\n");
			int _x;
			scanf("%d", &_x);
			int _pos=SeqListSearch(&q, _x);
			SeqListErase(&q, _pos);
			system("pause");
			system("cls");
			break;
		case 6:
			SeqList_Sort(&q);
			system("pause");
			system("cls");
			break;
		case 7:
			printf("输入要插入的位置:\n");
			int pos;
			scanf("%d", &pos);
			printf("输入要插入的数值:\n");
			int val;
			scanf("%d", &val);
			SeqListInsert(&q, pos,val);
			system("pause");
			system("cls");
			break;
		case 0:
			printf("退出\n");
			system("pause");
			system("cls");
			exit(-1);


		}
	}

	return 0;
}