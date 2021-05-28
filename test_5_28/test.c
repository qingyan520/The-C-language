//1.起泡法进行排序
//#include<stdio.h>
//void Swap(int* a, int* b)
//{
//	int temp= *a;
//	*a = *b;
//	*b = temp;
//}
//void BubbleSort(int* arr, int n)
//{
//	for (int i = 0; i < n-1; i++)
//	{
//		for (int j = 0; j < n - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				Swap(&arr[j], &arr[j + 1]);
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10];
//	for (int i = 0; i < 10; i++)
//	{
//		scanf_s("%c", &arr[i]);
//	}
//	BubbleSort(arr, sizeof(arr) / sizeof(int));
//	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}

//2.将整数转化为字符串
//#include <stdio.h>
//
//char r[20];
//int i = 0;
//void f(int n) {
//    if (n != 0) {
//        //  printf("%c",n%)
//        r[i++] = n % 10 + '0';
//        n /= 10;
//        f(n);
//    }
//    return;
//}
//int main(void) {
//    //("%s",'A'+'M');
//    f(1456);
//    for (int y = i - 1; y >= 0; y--) {
//        putchar(r[y]);
//    }
//    return 0;
//}
//
//
//#include<stdio.h>
////最大共约数
//int max(int a, int b)
//{
//	int c = 0;
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	return b;
//}
//int main()
//{
//	int a = 0, b = 0;
//	scanf_s("%d%d", &a, &b);
//	int d = a * b;
//	int c = 0;
//
//	printf("最大公约数为:%d\n",max(a,b) );//最大公约数
//	printf("最小公倍数为：%d\n", d / max(a,b));//最小公倍数=a*b/最大公约数
//
//	return 0;
//
//}