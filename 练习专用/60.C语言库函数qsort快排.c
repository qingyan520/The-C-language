#include<stdio.h>
#include<stdlib.h>
//�Զ���һ��compare�������䷵��ֵΪint(���۱Ƚ��Ǹ����͵��䷵��ֵ���Ͷ���int)�����洫����(void*a)(void*b)���͵�ָ��
int compare(void* a, void* b)
{
	return *(int*)a - *(int*)b;
	//(int*)a��ʾ��a������ǿת�����ε�ַ����
	//*(int*)a����Ŀ���ַ��ֵ
	//������ֵ��������˳��ͺ�������˳��һ�£���Ϊ�������У���֮��Ϊ��������
	//��(void*a,void*b)   ����return *(int*)a-*(int*)b��Ϊ��������
	//��(void*a,void*b)   ����return *(int*)b-*(int*)a��Ϊ��������
}
int main60()
{
	//����һ�����鲢Ϊ�丳ֵ
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	qsort(arr, 10, sizeof(int), compare);
	//qsort������C���Կ⺯���е�һ�֣�����stdlib.h��
	// void qsort(void *base, size_t nitems, size_t size, int (*compare)(const void *, const void*))
	//�����溬��4����������һ������Ҫ����������ַ�������������ڶ����������С����������ÿ��Ԫ����ռ�Ŀռ䣬���ĸ���һ���Զ��庯��coompare(һ���Ҷ�����д)
	//��ӡ���кõ�����
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}