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
	printf("�������������Ϣ����ϵͳ,���Ժ�:\n");
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
	printf("�������\n");
	system("pause");
	system("cls");
}

void Show_Menu()
{
	printf("\t\t\t   ��ѧ����ϵͳ\n");
	printf("\t\t -------------------------------\t\t\n");
	printf("\t\t|\t1.��ӿγ���Ϣ\t\t|\n");
	printf("\t\t|\t2.��ӽ�ʦ��Ϣ\t\t|\n");
	printf("\t\t|\t3.���ѧ����Ϣ\t\t|\n");
	printf("\t\t|\t4.��ʾ�γ���Ϣ\t\t|\n");
	printf("\t\t|\t5.��ʾ��ʦ��Ϣ\t\t|\n");
	printf("\t\t|\t6.��ʾѧ����Ϣ\t\t|\n");
	printf("\t\t|\t7.��ѯ�γ���Ϣ\t\t|\n");
	printf("\t\t|\t8.��ѯ��ʦ��Ϣ\t\t|\n");
	printf("\t\t|\t9.��ѯѧ����Ϣ\t\t|\n");
	printf("\t\t|\t0.�˳�        \t\t|\n");
	printf("\t\t|                \t\t|\n");
	printf("\t\t -------------------------------\n");
}

int main()
{
	//test2();

	//������ʦ�Ϳγ̲����г�ʼ��
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
		printf("������ѡ��:\n");
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
			printf("��Ϣ�ѱ��棬��ӭ�´�ʹ��\n");
			exit(-1);
		default:
			printf("�����������������:\n");
			system("pause");
			system("cls");
			break;


		}

	}
	return 0;
}