//// 请计算一下Func1基本操作执行了多少次？
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
////通过上面我们会发现大O的渐进表示法去掉了那些对结果影响不大的项，简洁明了的表示出了执另外有些算法的时间复杂度存在最好、平均和最坏情况：
////最坏情况：任意输入规模的最大运行次数(上界)
////平均情况：任意输入规模的期望运行次数
////最好情况：任意输入规模的最小运行次数(下界)
////例如：在一个长度为N数组中搜索一个数据x
////最好情况：1次找到最坏情况：N次找到
////平均情况：N / 2次找到
////在实际中一般情况关注的是算法的最坏运行情况，所以数组中搜索数据时间复杂度为O(N)
//
//// 计算BubbleSort的空间复杂度？
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