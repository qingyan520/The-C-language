//�������ɾ��������������ӽ��֮�����ϣ��ɾ����㣬����ô���أ�����ͨ���ϴ�С���������ֽ��б���
//���磺������һ��С�������뿪���飬�����������û�жϿ��ķ����������Աߵ�С���ѽ���������
//���һ����Ϣ����ʾҪ����ɾ��������Ȼ������forѭ�������ҵ�Ҫɾ���Ľ�������Ҫɾ��������ߵĽ�㣬������free������pTempָ����ڴ�ռ�����ͷ�
#include<stdio.h>
struct student
{
	char Name[20];
	int iNumber;
	struct student* pNext;
};
int iCount = 0;
struct student* Create()
{
	struct student* pHead = NULL;
	struct student* pEnd, * pNew;
	pEnd = pNew = (struct student*)malloc(sizeof(struct student));
	printf("������������ѧ�ţ�");
	scanf_s("%s", &pNew->Name, 20);
	scanf_s("%d", &pNew->iNumber);
	while (pNew->iNumber != 0)
	{
		iCount++;
		if (iCount == 1)
		{
			pNew->pNext = pHead;
			pEnd = pNew;
			pHead = pNew;
		}
		else
		{
			pNew->pNext = NULL;
			pEnd->pNext = pNew;
			pEnd = pNew;
		}
		pNew = (struct student*)malloc(sizeof(struct student));
		scanf_s("%s", &pNew->Name, 20);
		scanf_s("%d", &pNew->iNumber);
	}
	free(pNew);
	return pHead;
}
struct student* Insert(struct student* pHead)
{
	struct student* pNew;
	pNew = (struct student*)malloc(sizeof(struct student));
	printf("�����һ����Ϣ��");
	scanf_s("%s", &pNew->Name, 20);
	scanf_s("%d", &pNew->iNumber);
	pNew->pNext = pHead;
	pHead = pNew;
	iCount++;
	return pHead;
}
Printf(struct student* pHead)
{
	struct student* pTemp;
	pTemp = pHead;
	int ilndex = 1;
	printf("��������%d����Ա\n", iCount);
	while (pTemp != NULL)
	{
		printf("��%d����Ա\n", ilndex);
		printf("������%s\n", pTemp->Name);
		printf("ѧ�ţ�%d\n", pTemp->iNumber);
		printf("\n");
		pTemp = pTemp->pNext;
		ilndex++;
	}
}
void Delete(struct student* pHead, int ilndex)
{
	struct student* pTemp;//����һ����ʱ���
	struct student* pPre;//ɾ�����λ��ǰ�Ľ��
	pTemp = pHead;//�õ�ͷ���
	pPre = pTemp;
	for (int i = 1; i < ilndex; i++)//forѭ��ʹ��pTempָ��Ҫɾ���Ľ��
	{
		pPre = pTemp;
		pTemp = pTemp->pNext;
	}
	pPre->pNext = pTemp->pNext;//����Ҫɾ��������ߵĽ��
	free(pTemp);//�ͷ�Ҫɾ���Ľ��
	iCount--;//���������һ
}
int main()
{
	struct student* pHead;
	pHead = Create();
	pHead = Insert(pHead);
	Printf(pHead);
	Delete(pHead, 2);
	Printf(pHead);
	return 0;
}