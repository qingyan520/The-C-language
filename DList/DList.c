#include"DList.h"
ListNode* BuyNodeList(int x)//�����½ڵ�
{
	ListNode* newnode =(ListNode*) malloc(sizeof(ListNode));
	if (newnode != NULL)
	{
		newnode->val = x;
		newnode->next = NULL;
		newnode->prev = NULL;
	}
	return newnode;
}
ListNode* InitListNode()//����ͷ���
{
	ListNode* head = BuyNodeList(0);
	head->next = head;
	head->prev = head;
}
void Push_back(ListNode* phead, int x)//β����������
{
	ListNode* newnode = BuyNodeList(x);

		ListNode* tail = phead->prev;
		tail->next = newnode;
		newnode->prev = tail;
		newnode->next = phead;
		phead->prev = newnode;
}
void Print(ListNode* phead)//��ӡ����
{
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->val);
		cur = cur->next;
	}
}
void Push_Front(ListNode* phead, int x)//ͷ����������
{
	ListNode* newnode = BuyNodeList(x);
	ListNode* next = phead->next;
	phead->next = newnode;
	newnode->prev = phead;
	newnode->next = next;
	next->prev = newnode;
}
void Pop_Front(ListNode* phead)//ͷ��ɾ������
{
	assert(phead->next != phead);
	ListNode* next = phead->next;
	ListNode* next_next = next->next;
	free(next);
	phead->next = next_next;
	next_next->prev = phead;
}
void Pop_Back(ListNode* phead)//β��ɾ������
{
	assert(phead->next != phead);
	ListNode* tail = phead->prev;
	ListNode* tailprev = tail->prev;
	free(tail);
	tailprev->next = phead;
	phead->prev = tailprev;
}
ListNode* FindListNode(ListNode* phead, int x)//�ҵ�ָ������λ��
{
	assert(phead->next != phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->val == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}
void Insert(ListNode* pos, int x)//��ָ��λ��pos֮ǰ����Ԫ��x
{
	ListNode* prev = pos->prev;
	ListNode* newnode = BuyNodeList(x);
	prev->next = newnode;
	newnode->prev = prev;
	newnode->next = pos;
	pos->prev = newnode;
}
void Erase(ListNode* pos)//ɾ��posλ�õ�Ԫ��
{
	
	ListNode* prev = pos->prev;
	ListNode* next = pos->next;
	prev->next = next;
	next->prev = prev;
}