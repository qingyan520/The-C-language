//// �����һ��Func1��������ִ���˶��ٴΣ�
//void Func1(int N)
//{
//	int count = 0;
//	for (int i = 0; i < N; ++i)
//	{
//		for (int j = 0; j < N; ++j)
//		{
//			++count;
//		}
//	}
//	for (int k = 0; k < 2 * N; ++k)
//	{
//		++count;
//	}
//	int M = 10;
//	while (M--)
//	{
//		++count;
//	}
//	printf("%d\n", count)
//}
////ͨ���������ǻᷢ�ִ�O�Ľ�����ʾ��ȥ������Щ�Խ��Ӱ�첻����������˵ı�ʾ����ִ������Щ�㷨��ʱ�临�Ӷȴ�����á�ƽ����������
////���������������ģ��������д���(�Ͻ�)
////ƽ����������������ģ���������д���
////�����������������ģ����С���д���(�½�)
////���磺��һ������ΪN����������һ������x
////��������1���ҵ�������N���ҵ�
////ƽ�������N / 2���ҵ�
////��ʵ����һ�������ע�����㷨������������������������������ʱ�临�Ӷ�ΪO(N)
//
//// ����BubbleSort�Ŀռ临�Ӷȣ�
//void BubbleSort(int* a, int n)
//{ 
//	assert(a);
//	for (size_t end = n; end > 0; --end)
//	{ 
//		int exchange = 0; 
//		for (size_t i = 1; i < end; ++i) 
//		{ 
//			if (a[i-1] > a[i])
//			{
//				Swap(&a[i-1], &a[i]);
//				exchange = 1;
//			}
//		}
//		if (exchange == 0)
//			break; 
//	}
//}
//#include<stdio.h>
//void func(int x)
//{
//    int count = 0;
//    int m = x;
//    int c = x;
//    if (x < 0)
//    {
//        x = -x;
//    }
//    if (m < 0)
//    {
//        m = -m;
//    }
//    while (x)
//    {
//        x = x / 10;
//        count++;
//    }
//    int* arr = (int*)malloc(count * sizeof(int));
//    int i = 0;
//    while (m)
//    {
//    
//        m = m % 10;
//        arr[i] = m;
//        m = m / 10;
//        i++;
//    }
//    if (c < 0)
//    {
//        printf("-");
//    }
//    for (int j = 0; j < i; j++)
//    {
//        printf("%d ", arr[i]);
//    }
//}
//int main()
//{
//    func(-123);
//}

#include<stdio.h>
int main()
{
	printf("%d", sizeof(void*));
}