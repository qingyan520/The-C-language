#include"DList.h"
void test01()
{
	ListNode* plist = InitListNode();
	Push_back(plist, 1);
	Push_back(plist, 2);
	Push_back(plist, 3);
	Push_back(plist, 4);
	Push_back(plist, 5);
	Push_Front(plist, 0);
	Push_Front(plist, -1);
	Pop_Back(plist);
	Pop_Front(plist);
	Print(plist);

}
int main()
{
	test01();
	return 0;
}