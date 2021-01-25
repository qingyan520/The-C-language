#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main0()
{
	float DAIGE_hight = 1.8;
	float* p = &DAIGE_hight;
	*p = 1.85;
	printf("%f", DAIGE_hight);
	return 0;

}