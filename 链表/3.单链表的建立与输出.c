//����Ľ�����һ����̬���̣���̬�������ʱҪΪ������ڴ棬������ѧϰ��������֮ǰҪ��ϰһ�¹��ڶ�̬����ĺ���
//malloc������void*malloc(unsigned int);
//            �ú��������������ڴ��ж�̬�ķ���һ��size��С���ڴ�ռ䣬malloc�����᷵��һ��ָ���ָ��ָ�������ڴ�ռ䣬������������򷵻�NULL
//calloc������void*calloc(unsigned n,unsigned size);
//            �ú��������������ڴ��ж�̬�ķ���n������Ϊsize��С�������ڴ�ռ����飬��������г�ʼ�����ú���Ҳ�᷵��һ��ָ�룬��ָ��ָ��̬����������ڴ�ռ��ַ
//free������void free(void*ptr);
//          �ͷ���malloc��calloc��̬����ָ����ڴ�ռ�
//�������Ǿ�ѧϰ��ν�������ɣ�
#include<stdlib.h>
#include<stdio.h>
//���ȴ������ṹ����ʾÿһλѧ��
//��������
struct student
{
	char cName[20];
	int iNumber;
	struct student* pNext;
};
//Ȼ����һ��Create�������������������ú������᷵�������ͷָ��
int iCount;//����һ��ȫ�ֱ�����ʾ������
struct student* Create3()
{
	//Create������������������Create�����ⲿ����һ������iCount���ñ���������¼�����н�����
	//��Create�����У�����Ҫ����ָ�����,pHead������ʾͷָ�룬pEnd����ָ��ԭ����β��㣬pEnd����ָ��ԭ����β��㣬pNewָ���´����Ľ��
	struct student* pHead = NULL;//��ʼ������ͷָ��Ϊ��
	struct student* pEnd, * pNew;
	iCount = 0;//��ʼ��������Ϊ0��
	pEnd = pNew = (struct student*)malloc(sizeof(struct student));
	printf("please first enter Name,then Number\n");
	scanf_s("%s", &pNew->cName,20);
	scanf_s("%d", &pNew->iNumber);
	while (pNew->iNumber != 0)
	{
		iCount++;
		if (iCount == 1)
		{
			pNew->pNext = pHead;//ʹ��ָ��Ϊ��
			pEnd = pNew;//�����¼���Ľ��
			pHead = pNew;//ͷָ��ָ���׽��
		}
		else
		{
			pNew->pNext = NULL;//�½���ָ��Ϊ��
			pEnd->pNext = pNew;//ԭ���Ľ��ָ���½��
			pEnd=pNew;//pEndָ���½��
		}
		pNew = (struct student*)malloc(sizeof(struct student));//�ٴη������ڴ�ռ�
		scanf_s("%s", &pNew->cName,20);
		scanf_s("%d", &pNew->iNumber);
	}
	free(pNew);//�ͷ�û���õ��ڴ�ռ�
	return pHead;
}
//�������
void Print3(struct student* pHead)
{
	struct student* pTemp;//ѭ�����õ���ʱָ��
	int ilndex = 1;//��ʾ�����н������
	printf("---�����������%d����Ա��---\n", iCount);//��Ϣ��ʾ
	printf("\n");//����
	pTemp = pHead;//ָ��õ��׽��ĵ�ַ
	while (pTemp != NULL)
	{
		printf("��Ա%d�ǣ�\n", ilndex);
		printf("������%s\n", pTemp->cName);//�������
		printf("ѧ�ţ�%d\n", pTemp->iNumber);//���ѧ��
		printf("\n");//����
		pTemp = pTemp->pNext;//�ƶ���ʱָ�뵽��һ�����
		ilndex++;//�����Լ�����
	}

}
int main3()
{
	struct student* pHead;//����ͷ���
	pHead = Create();//�������
	Print(pHead);//�������
	return 0;
}