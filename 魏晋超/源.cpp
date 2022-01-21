#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string.h>
using namespace std;
void main1()
{
	//char ch[10] = { 'c','h','i','n','a' }, * p;
	//p = ch;
	char* p;
	p = (char*)"ABCDE";
	for (int i = 0; i < strlen(p); i++)
	{
		cout << *(p + i) << endl;
	}
	system("pause");
}