//ʵ��˳������ɾ��ģ���̬����
#include"SeqList.h"
void menu()
{
	printf("1.��ʾ���Ա�\n");
	printf("2.��ʾ���Ա���\n");
	printf("3.���±�������Ա�Ԫ��\n");
	printf("4.����ָ��Ԫ��\n");
	printf("5.ɾ��ָ��Ԫ��\n");
	printf("6.����\n");
	printf("7.�м�����λ�ò���Ԫ��\n");
	printf("0.�˳�\n");
}
int main()
{
	srand((unsigned int)time(NULL));//������������
	SeqList q;//�������Ա�
	SeqListInit(&q);//��ʼ�����Ա�
	SeqListPush_Init(&q);////��ʼ��ʱ����50��1~10������������е�ż�����뵽˳�����
	int select;
	while (1)
	{
		menu();
		printf("�������Ӧ��ѡ��:\n");
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
			printf("������Ҫ����Ԫ��:\n");
			int x;
			scanf("%d", &x);
			SeqListFind(&q, x);
			system("pause");
			system("cls");
			break;
		case 5:
			printf("����ɾ����Ԫ��:\n");
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
			printf("����Ҫ�����λ��:\n");
			int pos;
			scanf("%d", &pos);
			printf("����Ҫ�������ֵ:\n");
			int val;
			scanf("%d", &val);
			SeqListInsert(&q, pos,val);
			system("pause");
			system("cls");
			break;
		case 0:
			printf("�˳�\n");
			system("pause");
			system("cls");
			exit(-1);


		}
	}

	return 0;
}