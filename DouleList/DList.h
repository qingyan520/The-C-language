#pragma once
#include<stdio.h>
#include<stdlib.h>
typedef int ListDataType;
typedef struct ListNode
{
	ListDataType x;
	struct ListNode* next;
	struct ListNode* prev;
}ListNode;


//1.��̬������
struct ListNode* BuyListNode(ListDataType x);
//2.����ͷ���
ListNode* InitListNode();
//3.β����������
 void Push_Back(ListNode* phead, ListDataType x);
//4.ͷ����������
 void Push_Front(ListNode* phead, ListDataType x);
//5.β��ɾ������
 void Pop_Back(ListNode* phead);
//6.ͷ��ɾ������
 void Pop_Front(ListNode* phead);
//7.����ָ��Ԫ��
 ListNode*FindListNode(ListNode*phead,ListDataType x);

 //8.��pos���֮ǰ��������
 void InsertListNode(ListNode* pos, ListDataType x);
 //�˽ڵ���Խ��з��ã�
 //����head֮ǰ�Ľ����������൱��β��
 //��head->nextԪ��֮ǰ����Ԫ���൱��ͷ��

 //9.ɾ����posԪ��֮ǰ��Ԫ��
 void PopListNode(ListNode* pos);
 //ɾ�����Ҳ���Խ��з��ã�
 // ����head���֮ǰ����ɾ�������൱��βɾ
 // ��head->next->next�൱��ͷɾ
//8.��ӡԪ��
 void Print(ListNode* phead);
//9.ͳ�ƽ�����
