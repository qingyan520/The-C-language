//���������˳����ȱ����Ƶ�
//����#����һ���ڵ�洢�ŵ�����һ���ڵ�ĵ�ַ
#include"SList.h"
//��ⵥ����Ĵ�ӡ��β��βɾ
void test01()
{
	SListNode* plist = NULL;
	SListPushBack(&plist, 0);
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 7);
	SListPushBack(&plist, 4);
	SListPushBack(&plist, 5);
	SListPushBack(&plist, 6);
	//SListPrint(plist);
	bool ret = adjust(&plist);
	if (ret)
	{
		printf("�ǵȲ����\n");
	}
	else
	{
		printf("���ǵȲ����\n");
	}
}
int main()
{
	test01();
	return 0;
}