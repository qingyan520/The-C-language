#include"test.h"

//�γ����ݲ�ʽ

//1.�Կγ̽��г�ʼ��
void Init_Class(Class* cl)
{
	cl->Class_capacity = 3;
	cl->Class_size = 0;
	cl->Data = (Class_Info*)malloc(sizeof(Class_Info) * (cl->Class_capacity));
	if (cl->Data == NULL)
	{
		printf("��ʼ��ʧ��\n");
		exit(-1);
	}
	Loading_Class(cl);
}


//�жϿռ��Ƿ��㹻������ռ䲻�������
void Add_Class_Capacity(Class*cl)
{
	if (cl->Class_capacity == cl->Class_size)
	{
		Class_Info* ptr = (Class_Info*)realloc(cl->Data, sizeof(Class_Info) * (cl->Class_capacity + 2));
		if (ptr == NULL)
		{
			printf("����ʧ��,�޷������������\n");
			
		}
		else
		{
			cl->Data = ptr;
			cl->Class_capacity += 2;
		}
	}
}


//�жϿγ̺��Ƿ����ظ���
int _Search_ClassNumber(Class* cl, int x)
{
	for (int i = 0; i < cl->Class_size; i++)
	{
		if (x == cl->Data[i].Class_Number)
		{
			return i;
		}
	}
	return -1;
}


//2.��������
void Push_Class(Class* cl)
{
	//1.����ռ䲻���������ݣ����ݳɹ����������������
	Add_Class_Capacity(cl);
	while (1)
	{
		printf("������γ̺�(�γ̺ű������1):\n");
		scanf("%d", &cl->Data[cl->Class_size].Class_Number);//�γ̺�
		int ret = _Search_ClassNumber(cl, cl->Data[cl->Class_size].Class_Number);
		if (cl->Data[cl->Class_size].Class_Number <=1)
		{
			printf("�γ̺ű������1������������\n");
		}
		else if(cl->Data[cl->Class_size].Class_Number>1&&ret==-1)
		{
			break;
		}
		else
		{
			printf("�γ̺��ظ�������������γ̺�\n");
		}
	}
	printf("������γ�����:\n");
	scanf("%s", &cl->Data[cl->Class_size].Class_Name);//�γ�����
	printf("������γ̿�ʼʱ��:\n");
	scanf("%s", &cl->Data[cl->Class_size].Class_StartDate);//��ʼʱ��
	printf("������γ̽���ʱ��:\n");
	scanf("%s", &cl->Data[cl->Class_size].Class_EndDate);//����ʱ��


	char str[5] = "����";
	for (int i = 0; i < 5; i++)
	{
		cl->Data[cl->Class_size].Class_Teacher[i] = str[i];
	}
	cl->Data[cl->Class_size].Class_Teacher[99] = '\0';


	cl->Class_size++;

	


}


//3.��ӡ�γ���Ϣ
void Print_Class(Class* cl)
{
	printf("�γ���Ϣ������ʾ:\n");
	printf("--------------------------------------------------------------------------------------------------------\n");
	printf("                                          �γ���Ϣ                                                      |\n");
	printf("--------------------------------------------------------------------------------------------------------\n");
	printf("%-15s\t|%-20s\t|%-20s\t|%-20s\t|%-15s|\n", "�γ̺�", "�γ�����", "�γ̿�ʼ����", "�γ̽�������", "������ʦ");
	printf("--------------------------------------------------------------------------------------------------------\n");
	for (int i = 0; i < cl->Class_size; i++)
	{
		printf("%-15d\t|%-20s\t|%-20s\t|%-20s\t|%-15s|\n", cl->Data[i].Class_Number, cl->Data[i].Class_Name, cl->Data[i].Class_StartDate, cl->Data[i].Class_EndDate,cl->Data[i].Class_Teacher);
		printf("--------------------------------------------------------------------------------------------------------\n");
	}
}


//4.���γ���Ϣ���浽�ļ���ȥ
void Save_Class(Class* cl)
{
	//���ļ�
	FILE* pfOut = fopen("Class.txt", "wb");
	if (pfOut == NULL)
	{
		printf("Save_Class::%s\n", strerror(errno));
		return;
	}
	//д����
	int i = 0;
	for (i = 0; i <cl->Class_size; i++)
	{
		fwrite(cl->Data + i, sizeof(Class_Info), 1, pfOut);
	}

	//�ر��ļ�
	fclose(pfOut);
	pfOut = NULL;
}


//5.���ļ����м���
void Loading_Class(Class* cl)
{
	//���ļ�
	FILE* pfIn = fopen("Class.txt", "rb");
	if (pfIn == NULL)
	{
		printf("Loading_Class::%s\n", strerror(errno));
		return;
	}
	//���ļ����ݣ��Ž�ͨѶ¼
	Class_Info tmp = { 0 };
	while (fread(&tmp, sizeof(Class_Info), 1, pfIn))
	{
		//����Ƿ�Ҫ����
		Add_Class_Capacity(cl);
		//�洢Ԫ��
		cl->Data[cl->Class_size] = tmp;
		cl->Class_size++;
	}

	//�ر��ļ�
	fclose(pfIn);
	pfIn = NULL;
}

//6.����ָ���γ�
void Find_Class(Class* cl)
{
	int Class_Number;
	char Class_Name[100];

	int select = 0;
	while (1)
	{
		printf("�밴������ѡ��ѡ���Ӧ�Ĺ���:\n");
		printf("1.���տγ̺Ž��в�ѯ\n2.���տγ������в�ѯ\n");
		printf("��������Ӧ�������Զ�Ӧ���:\n");
		scanf("%d", &select);
		if (select == 1) //���տγ̺Ž��в�ѯ
		{
			printf("������Ҫ��ѯ�Ŀγ̺�:\n");
			scanf("%d", &Class_Number);
			int ret = Search_ClassNumber(cl, Class_Number);
			if (ret == -1)
			{
				printf("��δ�ҵ��ÿ�Ŀ\n");
			}
			else
			{
				printf("�γ���Ϣ������ʾ:\n");
				printf("--------------------------------------------------------------------------------------------------------\n");
				printf("                                          �γ���Ϣ                                                      |\n");
				printf("--------------------------------------------------------------------------------------------------------\n");
				printf("%-15s\t|%-20s\t|%-20s\t|%-20s\t|%-15s|\n", "�γ̺�", "�γ�����", "�γ̿�ʼ����", "�γ̽�������", "������ʦ");
				printf("--------------------------------------------------------------------------------------------------------\n");
				printf("%-15d\t|%-20s\t|%-20s\t|%-20s\t|%-15s|\n", cl->Data[ret].Class_Number, cl->Data[ret].Class_Name, cl->Data[ret].Class_StartDate, cl->Data[ret].Class_EndDate, cl->Data[ret].Class_Teacher);
				printf("--------------------------------------------------------------------------------------------------------\n");
			}
			break;
		}
		else if (select == 2)
		{
			printf("������Ҫ��ѯ�Ŀγ���:\n");
			scanf("%s", Class_Name);
			int ret = Search_ClassName(cl, Class_Name);
			if (ret == -1)
			{
				printf("��δ�ҵ��ÿ�Ŀ\n");
			}
			else
			{
				printf("�γ���Ϣ������ʾ:\n");
				printf("--------------------------------------------------------------------------------------------------------\n");
				printf("                                          �γ���Ϣ                                                      |\n");
				printf("--------------------------------------------------------------------------------------------------------\n");
				printf("%-15s\t|%-20s\t|%-20s\t|%-20s\t|%-15s|\n", "�γ̺�", "�γ�����", "�γ̿�ʼ����", "�γ̽�������", "������ʦ");
				printf("--------------------------------------------------------------------------------------------------------\n");
				printf("%-15d\t|%-20s\t|%-20s\t|%-20s\t|%-15s|\n", cl->Data[ret].Class_Number, cl->Data[ret].Class_Name, cl->Data[ret].Class_StartDate, cl->Data[ret].Class_EndDate, cl->Data[ret].Class_Teacher);
				printf("--------------------------------------------------------------------------------------------------------\n");
			}
			break;
		}
		else
		{
			printf("�������,����������\n");
		}
	}
}



































//�����γ̺��Ƿ���ڣ�������ھͷ��ظÿγ̺�����λ�õ��±�
int Search_ClassNumber(Class* cl, int ClassNumber)
{
	int i = 0;
	for (; i < cl->Class_size; i++)
	{
		if (cl->Data[i].Class_Number == ClassNumber)
		{
			return i;
		}
	}
	return -1;
}


//���տγ�����������Ӧ�Ŀγ��Ƿ����
int Search_ClassName(Class* cl, char ClassName[])
{
	for (int i = 0; i < cl->Class_size; i++)
	{
		if (strcmp(cl->Data[i].Class_Name, ClassName) == 0)
		{
			return i;
		}
	}
	return -1;
}



//�����γ���Ϣ
void Copy_Info(Teacher* T, Class* cl, int x)
{
	for (size_t i = 0; i <100; i++)
	{
		cl->Data[x].Class_Teacher[i] = '\0';
	}


	for (size_t i = 0; i < strlen(T->Data[T->Teacher_size].Teacher_Name); i++)
	{
		cl->Data[x].Class_Teacher[i] = T->Data[T->Teacher_size].Teacher_Name[i];
	}
	cl->Data[x].Class_Teacher[99] = '\0';

	//T->Data[T->Teacher_size].Teacher_ClassINfo[T->Data[T->Data]].Class_Number = cl->Data[x].Class_Number;//�γ̺�

	T->Data[T->Teacher_size].Teacher_ClassINfo[T->Data[T->Teacher_size].Teacher_iClass].Class_Number = cl->Data[x].Class_Number;//�γ̺�

	strcpy(T->Data[T->Teacher_size].Teacher_ClassINfo[T->Data[T->Teacher_size].Teacher_iClass].Class_Name, cl->Data[x].Class_Name);//�γ�����

	strcpy(T->Data[T->Teacher_size].Teacher_ClassINfo[T->Data[T->Teacher_size].Teacher_iClass].Class_Teacher, cl->Data[x].Class_Teacher);//������ʦ

	strcpy(T->Data[T->Teacher_size].Teacher_ClassINfo[T->Data[T->Teacher_size].Teacher_iClass].Class_StartDate, cl->Data[x].Class_StartDate);//��ʼʱ��

	strcpy(T->Data[T->Teacher_size].Teacher_ClassINfo[T->Data[T->Teacher_size].Teacher_iClass].Class_EndDate, cl->Data[x].Class_EndDate);//����ʱ��

	T->Data[T->Teacher_size].Teacher_iClass++;


}


//���ҽ�ʦ���Ƿ����
int Search_TeacherNumber(Teacher* T,int x)
{
	for (int i = 0; i < T->Teacher_size; i++)
	{
		if (x == T->Data[i].Teacher_Number)
		{
			return i;
		}
	}
	return -1;
}


//1.��ʼ����ʦ��
void Init_Teacher(Teacher*T)
{
	T->Teacher_capacity = 3;
	T->Teacher_size = 0;
	//T->Teacher_iClass = 0;
//	T
	T->Data = (Teacher_Info*)malloc(sizeof(Teacher_Info) * (T->Teacher_capacity));
	if (T->Data == NULL)
	{
		printf("��ʼ��ʧ��\n");
		exit(-1);
	}
	for (int i = 0; i < T->Teacher_capacity; i++)
	{
		T->Data[i].Teacher_iClass = 0;
		T->Data[i].Teacher_Class_Person = 0;
	}
	Loading_Teacher(T);
}


//�������ܣ�����
void Add_Teacher_Capacity(Teacher* T)
{
	if (T->Teacher_size == T->Teacher_capacity)
	{
		Teacher_Info* ptr = (Teacher_Info*)realloc(T->Data, sizeof(Teacher_Info) * (T->Teacher_capacity + 2));
		if (ptr == NULL)
		{
			printf("����ʧ��\n");
			exit(-1);
		}
		else
		{
			T->Data = ptr;
			for (int i = T->Teacher_capacity; i < T->Teacher_capacity + 2; i++)
			{
				T->Data[i].Teacher_iClass = 0;
				T->Data[i].Teacher_Class_Person = 0;
			}
			T->Teacher_capacity += 2;

		}
	}
}

//2.������Ϣ
//������ʦ��Ϣ
void Push_Teacher(Teacher* T, Class* cl)
{
	Add_Teacher_Capacity(T);
	while (1)
	{
		printf("�������ʦ��:\n");
		scanf("%d", &T->Data[T->Teacher_size].Teacher_Number);//�����ʦ��
		int ret = Search_TeacherNumber(T, T->Data[T->Teacher_size].Teacher_Number);
		if (T->Data[T->Teacher_size].Teacher_Number <= 1)
		{
			printf("��ʦ�ű���Ϊ����1������������������\n");
		}
		else if (T->Data[T->Teacher_size].Teacher_Number > 1 && ret == -1)
		{
			break;
		}
		else
		{
			printf("��ʦ���ظ�������������\n");
		}

	}

	printf("�������ʦ����:\n");
	scanf("%s", T->Data[T->Teacher_size].Teacher_Name);//��������
	printf("�������ʦ�Ա�:\n");
	scanf("%s", T->Data[T->Teacher_size].Teacher_Sex);//�Ա�
	printf("�������ʦѧ��:\n");
	scanf("%s", T->Data[T->Teacher_size].Teacher_educational_background);//��ʦ��ѧ��
	printf("�������ʦ����:\n");
	scanf("%d", &T->Data[T->Teacher_size].Teacher_Age);//��ʦ������
	printf("��������ʦ�ĵ绰:\n");
	scanf("%s", T->Data[T->Teacher_size].Teacher_TelephoneNumber);//��ʦ�ĵ绰
	printf("��������пγ���ϢΪ��ʦ����ʺϵĿγ�:\n");
	Print_Class(cl);
	printf("������γ̺Ż��߿γ�����¼����ʦ��Ҫ���ڿ�Ŀ��¼��:\n");
	printf("1.���տγ̺Ų�ѯ\n2.���տγ�����ѯ:\n");
	int Teacher_ClassNumber;//��ʦ�Ŀγ̺�
	char Teacher_ClassName[20];//��ʦ��Ҫ�̵Ŀγ�����
	int select;

	while (1)
	{
		scanf("%d", &select);
		if (select == 1)//���տγ̺Ž�������
		{
			printf("������γ̺Ž��в�ѯ:");
			scanf("%d", &Teacher_ClassNumber);
			int ret = Search_ClassNumber(cl, Teacher_ClassNumber);

			//ret==-1˵���ø����ݿ���û�иÿγ̵���Ϣ����ʱ��ѯ���Ƿ񽫸ÿγ���ӵ��γ���Ϣ��ȥ
			if (ret == -1)
			{
				printf("�ÿγ���ʱû����ϵͳ�У���¼��ϵͳ:\n");
				Push_Class(cl);
			}
			ret = Search_ClassNumber(cl, Teacher_ClassNumber);
			
			//���ھ�Ҫ¼��γ���Ϣ��
			//�ȸı������ʦ
			//�����γ���Ϣ
			Copy_Info(T, cl, ret);


			break;
		}
		//Teacher_Age	1	int

		if (select == 2)//���տγ������в�ѯ
		{
			scanf("%s", Teacher_ClassName);

			//���տγ�����������Ӧ�γ̵����
			int ret = Search_ClassName(cl, Teacher_ClassName);
			if (ret == -1)
			{
				printf("ϵͳ��û�иÿγ̣���¼��ϵͳ:\n");
				Push_Class(cl);
			}
			Copy_Info(T, cl, ret);

			break;
		}
		printf("�����������������:\n");
	}
	T->Teacher_size++;
	printf("�������\n");
}





//3.��ӡ��ʦ��Ϣ
void Print_Teacher(Teacher* T)
{
	printf("��ʦ�������ڿγ���Ϣ������ʾ:\n");
	printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	printf("                                                             ��ʦ��Ϣ                                                                                      |\n");
	printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	printf("%-10s|%-11s|%-5s|%-8s|%-5s|%-15s|%-10s|%-20s|%-20s|%-20s|%-10s|%-10s|\n", 
		"��ʦ��", "��ʦ����", "�Ա�", "ѧ��", "����","�绰����", "�γ̺�", "���ڿγ�����", "�γ̿�ʼ����", "�γ̽�������","��ѡ����","��ʱ");
	printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	for (int i = 0; i < T->Teacher_size; i++)
	{
		int class_time = 2;
		printf("%-10d|%-11s|%-5s|%-8s|%-5d|%-15s|", T->Data[i].Teacher_Number,//��ʦ��
			T->Data[i].Teacher_Name,//����
			T->Data[i].Teacher_Sex,//�Ա�
			T->Data[i].Teacher_educational_background,//ѧ��
			T->Data[i].Teacher_Age,//����
			T->Data[i].Teacher_TelephoneNumber//�绰
			//T->Data[i].Teacher_Class_Person//ѡ���ſƵ�����
		);
		for (int j = 0; j < T->Data[i].Teacher_iClass; j++)
		{
			printf("%-10d|%-20s|%-20s|%-20s|", T->Data[i].Teacher_ClassINfo[j].Class_Number,//�γ̺�
				T->Data[i].Teacher_ClassINfo[j].Class_Name,//�γ���
				//T->Data[i].Teacher_ClassINfo[j].Class_Teacher,//������ʦ
				T->Data[i].Teacher_ClassINfo[j].Class_StartDate,//�γ̿�ʼʱ��
				T->Data[i].Teacher_ClassINfo[j].Class_EndDate//����ʱ��
			);
		}
		printf("%-10d|", T->Data[i].Teacher_Class_Person);
		if (T->Data[i].Teacher_Class_Person > 3&&T->Data[i].Teacher_Class_Person%3==0)
		{
			class_time= class_time + T->Data[i].Teacher_Class_Person / 3 - 1;
		}
		if (T->Data[i].Teacher_Class_Person > 3 && T->Data[i].Teacher_Class_Person % 3 != 0)
		{
			class_time = class_time + T->Data[i].Teacher_Class_Person / 3;
		}
		printf("%-10d|\n", class_time);
		printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	}
}


//4.����ʦ��Ϣ���浽�ļ���ȥ
void Save_Teacher(Teacher* T)
{
	
		//���ļ�
		FILE* pfOut = fopen("Teacher.txt", "wb");
		if (pfOut == NULL)
		{
			printf("Save_Teacher::%s\n", strerror(errno));
			return;
		}
		//д����
		int i = 0;
		for (i = 0; i < T->Teacher_size; i++)
		{
			fwrite(T->Data+i, sizeof(Teacher_Info), 1, pfOut);
		}

		//�ر��ļ�
		fclose(pfOut);
		pfOut = NULL;
}

//5.����ʦ��Ϣ���м���
void Loading_Teacher(Teacher* T)
{
	//���ļ�
	FILE* pfIn = fopen("Teacher.txt", "rb");
	if (pfIn == NULL)
	{
		printf("Loading_Teacher::%s\n", strerror(errno));
		return;
	}
	//���ļ����ݣ���ʦ��Ϣ����
	Teacher_Info tmp = { 0 };
	while (fread(&tmp, sizeof(Teacher_Info), 1, pfIn))
	{
		//����Ƿ�Ҫ����
		Add_Teacher_Capacity(T);
		//�洢Ԫ��
		T->Data[T->Teacher_size] = tmp;
		T->Teacher_size++;
	}

	//�ر��ļ�
	fclose(pfIn);
	pfIn = NULL;
}


//6.��ѯָ����ʦ
void Find_Teacher(Teacher* T)
{
	int Teacher_Number;
	char Teacher_Name[100];
	int select = 0;
	while (1)
	{
		printf("�밴������ѡ��ѡ���Ӧ�Ĺ���:\n");
		printf("1.���ս�ʦ�Ž��в�ѯ\n2.���ս�ʦ�����в�ѯ\n");
		printf("��������Ӧ�������Զ�Ӧ���:\n");
		scanf("%d", &select);
		if (select == 1)
		{
			printf("�������ʦ�Ž��в�ѯ:\n");
			scanf("%d", &Teacher_Number);
			int ret = Search_TeacherNumber(T, Teacher_Number);
			if (ret == -1)
			{
				printf("��δ�ҵ�����ʦ\n");
			}
			else
			{
				printf("��ʦ�������ڿγ���Ϣ������ʾ:\n");
				printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
				printf("                                                             ��ʦ��Ϣ                                                                                      |\n");
				printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
				printf("%-10s|%-11s|%-5s|%-8s|%-5s|%-15s|%-10s|%-20s|%-20s|%-20s|%-10s|%-10s|\n",
					"��ʦ��", "��ʦ����", "�Ա�", "ѧ��", "����", "�绰����", "�γ̺�", "���ڿγ�����", "�γ̿�ʼ����", "�γ̽�������", "��ѡ����", "��ʱ");
				printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
				int class_time = 2;
				printf("%-10d|%-11s|%-5s|%-8s|%-5d|%-15s|", T->Data[ret].Teacher_Number,//��ʦ��
					T->Data[ret].Teacher_Name,//����
					T->Data[ret].Teacher_Sex,//�Ա�
					T->Data[ret].Teacher_educational_background,//ѧ��
					T->Data[ret].Teacher_Age,//����
					T->Data[ret].Teacher_TelephoneNumber//�绰
					//T->Data[i].Teacher_Class_Person//ѡ���ſƵ�����
				);
				for (int j = 0; j < T->Data[ret].Teacher_iClass; j++)
				{
					printf("%-10d|%-20s|%-20s|%-20s|", T->Data[ret].Teacher_ClassINfo[j].Class_Number,//�γ̺�
						T->Data[ret].Teacher_ClassINfo[j].Class_Name,//�γ���
						//T->Data[i].Teacher_ClassINfo[j].Class_Teacher,//������ʦ
						T->Data[ret].Teacher_ClassINfo[j].Class_StartDate,//�γ̿�ʼʱ��
						T->Data[ret].Teacher_ClassINfo[j].Class_EndDate//����ʱ��
					);
				}
				printf("%-10d|", T->Data[ret].Teacher_Class_Person);
				if (T->Data[ret].Teacher_Class_Person > 3 && T->Data[ret].Teacher_Class_Person % 3 == 0)
				{
					class_time = class_time + T->Data[ret].Teacher_Class_Person / 3 - 1;
				}
				if (T->Data[ret].Teacher_Class_Person > 3 && T->Data[ret].Teacher_Class_Person % 3 != 0)
				{
					class_time = class_time + T->Data[ret].Teacher_Class_Person / 3;
				}
				printf("%-10d|\n", class_time);
				printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
			}
			break;
		}
		else if (select == 2)
		{
			printf("�������ʦ�������в�ѯ:\n");
			scanf("%s", &Teacher_Name);
			int ret = Search_TeacherName(T, Teacher_Name);
			if (ret == -1)
			{
				printf("��δ�ҵ�����ʦ\n");
			}
			else
			{
				printf("��ʦ�������ڿγ���Ϣ������ʾ:\n");
				printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
				printf("                                                             ��ʦ��Ϣ                                                                                      |\n");
				printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
				printf("%-10s|%-11s|%-5s|%-8s|%-5s|%-15s|%-10s|%-20s|%-20s|%-20s|%-10s|%-10s|\n",
					"��ʦ��", "��ʦ����", "�Ա�", "ѧ��", "����", "�绰����", "�γ̺�", "���ڿγ�����", "�γ̿�ʼ����", "�γ̽�������", "��ѡ����", "��ʱ");
				printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
				int class_time = 2;
				printf("%-10d|%-11s|%-5s|%-8s|%-5d|%-15s|", T->Data[ret].Teacher_Number,//��ʦ��
					T->Data[ret].Teacher_Name,//����
					T->Data[ret].Teacher_Sex,//�Ա�
					T->Data[ret].Teacher_educational_background,//ѧ��
					T->Data[ret].Teacher_Age,//����
					T->Data[ret].Teacher_TelephoneNumber//�绰
					//T->Data[i].Teacher_Class_Person//ѡ���ſƵ�����
				);
				for (int j = 0; j < T->Data[ret].Teacher_iClass; j++)
				{
					printf("%-10d|%-20s|%-20s|%-20s|", T->Data[ret].Teacher_ClassINfo[j].Class_Number,//�γ̺�
						T->Data[ret].Teacher_ClassINfo[j].Class_Name,//�γ���
						//T->Data[i].Teacher_ClassINfo[j].Class_Teacher,//������ʦ
						T->Data[ret].Teacher_ClassINfo[j].Class_StartDate,//�γ̿�ʼʱ��
						T->Data[ret].Teacher_ClassINfo[j].Class_EndDate//����ʱ��
					);
				}
				printf("%-10d|", T->Data[ret].Teacher_Class_Person);
				if (T->Data[ret].Teacher_Class_Person > 3 && T->Data[ret].Teacher_Class_Person % 3 == 0)
				{
					class_time = class_time + T->Data[ret].Teacher_Class_Person / 3 - 1;
				}
				if (T->Data[ret].Teacher_Class_Person > 3 && T->Data[ret].Teacher_Class_Person % 3 != 0)
				{
					class_time = class_time + T->Data[ret].Teacher_Class_Person / 3;
				}
				printf("%-10d|\n", class_time);
				printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
			}
			break;
		}
		else
		{
			printf("�����������������\n");
		}
	}
}








//1.��ʼ��ѧ����Ϣ
void Init_Student(Student* S)
{
	S->Student_capacity = 3;
	S->Student_size = 0;
	S->Data = (Student_Info*)malloc(sizeof(Student_Info) * (S->Student_capacity));
	if (S->Data == NULL)
	{
		printf("��ʼ��ʧ��\n");
		exit(-1);
	}

	for (int i = 0; i < S->Student_capacity; i++)
	{
		S->Data[i].j_Class = 0;
	}
	Loading_Student(S);
}



//2.�����Ϣ


//2.1����
void Add_Student_Capacity(Student* S)
{
	if (S->Student_capacity == S->Student_size)
	{
		Student_Info* ptr = realloc(S->Data, sizeof(Student_Info) * (S->Student_capacity + 2));
		if (ptr == NULL)
		{
			printf("����ʧ��\n");
			exit(-1);
		}
		else
		{
			S->Data = ptr;
			for (int i = S->Student_size; i < S->Student_capacity + 2; i++)
			{
				S->Data[i].j_Class = 0;
			}
			S->Student_capacity += 2;
		}
	}

}

//2.2��Ѱ�γ̺��Ƿ���ڣ�����γ̺Ŵ��ڣ��ÿγ̵���ʦ����δ֪�Ļ��������ʦ�������ʦ��δ֪�Ļ�˵���ÿγ̻�û�˰��ſ�����ʦ���߸ÿγ���ʦ��û��ȷ�ϸÿγ�����ϵ��ʦ
//����γ̺Ų����ڣ�˵���ÿγ�û��¼��ϵͳ�У���������Ӹÿγ�

int Search_StudentClassNumber(Student* S, Class* cl,int x)
{
	for (int i = 0; i < cl->Class_size; i++)
	{
		if (cl->Data[i].Class_Number == x)
		{
			return i;
		}
	}
	return -1;
}


//2.3�γ̺Ŵ��ں󽫿γ���Ϣ¼��ѧ��ϵͳ
void Push_Student_Class(Student* S, Class* cl, int x)
{
	S->Data[S->Student_size].Student_ClassInfo[S->Data[S->Student_size].j_Class].Class_Number = cl->Data[x].Class_Number;  //¼��ѧ���Ŀγ̺�

	strcpy(S->Data[S->Student_size].Student_ClassInfo[S->Data[S->Student_size].j_Class].Class_Name, cl->Data[x].Class_Name);  //¼��ѧ�����Ͽγ̵Ŀγ�����

	strcpy(S->Data[S->Student_size].Student_ClassInfo[S->Data[S->Student_size].j_Class].Class_Teacher, cl->Data[x].Class_Teacher);//¼��ÿγ̵���ʦ

	strcpy(S->Data[S->Student_size].Student_ClassInfo[S->Data[S->Student_size].j_Class].Class_StartDate, cl->Data[x].Class_StartDate);//¼��ÿγ̵Ŀ�ʼʱ��

	strcpy(S->Data[S->Student_size].Student_ClassInfo[S->Data[S->Student_size].j_Class].Class_EndDate, cl->Data[x].Class_EndDate);  //¼��γ̵Ľ�����Ϣ

	S->Data[S->Student_size].j_Class++;

}


//2.4���տγ����ƽ���¼��
int Searche_StudentClassName(Student* S, Class* cl, char StudentClassName[])
{
	for (int i = 0; i < cl->Class_size; i++)
	{
		if (strcmp(cl->Data[i].Class_Name, StudentClassName) == 0)
		{
			return i;
		}
	}
	return -1;
}

//2.5��ѯ��ʦ�����Ƿ���ڣ�����ʦ�γ�������++
int Search_TeacherName(Teacher* T, char name[])
{
	for (int i = 0; i < T->Teacher_size; i++)
	{
		if (strcmp(T->Data[i].Teacher_Name, name) == 0)
			return i;
	}
	return -1;
}

void Push_Student(Student* S, Class* cl,Teacher*T)
{
	//1.�ռ䲻����������
	Add_Student_Capacity(S);

	//2.�ɹ�֮���������������
	while (1)
	{
		printf("������ѧ��ѧ��(ѧ�ű���Ϊ����1������):\n");
		scanf("%d", &S->Data[S->Student_size].Student_Number);
		if (S->Data[S->Student_size].Student_Number > 1)
		{
			break;
		}
		else
		{
			printf("ѧ��ѧ�ű���Ϊ���ڵ�����������������\n");
		}
	}
	printf("������ѧ������:\n");
	scanf("%s", S->Data[S->Student_size].Student_Name);

	//3.¼������γ���Ϣ
	printf("��������пγ���ϢΪѧ������ʺϵĿγ�:\n");
	Print_Class(cl);
	printf("������γ̺�/�γ�����¼��γ�:\n");
	printf("1.���տγ̺�¼��\n2.���տγ�����¼��:\n");

	int Student_ClassNumber;

	char Student_ClassName[30];

	int select;
	char str[5] = "����";
	while (1)
	{
	
		scanf("%d", &select);
		if (select == 1)
		{
			while (1)
			{
				printf("������γ̺Ž���¼��:\n");
				scanf("%d", &Student_ClassNumber);

				int ret = Search_StudentClassNumber(S, cl, Student_ClassNumber);
				//˵�����ݿγ̺ſ�����Ѱ���ÿγ�
				if (ret != -1)
				{
					//˵���ÿγ��Ѿ�����ʦ����������,˵������ʦ�ˣ���ô������Ӧ��ʦ����Ӧ�����
					if (strcmp(cl->Data[ret].Class_Teacher, str) != 0)
					{
						//��ʱ��ӿγ�
						Push_Student_Class(S, cl, ret);
						S->Student_size++;

						//������ʦ�����ֲ�����ʦ��Ӧ�����
						int res=Search_TeacherName(T, cl->Data[ret].Class_Teacher);
						T->Data[res].Teacher_Class_Person++;

						break;

					}
					//˵���ÿγ̻�û����ʦ��������/����ȷ��
					else
					{
						printf("�ÿγ̻�û�п�����ʦ/������ʦ��û��¼��ϵͳ������ϵ��ʦ/���ؽ��д�����ѡ�������γ�\n");
					}
				}

				//˵���γ̱���û�иÿγ�
				else
				{
					printf("�ÿγ���δ¼��ϵͳ�������¿γ̺Ž��в�ѯ¼��\n");
				}

			}


			break;
		}

		else if (select == 2)
		{
			while (1)
			{
				printf("������γ����ƽ���¼��:\n");
				scanf("%s", Student_ClassName);
				int ret = Searche_StudentClassName(S, cl, Student_ClassName);

				//˵���γ̱��к��иÿγ�
				if (ret != -1)
				{
					if (strcmp(cl->Data[ret].Class_Teacher, str) != 0)
					{
						Push_Student_Class(S, cl, ret);
						S->Student_size++;
						int res = Search_TeacherName(T, cl->Data[ret].Class_Teacher);
						T->Data[res].Teacher_Class_Person++;
						break;
					}
					else
					{
						printf("�ÿγ̻�û�п�����ʦ/������ʦ��û��¼��ϵͳ������ϵ��ʦ/���ؽ��д�����ѡ�������γ�\n");
					}
				}
				else
				{
					printf("�ÿγ���δ¼��ϵͳ������������γ����ƽ��в�ѯ¼��");
				}
			}


			break;
		}
		else
		{
			printf("�����������������\n");
			
		}
	}
	printf("��ѧ��¼��ϵͳ�ɹ�\n");
}


//3.��ӡѧ����Ϣ
void Print_Student(Student* S)
{
	printf("ѧ����Ϣ������ʾ:\n");
	printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
	printf("                                                         ѧ����Ϣ                                                                  |\n");
	printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
	printf("%-10s|%-20s|%-15s|%-20s|%-20s|%-20s|%-20s|\n", "ѧ��ѧ��", "ѧ������", "�γ̺�", "��ѡ�γ�����", "������ʦ", "�γ̿�ʼ����", "�γ̽�������");
	printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
	for (int i = 0; i < S->Student_size; i++)
	{
		//��ӡѧ��������Ϣ
		printf("%-10d|%-20s|", S->Data[i].Student_Number, S->Data[i].Student_Name);

		//��ӡ��ѧ���γ̵Ļ�����Ϣ
		for (int j = 0; j < S->Data[i].j_Class; j++)
		{
			printf("%-15d|%-20s|%-20s|%-20s|%-20s|", S->Data[i].Student_ClassInfo[j].Class_Number,//��ѧ���Ŀγ̺š�
				S->Data[i].Student_ClassInfo[j].Class_Name,//��ѧ���Ŀγ�����
				S->Data[i].Student_ClassInfo[j].Class_Teacher,//��ѧ���γ̵���ʦ
				S->Data[i].Student_ClassInfo[j].Class_StartDate,//���ſγ̿�ʼʱ��
				S->Data[i].Student_ClassInfo[j].Class_EndDate//���ſγ̽���ʱ��
			);
		}

		printf("\n");
		printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
	}
}



//4.��ѧ����Ϣ���浽�ļ���ȥ
void Save_Student(Student* S)
{
	//���ļ�
	FILE* pfOut = fopen("Student.txt", "wb");
	if (pfOut == NULL)
	{
		printf("Save_Student::%s\n", strerror(errno));
		return;
	}
	//д����
	int i = 0;
	for (i = 0; i < S->Student_size; i++)
	{
		fwrite(S->Data+i, sizeof(Student_Info), 1, pfOut);
	}

	//�ر��ļ�
	fclose(pfOut);
	pfOut = NULL;
}



//5.����ѧ����Ϣ
void Loading_Student(Student* S)
{
	//���ļ�
	FILE* pfIn = fopen("Student.txt", "rb");
	if (pfIn == NULL)
	{
		printf("Loading_Student::%s\n", strerror(errno));
		return;
	}
	//���ļ����ݣ�ѧ����Ϣ����
	Student_Info tmp = { 0 };
	while (fread(&tmp, sizeof(Student_Info), 1, pfIn))
	{
		//����Ƿ�Ҫ����
		Add_Student_Capacity(S);
		//�洢Ԫ��
		S->Data[S->Student_size] = tmp;
		S->Student_size++;
	}

	//�ر��ļ�
	fclose(pfIn);
	pfIn = NULL;
}


//��ѯѧ���Ƿ����
int Search_StudentNumber(Student* S, int x)
{
	for (int i = 0; i < S->Student_size; i++)
	{
		if (S->Data[i].Student_Number == x)
		{
			return i;
		}
	}
	return -1;
}

//��ѯ�����Ƿ����
int Search_StudentName(Student* S, char Name[])
{
	for (int i = 0; i < S->Student_size; i++)
	{
		if (strcmp(S->Data[i].Student_Name, Name) == 0)
		{
			return i;
		}
	}
	return -1;
}


//6.��ѯָ��ѧ��
void Find_Student(Student* S)
{
	int Student_Number;
	char Student_Name[100];
	int select = 0;
	while (1)
	{
		printf("�밴������ѡ��ѡ���Ӧ�Ĺ���:\n");
		printf("1.����ѧ�Ž��в�ѯ\n2.����ѧ���������в�ѯ\n");
		printf("��������Ӧ�������Զ�Ӧ���:\n");
		scanf("%d", &select);
		if (select == 1)
		{
			printf("������Ҫ��ѯѧ����ѧ��:\n");
			scanf("%d", &Student_Number);
			int ret = Search_StudentNumber(S, Student_Number);
			if (ret == -1)
			{
				printf("��δ�ҵ���ѧ��\n");
			}
			else
			{
				printf("ѧ����Ϣ������ʾ:\n");
				printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
				printf("                                                         ѧ����Ϣ                                                                  |\n");
				printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
				printf("%-10s|%-20s|%-15s|%-20s|%-20s|%-20s|%-20s|\n", "ѧ��ѧ��", "ѧ������", "�γ̺�", "��ѡ�γ�����", "������ʦ", "�γ̿�ʼ����", "�γ̽�������");
				printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
				printf("%-10d|%-20s|", S->Data[ret].Student_Number, S->Data[ret].Student_Name);

				//��ӡ��ѧ���γ̵Ļ�����Ϣ
				for (int j = 0; j < S->Data[ret].j_Class; j++)
				{
					printf("%-15d|%-20s|%-20s|%-20s|%-20s|", S->Data[ret].Student_ClassInfo[j].Class_Number,//��ѧ���Ŀγ̺š�
						S->Data[ret].Student_ClassInfo[j].Class_Name,//��ѧ���Ŀγ�����
						S->Data[ret].Student_ClassInfo[j].Class_Teacher,//��ѧ���γ̵���ʦ
						S->Data[ret].Student_ClassInfo[j].Class_StartDate,//���ſγ̿�ʼʱ��
						S->Data[ret].Student_ClassInfo[j].Class_EndDate//���ſγ̽���ʱ��
					);
				}

				printf("\n");
				printf("-----------------------------------------------------------------------------------------------------------------------------------\n");

			}
			
			break;
		}
		else if (select == 2)
		{
			printf("������Ҫ��ѯѧ��������:\n");
			scanf("%s", Student_Name);
			int ret = Search_StudentName(S, Student_Name);
			if (ret == -1)
			{
				printf("��δ�ҵ���ѧ��\n");
			}
			else
			{
				printf("ѧ����Ϣ������ʾ:\n");
				printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
				printf("                                                         ѧ����Ϣ                                                                  |\n");
				printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
				printf("%-10s|%-20s|%-15s|%-20s|%-20s|%-20s|%-20s|\n", "ѧ��ѧ��", "ѧ������", "�γ̺�", "��ѡ�γ�����", "������ʦ", "�γ̿�ʼ����", "�γ̽�������");
				printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
				printf("%-10d|%-20s|", S->Data[ret].Student_Number, S->Data[ret].Student_Name);

				//��ӡ��ѧ���γ̵Ļ�����Ϣ
				for (int j = 0; j < S->Data[ret].j_Class; j++)
				{
					printf("%-15d|%-20s|%-20s|%-20s|%-20s|", S->Data[ret].Student_ClassInfo[j].Class_Number,//��ѧ���Ŀγ̺š�
						S->Data[ret].Student_ClassInfo[j].Class_Name,//��ѧ���Ŀγ�����
						S->Data[ret].Student_ClassInfo[j].Class_Teacher,//��ѧ���γ̵���ʦ
						S->Data[ret].Student_ClassInfo[j].Class_StartDate,//���ſγ̿�ʼʱ��
						S->Data[ret].Student_ClassInfo[j].Class_EndDate//���ſγ̽���ʱ��
					);
				}

				printf("\n");
				printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
			}
			break;
		}
		else
		{
			printf("�����������������\n");
		}
	}
}

