#include<stdio.h>
#include<stdlib.h>
//����������
struct student
{
	// int number;
	char Name[20];
	int iNumber;
	struct student* pNext;
};
int iCount1 = 0;//����һ��ȫ�ֱ�����¼������
struct student* Create4()
{
	struct student* pHead=NULL;//����ͷ���
	struct student* pEnd, * pNew;//����β�����½��
	pEnd = pNew = (struct student*)malloc(sizeof(struct student));//�տ�ʼ��β�����½��ָ��ͬһ��ռ�
	if (pNew != NULL)
	{
		//scanf_s("%d", &pNew->number);
		//��������
		scanf_s("%s", &pNew->Name, 20);
		scanf_s("%d", &pNew->iNumber);
	}
	while (pNew->iNumber!=0)
	{
		iCount1++;
		//��һ����ӽ��
		if (iCount1 == 1)
		{
			pNew->pNext = pHead;//��ͷ���ָ���½�㣬��ʹ�½��ָ��Ϊ��
			pEnd = pNew;//��β���Ϊ�½��
			pHead = pNew;//��ͷ���Ϊ�Ž��
		}
		//�ڶ�����ӽ��
		else
		{
			pNew->pNext = NULL;//ʹ�½��ָ����ָ��Ϊ��
			pEnd->pNext = pNew;//ʹβ���ָ����ָ��ս��
			pEnd = pNew;//ʹβ���Ϊ�ս��
		}
		pNew = malloc(sizeof(struct student));//���¿���һ��ռ�����¼������
		if (pNew != NULL)
		{
			//scanf_s("%d", &pNew->number);
			//Ϊ�¿ռ丳ֵ
			scanf_s("%s", &pNew->Name, 20);
			scanf_s("%d", &pNew->iNumber);
		}
	}
	free(pNew);//�ͷ��ڴ�
	return pHead;//����ͷ��㣬ͨ��ͷ���Ϳ����ҵ���������
}
//����һ����������ӡ�����е�����
void Print(struct student* pHead)//��ͷ�����Ϊ��������
{
	int ilindex = 1;//����һ����������¼��ӡ��Ϣ�ĸ���
	struct student* pTemp;//����һ����ʱ���������ѭ����ӡ��������
	pTemp = pHead;//����ʱ���Ϊͷ���
	printf("����������%d����Ա\n", iCount1);//��ӡ���еĳ�Ա����
	printf("\n");
	while (pTemp!= NULL)//�ж�ѭ����ֹ����������ʱ���ָ��Ϊ��ʱֹͣѭ������δ���Ԫ��ʱֹͣѭ������β���ʱֹͣѭ��
	{
		printf("��%d�������Ա:\n", ilindex);
		//printf("��%pq��ͬѧ��Ϣ\n", &pTemp->number);
		printf("����:%s\n", pTemp->Name);
		printf("ѧ��:%d\n", pTemp->iNumber);
		printf("\n");
		pTemp = pTemp->pNext;//��ʱ���ָ����һ������׵�ַ
		ilindex++;
	}
}
int main4()
{
	struct student* pHead;
	pHead = Create4();
	Print(pHead);
	return 0;
}