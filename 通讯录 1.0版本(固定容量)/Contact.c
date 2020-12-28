#include"Contact.h"

void Initcontact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;
}
void AddContact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("ͨѶ¼�������޷����\n");
	}
	else
	{
		printf("����������:>");
		scanf_s("%s", ps->data[ps->size].name,sizeof(ps->data->name));
		printf("����������:>");
		scanf_s("%d", &ps->data[ps->size].age);
		printf("�������Ա�:>");
		scanf_s("%s", ps->data[ps->size].sex,sizeof(ps->data->sex));
		printf("������绰����:>");
		scanf_s("%s", ps->data[ps->size].tele,sizeof(ps->data->tele));
		printf("�������ַ:>");
		scanf_s("%s", ps->data[ps->size].addr,sizeof(ps->data->addr));
		ps->size++;
	}
}
void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		printf("%20s\t%4s\t%5s\t%12s\t%30s\t\n", "����", "����", "�Ա�", "�绰����", "��ַ");
		for (int i = 0; i < ps->size; i++)
		{
			printf("%20s\t%4d\t%5s\t%12s\t%30s\t\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}
static int FindContact(const struct Contact* ps, char name[NAME_MAX])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		return i;
	}
	return -1;
}
void DelContact(struct Contact*ps)
{
	char name[NAME_MAX];
	printf("������Ҫɾ�������֣�>");
	scanf_s("%s", name,NAME_MAX);
	int pos = FindContact(ps,name);
	if (pos == -1)
	{
		printf("δ�ҵ�Ҫɾ������ϵ��\n");
	}
	else
	{
		int j;
		for ( j = pos; j < ps->size-1; j++)
		{
			ps->data[j]= ps->data[j + 1];
		}
		printf("ɾ���ɹ�\n");
		ps->size--;
	}

}
void SearchContact(const struct Contact* ps)
{
	char name[NAME_MAX];
	printf("������Ҫ�����˵����֣�>");
	scanf_s("%s", &name,NAME_MAX);
	int pos = FindContact(ps, name);
	if (pos == -1)
	{
		printf("δ�ҵ�Ҫ���ҵ���ϵ��\n");
	}
	else
	{
		printf("%20s\t%4s\t%5s\t%12s\t%30s\t\n", "����", "����", "�Ա�", "�绰����", "��ַ");
		printf("%20s\t%4d\t%5s\t%12s\t%30s\t\n", ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr);
	}
}
void ModifyContact(struct Contact* ps)
{
	char name[NAME_MAX];
	printf("������Ҫ�޸��˵�������>");
	scanf_s("%s", name,NAME_MAX);
	int pos = FindContact(ps, name);
	if (pos == -1)
	{
		printf("δ�ҵ�Ҫ�޸ĵ���ϵ��\n");
	}
	else
	{
		printf("����������:>");
		scanf_s("%s", ps->data[pos].name, sizeof(ps->data->name));
		printf("����������:>");
		scanf_s("%d", &ps->data[pos].age);
		printf("�������Ա�:>");
		scanf_s("%s", ps->data[pos].sex, sizeof(ps->data->sex));
		printf("������绰����:>");
		scanf_s("%s", ps->data[pos].tele, sizeof(ps->data->tele));
		printf("�������ַ:>");
		scanf_s("%s", ps->data[pos].addr, sizeof(ps->data->addr));
		printf("�޸ĳɹ�\n");
	}
}
//char compare(void* a, void* b)
//{
//	return *(int* )a - *(int*)b;
//}
//void SortContact(const struct Contact* ps)
//{
//	qsort(ps->data->name, MAX, sizeof(char), compare);
//}
int compare(void* a, void* b)
{
	return *(int*)a - *(int*)b;
}


