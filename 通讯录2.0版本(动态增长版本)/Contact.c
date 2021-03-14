#include"Contact.h"
#define _CRT_SECURE_NO_WARNINGS 1
void Initcontact(struct Contact* ps)
{
	ps->data =(struct PeoInfo*) malloc(DEFAULT_SZ * sizeof(struct PeoInfo));
	if (ps->data == NULL)
	{
		return;
	}
	ps->size = 0;
	ps->capacity = DEFAULT_SZ;
}
void CheackCapacity(struct Contact* ps)
{
	if (ps->size ==ps->capacity)
	{
		//满了增容
		struct PeoInfo *ptr=(struct PeoInfo*)realloc(ps->data, (ps->capacity+ 2) * sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity = ps->capacity + 2;
			printf("增容成功\n");
		}
		else
			printf("增容失败\n");
	}
}
void AddContact(struct Contact* ps)
{
	//判断空间慢不慢,如果满了就增容，不满啥事都不干
	CheackCapacity(ps);
	printf("请输入姓名:>");
	scanf_s("%s", ps->data[ps->size].name, NAME_MAX);
	printf("请输入年龄:>");
	scanf_s("%d", &ps->data[ps->size].age);
	printf("请输入性别:>");
	scanf_s("%s", ps->data[ps->size].sex, SEX_MAX);
	printf("请输入电话号码:>");
	scanf_s("%s", ps->data[ps->size].tele, TELE_MAX);
	printf("请输入地址:>");
	scanf_s("%s", ps->data[ps->size].addr, ADDR_MAX);
	ps->size++;

	/*if (ps->size == DEFAULT_SZ)
	{
		printf("通讯录已满，无法添加\n");
	}
	else
	{
		printf("请输入姓名:>");
		scanf_s("%s", ps->data[ps->size].name, NAME_MAX);
		printf("请输入年龄:>");
		scanf_s("%d", &ps->data[ps->size].age);
		printf("请输入性别:>");
		scanf_s("%s", ps->data[ps->size].sex, SEX_MAX);
		printf("请输入电话号码:>");
		scanf_s("%s", ps->data[ps->size].tele, TELE_MAX);
		printf("请输入地址:>");
		scanf_s("%s", ps->data[ps->size].addr, ADDR_MAX);
		ps->size++;
	}*/
}
void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		printf("%20s\t%4s\t%5s\t%12s\t%30s\t\n", "名字", "年龄", "性别", "电话号码", "地址");
		for (int i = 0; i < ps->size; i++)
		{
			printf("%20s\t%4d\t%5s\t%12s\t%30s\t\n",
				ps->data->name,
				ps->data->age,
				ps->data->sex,
				ps->data->tele,
				ps->data->addr);
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
void DelContact(struct Contact* ps)
{
	char name[NAME_MAX];
	printf("请输入要删除的名字：>");
	scanf_s("%s", name, NAME_MAX);
	int pos = FindContact(ps, name);
	if (pos == -1)
	{
		printf("未找到要删除的联系人\n");
	}
	else
	{
		int j;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		printf("删除成功\n");
		ps->size--;
	}

}
void SearchContact(const struct Contact* ps)
{
	char name[NAME_MAX];
	printf("请输入要查找人的名字：>");
	scanf_s("%s", &name, NAME_MAX);
	int pos = FindContact(ps, name);
	if (pos == -1)
	{
		printf("未找到要查找的联系人\n");
	}
	else
	{
		printf("%20s\t%4s\t%5s\t%12s\t%30s\t\n", "名字", "年龄", "性别", "电话号码", "地址");
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
	printf("请输入要修改人的姓名：>");
	scanf_s("%s", name, NAME_MAX);
	int pos = FindContact(ps, name);
	if (pos == -1)
	{
		printf("未找到要修改的联系人\n");
	}
	else
	{
		printf("请输入姓名:>");
		scanf_s("%s", ps->data[pos].name, NAME_MAX);
		printf("请输入年龄:>");
		scanf_s("%d", &ps->data[pos].age);
		printf("请输入性别:>");
		scanf_s("%s", ps->data[pos].sex, SEX_MAX);
		printf("请输入电话号码:>");
		scanf_s("%s", ps->data[pos].tele, TELE_MAX);
		printf("请输入地址:>");
		scanf_s("%s", ps->data[pos].addr, ADDR_MAX);
		printf("修改成功\n");
	}
}
//char compare(void* a, void* b)
//{
//	return *(int* )a - *(int*)b;
//}
//void SortContact(const struct Contact* ps)
//{
//	qsort(ps->data->name, MAX, sizeof(char), compare);
////}
int compare(void* a, void* b)
{
	return *(int*)a - *(int*)b;
}
void SaveContact(struct Contact* ps)
{
	FILE* pf = fopen_s("contact.bat", "wb",999);
	if (pf == NULL)
	{
		//printf("%s\n", strerror(errno));
		return;
	}
	int i = 0;
	for ( i = 0; i < ps->size; i++)
	{
		fwrite(ps->data, sizeof(struct PeoInfo), 1, pf);
	}
	fclose(pf);
	pf = NULL;
}

