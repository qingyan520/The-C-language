//用数组模拟实现堆
#include"Heap.h"

void test01()
{
	int arr[] = { 23,26,15,23,32,10,9,11,5,1,3,2,4,9,41,24 };
	int n = sizeof(arr) / sizeof(arr[0]);
	HP hp;
	HeapInit(&hp, arr, n);
	Print(&hp);
	HeapPush(&hp, 99);
	Print(&hp);
	HeapPush(&hp, 1);
	Print(&hp);
	HeapPop(&hp);
	Print(&hp);
	
}
int main()
{
	test01();
	return 0;
}