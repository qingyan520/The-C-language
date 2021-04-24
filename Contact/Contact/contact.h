
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>


#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 30

#define DEFAULT_SZ 3


#define MAX 1000

//����һ������Ϣ�Ľṹ��
typedef struct PeoInfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
}PeoInfo;

//��̬��ͨѶ¼�Ľṹ��
//struct Contact
//{
//	struct PeoInfo data[MAX];//���1000�˵���Ϣ�Ŀռ�
//	int sz;//��ʾͨѶ¼�е�ǰ��ŵ��˵���Ϣ����
//};


//��̬�İ汾
typedef struct Contact
{
	struct PeoInfo *data;
	int sz;//��ʾͨѶ¼�е�ǰ��ŵ��˵���Ϣ����
	int capacity;//��ʾͨѶ¼��ǰ���������
}Contact;
	

//����������

//��ʼ��ͨѶ¼�ĺ���
void InitContact(struct Contact* pc);

//����һ���˵���Ϣ
void AddContact(struct Contact* pc);

//��ӡͨѶ�е���Ϣ
void ShowContact(const struct Contact* pc);

//ɾ��һ���˵���Ϣ
void DelContact(struct Contact* pc);

//����ָ����ϵ��
void SearchContact(const struct Contact* pc);

//�޸�ָ����ϵ��
void ModifyContact(struct Contact* pc);


//����ͨѶ¼
void DestroyContact(struct Contact* pc);

//�������ݵ��ļ�
void SaveContact(Contact* pc);