#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
//
////#define MAX 100
#define NAME_MAX 20
#define SEX_MAX 5
#define ADDR_MAX 30
#define TELE_MAX 12
#define DEFAULT_SZ 3
enum option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	SAVE
};
struct PeoInfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
};
struct Contact
{
	struct PeoInfo *data;
	int size;
	int capacity;//当前通讯录最大容量
};
void Initcontact(struct Contact* ps);

 void AddContact(struct Contact* ps);

void ShowContact(const struct Contact* ps);

void DelContact(struct Contact* ps);

void SearchContact(const struct Contact* ps);

void ModifyContact(struct Contact* ps);
//void SortContact(struct Contact* ps);

//保存数据到文件中
void SaveContact(struct Contact* ps);