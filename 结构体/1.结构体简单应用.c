#include<stdio.h>
struct stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
};
int main1()
{
	struct stu s = {"����",12,"17693032948","��"};
	printf("name=%s\n", s.name);
	printf("age=%d\n", s.age);
	printf("tele=%s\n", s.tele);
	printf("sex=%s\n", s.sex);
	return 0;
}