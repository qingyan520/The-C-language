#include<stdio.h>
//��ģ��ʵ�ֶ�ʱ��ÿ����һ��Ԫ�����Ƕ�Ҫʹ�����ϵ����㷨��������²�������ݲ��뵽���ʵ�λ��
void Swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void AdjustDown(int* arr, int n, int child)
{
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (arr[child] > arr[parent])
		{
			Swap(&arr[child], &arr[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}
int main()
{
	return 0;
}