//����Ĳ����Ϊͷָ��λ�ò��������ĳ�������в��룬�����񴴽�����ṹһ��������ĩβ��ӽ��
//��Ȼ���ֲ��뷽����ͬ���������˼����һ���ģ�������е�һ�ֲ�����ʽ���������ͷָ�����ӽ��
//1.ͷ��������룺������Ĺ��̾��������ֵ�С��������һ���ߣ���ʱ������һ��С���ѣ���Ҫվ����ʦ��С����֮�䣬��ô��ʦ��Ҫ�ſ�ԭ����С���ѣ���ס�¼�
//���С���ѣ�����¼����С���Ѿ�Ҫ��סԭ���Ǹ�С���ѵ��֣������������ɵ��߻�������һ��
//���һ����������������������ӽ�㣺
//struct student*Insert(struct student*pHead)
//{
//	struct student* pNew;//����һ���µĿռ�
//	pNew = (struct student*)malloc(sizeof(struct student));//Ϊ����µĿռ�����ڴ�
//	scanf_s("%s", &pNew.Name, );//������Ϣ
//	scanf_s("%d", &pNew.iNuumber);
//	pNew.pNext = pHead;//���¼���Ľ��ָ��ͷ���
//	pHead = pNew;//���¼���Ľ���Ϊͷ���
//	iCount++;//����������
//	return pHead;
//}///////////////
;
#include<stdio.h>
#include<stdlib.h>
struct student
{
	char Name[20];
	int iNumber;
	struct student* pNext;
};
int iCount5 = 0;
struct student* Create5()
{
	struct student* pHead = NULL;
	struct student* pEnd, * pNew;
	pNew = pEnd = (struct student*)malloc(sizeof(struct student));
	scanf_s("%s", &pNew->Name, 20);
	scanf_s("%d", &pNew->iNumber);
	while (pNew->iNumber != 0)
	{
		iCount5++;
		if (iCount5 == 1)
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
		scanf_s("%s", &pNew->Name,20);
		scanf_s("%d", &pNew->iNumber);
	}
	free(pNew);
	return pHead;
}
struct student* Insert5(struct student* pHead)
{
	//ָ���·�����ڴ�
	struct student* pNew;
	printf("---���Ȳ���һ����Ա---\n");
	//����һ���ڴ�ռ䣬������ָ����ڴ�ռ��ָ��
	pNew = (struct student*)malloc(sizeof(struct student));
	scanf_s("%s", &pNew->Name, 20);
	scanf_s("%d", &pNew->iNumber);
	//�½��ָ��ԭ����β���
	pNew->pNext = pHead;
	//��ͷ���Ϊ�½��
	pHead = pNew;
	//�����������
	iCount5++;
	//����ͷָ��
	return pHead;
}
void Printf5(struct student* pHead)
{
	int ilndex = 1;
	struct student* pTemp;
	pTemp = pHead;
	printf("��������%d����Ա\n", iCount5);
	printf("\n");
	while (pTemp != NULL)
	{
		printf("��%d����Ա��\n",ilndex);
		printf("������%s\n", pTemp->Name);
		printf("ѧ�ţ�%d\n", pTemp->iNumber);
		printf("\n");
		pTemp = pTemp->pNext;
		ilndex++;
	}
}
int main5()
{
	struct student* pHead;
	pHead = Create5();
	pHead = Insert5(pHead);
	Printf5(pHead);
	return 0;
}