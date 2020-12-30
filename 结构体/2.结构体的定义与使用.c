#include<stdio.h>
typedef struct stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}stu;
int main2()
{
	stu s= { "ÕÅÈı",12,"17693032948","ÄĞ" };
	printf("name=%s\n", s.name);
	printf("age=%d\n", s.age);
	printf("tele=%s\n", s.tele);
	printf("sex=%s\n",s.sex);

	return 0;
}