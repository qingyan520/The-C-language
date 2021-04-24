#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

//��̬�汾
//void InitContact(struct Contact* pc)
//{
//	pc->sz = 0;
//	//memset - �����ڴ��
//	memset(pc->data, 0, sizeof(pc->data));
//}

int CheckCapacity(Contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		//����
		struct PeoInfo* ptr = (struct PeoInfo*)realloc(pc->data, (pc->capacity + 2)*sizeof(struct PeoInfo));
		if (ptr == NULL)
		{
			printf("����ʧ��\n");
			return 0;
		}
		else
		{
			//������ݳɹ�Ҫ��ptr��ֵ��pc->data
			pc->data = ptr;
			pc->capacity += 2;
			printf("���ݳɹ�\n");
			return 1;
		}
	}
	return 1;
}

void LoadContact(Contact* pc)
{
	//���ļ�
	FILE* pfIn = fopen("contact.dat", "rb");
	if (pfIn == NULL)
	{
		printf("LoadContact::%s\n", strerror(errno));
		return;
	}
	//���ļ����ݣ��Ž�ͨѶ¼
	PeoInfo tmp = { 0 };
	while (fread(&tmp, sizeof(PeoInfo), 1, pfIn))
	{
		//����Ƿ�Ҫ����
		if (CheckCapacity(pc) == 0)
		{
			printf("ͨѶ¼��ʼ��ʧ��\n");
			return;
		}
		//�洢Ԫ��
		pc->data[pc->sz] = tmp;
		pc->sz++;
	}

	//�ر��ļ�
	fclose(pfIn);
	pfIn = NULL;
}

//��̬�汾-��ʼ��ͨѶ¼
void InitContact(struct Contact* pc)
{
	pc->sz = 0;//ͨѶ¼�����õ�ʱ��û����Ч��Ϣ
	pc->capacity = DEFAULT_SZ;//ͨѶ¼�����õ�ʱ��Ĭ���ܷ�DEFAULT_SZ���˵���Ϣ
	pc->data = (struct PeoInfo*)malloc(DEFAULT_SZ*sizeof(struct PeoInfo));
	if (pc->data == NULL)
	{
		printf("��ʼ��ͨѶ¼ʧ��\n");
		exit(1);
	}
	//�����ļ�
	LoadContact(pc);
}


//��̬�İ汾
//void AddContact(struct Contact* pc)
//{
//	if (pc->sz == MAX)
//	{
//		printf("ͨѶ¼�������޷����\n");
//	}
//	else
//	{
//		printf("����������:>");
//		scanf("%s", pc->data[pc->sz].name);
//		printf("����������:>");
//		scanf("%d", &(pc->data[pc->sz].age));
//		printf("�������Ա�:>");
//		scanf("%s", pc->data[pc->sz].sex);
//		printf("������绰:>");
//		scanf("%s", pc->data[pc->sz].tele);
//		printf("�������ַ:>");
//		scanf("%s", pc->data[pc->sz].addr);
//
//		pc->sz++;
//		printf("��ӳɹ�\n");
//	}
//}


//��̬�����İ汾
void AddContact(struct Contact* pc)
{
	if (CheckCapacity(pc) == 0)
	{
		printf("�ռ䲻��ʹ�ã���������ʱʧ��\n");
		return;
	}

	printf("����������:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("����������:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("��ӳɹ�\n");
}

void ShowContact(const struct Contact* pc)
{
	int i = 0;
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		for (i = 0; i < pc->sz; i++)
		{
			printf("%-15s\t%-5d\t%-5s\t%-12s\t%-20s\n",
				pc->data[i].name,
				pc->data[i].age,
				pc->data[i].sex,
				pc->data[i].tele,
				pc->data[i].addr);
		}
	}
	
}

static int FindByName(const struct Contact*pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}

	//û�ҵ�
	return -1;
}

void DelContact(struct Contact* pc)
{
	char name[NAME_MAX] = {0};

	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ�û��ɾ��\n");
	}
	else
	{
		//1.�ҵ�Ҫɾ������
		printf("������Ҫɾ���˵�����:>");
		scanf("%s", name);
		int pos = FindByName(pc, name);
		if (pos == -1)
		{
			printf("Ҫɾ�����˲�����\n");
		}
		else
		{
			//2.ɾ��
			int j = 0;
			for (j = pos; j < pc->sz-1; j++)
			{
				pc->data[j] = pc->data[j + 1];
			}

			pc->sz--;
			printf("ɾ���ɹ�\n");
		}

	}
}

void SearchContact(const struct Contact* pc)
{
	char name[NAME_MAX];
	printf("������Ҫ�����˵�����:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
	}
	else
	{
		printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
			printf("%-15s\t%-5d\t%-5s\t%-12s\t%-20s\n",
				pc->data[pos].name,
				pc->data[pos].age,
				pc->data[pos].sex,
				pc->data[pos].tele,
				pc->data[pos].addr);
	}
}


void ModifyContact(struct Contact* pc)
{
	char name[NAME_MAX];
	printf("������Ҫ�޸��˵�����:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", pc->data[pos].name);
		printf("����������:>");
		scanf("%d", &(pc->data[pos].age));
		printf("�������Ա�:>");
		scanf("%s", pc->data[pos].sex);
		printf("������绰:>");
		scanf("%s", pc->data[pos].tele);
		printf("�������ַ:>");
		scanf("%s", pc->data[pos].addr);

		printf("�޸ĳɹ�\n");
	}
}


void DestroyContact(struct Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->capacity = 0;
	pc->sz = 0;
}

void SaveContact(Contact* pc)
{
	FILE* pfOut = fopen("contact.dat", "wb");
	if (pfOut == NULL)
	{
		printf("SaveContact::%s\n", strerror(errno));
		return;
	}
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		fwrite(pc->data + i, sizeof(PeoInfo), 1, pfOut);
	}
	fclose(pfOut);
	pfOut = NULL;
}