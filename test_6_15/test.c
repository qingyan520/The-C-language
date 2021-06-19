#include<stdio.h>
int main()

{
	void copy(char from[], char to[]);
	char a[] = { "I am a teacher" };
	char b[] = "You are a student";

	copy(a, b);
	printf("%s\n%s", a, b);
	char* p = NULL;
	p = "I am a student";
	printf("\n%s", p);
	return 0;




}
void copy(char from[], char to[])
{
	for (; (*to++ = *from++) != '\0';);
}