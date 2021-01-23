#include"contact.h"
void Add(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		cout << "ͨѶ¼�����޷����" << endl;
	}
	else
	{
		cout << "����������" << endl;
		cin >> ps->contact[ps->size].Name;
		cout << "�������Ա�,1�����У�2����Ů" << endl;
		while (true)
		{
			cin >> ps->contact[ps->size].Sex;
			if (ps->contact[ps->size].Sex == 1 || ps->contact[ps->size].Sex == 2)
			{
				break;
			}
		}
		cout << "����������" << endl;
		cin >> ps->contact[ps->size].Age;
		cout << "������绰����" << endl;
		cin >> ps->contact[ps->size].Phone;
		cout << "������סַ" << endl;
		cin >> ps->contact[ps->size].Addr;
		ps->size++;
		cout << "��ӳɹ�" << endl;
		system("pause");
		system("cls");
	}
}
void Show(struct Contact* ps)
{
	if (ps->size == 0)
	{
		cout << "ͨѶ¼Ϊ��" << endl;
	}
	else
	{
		cout << "\t\t      ͨѶ¼" << endl;
		cout << endl;
		for (int i = 0; i < ps->size; i++)
		{
			cout << "����:" << ps->contact[i].Name << "\t";
			cout << "�Ա�:" << (ps->contact[i].Sex==1?"��":"Ů") << "\t";
			cout << "����:" << ps->contact[i].Age << "\t";
			cout << "�绰����:" << ps->contact[i].Phone << "\t";
			cout << "סַ:" << ps->contact[i].Addr << "\t" << endl;
		}
	}
	system("pause");
	system("cls");
}
int Find(string Delete_Name,struct Contact*ps)
{
	for (int i = 0; i <ps->size ; i++)
	{
		if (Delete_Name==ps->contact[i].Name)
		{
			return i;
		}
	}
	return -1;
}
void Delete(struct Contact* ps)
{
	string Delete_Name;
	cout << "������Ҫɾ����ϵ�˵�����:" << endl;
	cin >> Delete_Name;
	int ret = Find(Delete_Name,ps);
	if (ret == -1)
	{
		cout << "���޴���" << endl;
	}
	else
	{
		for (int i = ret; i < ps->size; i++)
		{
			ps->contact[i] = ps->contact[i + 1];
		}
	}
	ps->size--;
	cout << "ɾ���ɹ�" << endl;
	system("pause");
	system("cls");
}
void Search(struct Contact* ps)
{
	string Search_Name;
	cout << "������Ҫ������ϵ�˵�����:" << endl;
	cin >> Search_Name;
	int ret = Find(Search_Name, ps);
	if (ret == -1)
	{
		cout << "���޴���" << endl;
	}
	else
	{
		cout << "����:" << ps->contact[ret].Name << "\t";
		cout << "�Ա�:" << (ps->contact[ret].Sex == 1 ? "��" : "Ů") << "\t";
		cout << "����:" << ps->contact[ret].Age << "\t";
		cout << "�绰����:" << ps->contact[ret].Phone << "\t";
		cout << "סַ:" << ps->contact[ret].Addr << "\t" << endl;
	}
	system("pause");
	system("cls");
}
void Modity(struct Contact* ps)
{
	string Modity_Name;
	cout << "������Ҫ�޸���ϵ�˵�����:" << endl;
	cin >> Modity_Name;
	int ret = Find(Modity_Name, ps);
	if (ret == -1)
	{
		cout << "���޴���" << endl;
	}
	else
	{
		cout << "����������" << endl;
		cin >> ps->contact[ret].Name;
		cout << "�������Ա�,1�����У�2����Ů" << endl;
		while (true)
		{
			cin >> ps->contact[ret].Sex;
			if (ps->contact[ret].Sex == 1 || ps->contact[ret].Sex == 2)
			{
				break;
			}
		}
		cout << "����������" << endl;
		cin >> ps->contact[ret].Age;
		cout << "������绰����" << endl;
		cin >> ps->contact[ret].Phone;
		cout << "������סַ" << endl;
		cin >> ps->contact[ret].Addr;
		cout << "�޸ĳɹ�" << endl;
	}
	system("pause");
	system("cls");
}
void Sort(struct Contact* ps)
{
	for (int i = 0; i <ps->size-1 ; i++)
	{
		for (int j = 0; j <ps->size-1-i; j++)
		{
			if (ps->contact[j].Age > ps->contact[j + 1].Age)
			{
				struct PeopleInfortation temp = ps->contact[j];
				ps->contact[j] = ps->contact[j + 1];
				ps->contact[j + 1] = temp;
			}
		}
	}
	cout << "����ɹ�" << endl;
	system("pause");
	system("cls");
}
void Clean(struct Contact* ps)
{
	int m = 0;
	cout << "���Ƿ�Ҫɾ��ͨѶ¼��ȷ��ɾ���밴1,�˳��밴2" << endl;
	cin >> m;
	while (true)
	{
		if (m == 1)
		{
			ps->size = 0;
			cout << "�ɹ�ɾ��ͨѶ¼" << endl;
			break;
		}
		if (m == 2)
		{
			break;
		}
	}
	system("pause");
	system("cls");
}