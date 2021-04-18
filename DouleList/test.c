#include"DList.h"
void test01()
{
	ListNode* plist = InitListNode();
	Push_Back(plist, 1);
	Push_Back(plist, 2);
	Push_Back(plist, 3);
	Push_Back(plist, 4);
	Push_Back(plist, 5);
	Push_Front(plist, 1);
	Push_Front(plist, 2);
	Push_Front(plist, 3);
	Push_Front(plist, 4);
	Push_Front(plist, 5);
	//Pop_Back(plist);
	Pop_Front(plist);
	Pop_Front(plist);
	Pop_Front(plist);
	Pop_Front(plist);
	Pop_Front(plist);
	ListNode*p=FindListNode(plist, 3);
	InsertListNode(p, 10);
	PopListNode(p);
	Pop_Back(plist);
	Print(plist);
}
int main()
{
	test01();
	return 0;
}