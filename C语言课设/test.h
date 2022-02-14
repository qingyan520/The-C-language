#pragma once
#include<stdio.h>
#include<stdlib.h>
#include <errno.h>
#include<string.h>
#include<Windows.h>

//�洢�γ���Ϣ�Ľṹ��
typedef struct Class_Info
{
	int Class_Number;//�γ̺�
	char Class_Name[100];//�γ�����
	char Class_Teacher[100];//������ʦ
	char Class_StartDate[100];//�γ̿�ʼ����
	char Class_EndDate[100];//�γ̽�������
}Class_Info;


typedef struct Class
{
	Class_Info* Data;
	int Class_size;
	int Class_capacity;
}Class;



//�γ̲��ԣ�ʵ�ֿγ���Ϣ�ı���

//1.�Կγ̽��г�ʼ��
void Init_Class(Class* cl);


//2.��γ����������Ϣ
void Push_Class(Class* cl);

//3.��ӡ�γ���Ϣ
void Print_Class(Class* cl);

//4.���γ���Ϣ���浽�ļ���ȥ
void Save_Class(Class* cl);

//5.���ļ����м���
void Loading_Class(Class* cl);

int Search_ClassNumber(Class* cl, int ClassNumber);//��ѯ�γ̺��Ƿ����

int Search_ClassName(Class* cl, char ClassName[]);//���տγ�����������Ӧ�Ŀγ��Ƿ����

//6.��ѯָ���γ�
void Find_Class(Class* cl);


















//�洢��ʦ��Ϣ�Ľṹ��
typedef struct Teacher_Info
{
	int Teacher_Number;//��ʦ��(����1��������)����ʦ�Ų������ظ�
	char Teacher_Name[20];//����(һ���˵����ֲ�����20���ַ�)
	char Teacher_Sex[3];//�Ա�(��/Ů��������3���ַ�)
	char Teacher_educational_background[7];//ѧ��(��ר/����/�о���/˶ʿ/��ʿ��������7���ַ�)
	int Teacher_Age;//����
	char Teacher_TelephoneNumber[12];//�绰����(�й��˵绰����Ϊ11λ��������12���ַ�)
    Class_Info  Teacher_ClassINfo[100];
	int Teacher_iClass;
	int Teacher_Class_Person;
}Teacher_Info;


//��װ��ʦ�ṹ��
typedef struct Teacher
{
	Teacher_Info* Data;
	int Teacher_capacity;
	int Teacher_size;
	
}Teacher;


//1.��ʼ����Ϣ����ϵͳ
void Init_Teacher(Teacher*T);

//2.¼����ʦ����Ϣ
void Push_Teacher(Teacher* T, Class* cl);

//3.��ӡ��ʦ��Ϣ
void Print_Teacher(Teacher* T);

//4.����Ϣ���浽�ļ���ȥ
void Save_Teacher(Teacher* T);

//5.��ʼ�������ļ�
void Loading_Teacher(Teacher* T);

int Search_TeacherNumber(Teacher* T, int x);//���ҽ�ʦ���Ƿ����

int Search_TeacherName(Teacher* T, char name[]);//2.5��ѯ��ʦ�����Ƿ���ڣ�����ʦ�γ�������++

//6.��ѯָ����ʦ��Ϣ
void Find_Teacher(Teacher* T);





//�洢ѧ����Ϣ�Ľṹ��
typedef struct Student_Info
{
	int Student_Number;//ѧ��(����1�����������������ظ�)
	char Student_Name[20];//ѧ������
	//int Student_ClassNumber;//ѧ��ѡ��ʱ�Ŀγ̺�
	Class_Info Student_ClassInfo[400];//ѧ��ѡ�Ŀγ�
	int j_Class;
}Student_Info;



//��̬���ٽṹ��
typedef struct Student
{
	Student_Info* Data;
	int Student_capacity;
	int Student_size;
}Student;


//1.��ʼ��ѧ����Ϣ
void Init_Student(Student* S);

//2.����ѧ����Ϣ
void Push_Student(Student* S, Class* cl,Teacher*T);


//3.��ӡ��ʦ��Ϣ
void Print_Student(Student* S);

//4.��ѧ����Ϣ���浽�ļ���ȥ
void Save_Student(Student* S);


//5.����ѧ����Ϣ
void Loading_Student(Student* S);

int Search_StudentNumber(Student* S, int x);//��ѯѧ����ѧ���Ƿ����

int Search_StudentName(Student* S, char Name[]);//��ѯѧ���������Ƿ����

//6.��ѯָ��ѧ��
void Find_Student(Student* S);




