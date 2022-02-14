#include"test.h"

void test1()
{
	Class cl;
	Init_Class(&cl);
	Loading_Class(&cl);
	Print_Class(&cl);
	Push_Class(&cl);
	Save_Class(&cl);


}

void test2()
{
	Class cl;
	Teacher T;
	Init_Class(&cl);
	Init_Teacher(&T);
	Print_Class(&cl);
	Print_Teacher(&T);
}

void Loading_Board()
{
	printf("正在载入教务信息管理系统,请稍后:\n");
	int i = 0;
	char bar[102];
	memset(bar, '\0', sizeof(bar));
	const char* lable = "|/-\\";
	while (i <= 100)
	{
		printf("[%-100s][%d%%][%c]\r", bar, i, lable[i % 4]);
		bar[i++] = '#';
		Sleep(100);
	}
	printf("\n");
	printf("加载完成\n");
	system("pause");
	system("cls");
}

void Show_Menu()
{
	printf("\t\t\t   教学管理系统\n");
	printf("\t\t -------------------------------\t\t\n");
	printf("\t\t|\t1.添加课程信息\t\t|\n");
	printf("\t\t|\t2.添加教师信息\t\t|\n");
	printf("\t\t|\t3.添加学生信息\t\t|\n");
	printf("\t\t|\t4.显示课程信息\t\t|\n");
	printf("\t\t|\t5.显示教师信息\t\t|\n");
	printf("\t\t|\t6.显示学生信息\t\t|\n");
	printf("\t\t|\t7.查询课程信息\t\t|\n");
	printf("\t\t|\t8.查询老师信息\t\t|\n");
	printf("\t\t|\t9.查询学生信息\t\t|\n");
	printf("\t\t|\t0.退出        \t\t|\n");
	printf("\t\t|                \t\t|\n");
	printf("\t\t -------------------------------\n");
}

int main()
{
	//test2();

	//建立老师和课程并进行初始化
	Class cl;
	Teacher T;
	Student S;
	Init_Class(&cl);
	Init_Teacher(&T);
	Init_Student(&S);
	Loading_Board();
	int select;
    while (1)
	{
		Show_Menu();
		printf("请输入选项:\n");
		scanf_s("%d", &select);
		switch (select)
		{
		case 1:
			Push_Class(&cl);
			system("pause");
			system("cls");
			break;
		case 2:
			Push_Teacher(&T,&cl);
			system("pause");
			system("cls");

			break;
		case 3:
			Push_Student(&S, &cl,&T);
			system("pause");
			system("cls");
			break;
		case 4:
			Print_Class(&cl);
			system("pause");
			system("cls");

			break;
		case 5:
			Print_Teacher(&T);
			system("pause");
			system("cls");
			break;
		case 6:
			Print_Student(&S);
			system("pause");
			system("cls");
			break;
		case 7:
			Find_Class(&cl);
			system("pause");
			system("cls");
			break;
		case 8:
			Find_Teacher(&T);
			system("pause");
			system("cls");
			break;
		case 9:
			Find_Student(&S);
			system("pause");
			system("cls");
			break;
		case 0:
			Save_Class(&cl);
			Save_Teacher(&T);
			Save_Student(&S);
			printf("信息已保存，欢迎下次使用\n");
			exit(-1);
		default:
			printf("输入错误，请重新输入:\n");
			system("pause");
			system("cls");
			break;


		}

	}
	return 0;
}