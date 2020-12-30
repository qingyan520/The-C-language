#include<stdio.h>
struct stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
};
void Point1(struct stu s)
{
	printf("name=%s\n", s.name);
	printf("age=%d\n", s.age);
	printf("tele=%s\n", s.tele);
	printf("sex=%s\n", s.sex);
}
void Point2(struct stu* s)
{
	printf("name=%s\n", s->name);
	printf("age=%d\n", s->age);
	printf("tele=%s\n", s->tele);
	printf("sex=%s\n", s->sex);
}

int main4()
{
	struct stu s = { "ÕÅÈı",12,"17693032948","ÄĞ" };
	Point1(s);
	Point2(&s);
	return 0;
}