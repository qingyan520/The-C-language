#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef struct ListNode
{
	int val;
	struct ListNode* prev;
	struct ListNOde* next;
}ListNode;

ListNode* BuyNodeList(int x);//�����½ڵ�
ListNode*InitListNode();//����ͷ���
void Push_back(ListNode* phead, int x);//β����������
void Print(ListNode* phead);//��ӡ����
void Push_Front(ListNode* phead,int x);//ͷ����������
void Pop_Front(ListNode* phead);//ͷ��ɾ������
void Pop_Back(ListNode* phead);//β��ɾ������
ListNode* FindListNode(ListNode*phead,int x);//�ҵ�ָ������λ��
void Insert(ListNode* pos,int x );//��ָ��λ��pos֮ǰ����Ԫ��x
void Erase(ListNode* pos);//ɾ��posλ�õ�Ԫ��