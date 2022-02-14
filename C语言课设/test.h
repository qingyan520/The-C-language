#pragma once
#include<stdio.h>
#include<stdlib.h>
#include <errno.h>
#include<string.h>
#include<Windows.h>

//存储课程信息的结构体
typedef struct Class_Info
{
	int Class_Number;//课程号
	char Class_Name[100];//课程名字
	char Class_Teacher[100];//科任老师
	char Class_StartDate[100];//课程开始日期
	char Class_EndDate[100];//课程结束日期
}Class_Info;


typedef struct Class
{
	Class_Info* Data;
	int Class_size;
	int Class_capacity;
}Class;



//课程测试：实现课程信息的保存

//1.对课程进行初始化
void Init_Class(Class* cl);


//2.向课程里面添加信息
void Push_Class(Class* cl);

//3.打印课程信息
void Print_Class(Class* cl);

//4.将课程信息保存到文件中去
void Save_Class(Class* cl);

//5.将文件进行加载
void Loading_Class(Class* cl);

int Search_ClassNumber(Class* cl, int ClassNumber);//查询课程号是否存在

int Search_ClassName(Class* cl, char ClassName[]);//按照课程名称搜索对应的课程是否存在

//6.查询指定课程
void Find_Class(Class* cl);


















//存储教师信息的结构体
typedef struct Teacher_Info
{
	int Teacher_Number;//教师号(大于1的正整数)，教师号不可以重复
	char Teacher_Name[20];//姓名(一般人的名字不超过20个字符)
	char Teacher_Sex[3];//性别(男/女，不超过3个字符)
	char Teacher_educational_background[7];//学历(大专/本科/研究生/硕士/博士，不超过7个字符)
	int Teacher_Age;//年龄
	char Teacher_TelephoneNumber[12];//电话号码(中国人电话号码为11位，不超过12个字符)
    Class_Info  Teacher_ClassINfo[100];
	int Teacher_iClass;
	int Teacher_Class_Person;
}Teacher_Info;


//封装教师结构体
typedef struct Teacher
{
	Teacher_Info* Data;
	int Teacher_capacity;
	int Teacher_size;
	
}Teacher;


//1.初始化信息管理系统
void Init_Teacher(Teacher*T);

//2.录入老师的信息
void Push_Teacher(Teacher* T, Class* cl);

//3.打印老师信息
void Print_Teacher(Teacher* T);

//4.将信息保存到文件中去
void Save_Teacher(Teacher* T);

//5.初始化加载文件
void Loading_Teacher(Teacher* T);

int Search_TeacherNumber(Teacher* T, int x);//查找教师号是否存在

int Search_TeacherName(Teacher* T, char name[]);//2.5查询老师名字是否存在，将老师课程量进行++

//6.查询指定老师信息
void Find_Teacher(Teacher* T);





//存储学生信息的结构体
typedef struct Student_Info
{
	int Student_Number;//学号(大于1的正整数，不可以重复)
	char Student_Name[20];//学生姓名
	//int Student_ClassNumber;//学生选课时的课程号
	Class_Info Student_ClassInfo[400];//学生选的课程
	int j_Class;
}Student_Info;



//动态开辟结构体
typedef struct Student
{
	Student_Info* Data;
	int Student_capacity;
	int Student_size;
}Student;


//1.初始化学生信息
void Init_Student(Student* S);

//2.增加学生信息
void Push_Student(Student* S, Class* cl,Teacher*T);


//3.打印老师信息
void Print_Student(Student* S);

//4.将学生信息保存到文件中去
void Save_Student(Student* S);


//5.加载学生信息
void Loading_Student(Student* S);

int Search_StudentNumber(Student* S, int x);//查询学生的学号是否存在

int Search_StudentName(Student* S, char Name[]);//查询学生的姓名是否存在

//6.查询指定学生
void Find_Student(Student* S);




