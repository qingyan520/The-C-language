//#include<stdio.h>
//void Swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//void BubbleSort(int* a, int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = 0; j < n - 1 - i; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				Swap(&a[j], &a[j + 1]);
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,8,4,2,5,7,9,6,10,3 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr, len);
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//
//#include "stdio.h"
//void exchange(int);
//int main()
//{
//
//	int n;
//	char str[10];
//	scanf_s("%d", &n);
//	exchange(n);
//	putchar('\n');
//	return 0;
//}
//void exchange(int n)
//{
//	int i;
//	if ((i = n / 10) != 0)
//		exchange(i);
//	putchar(n % 10 + '0');
//}



//#include<stdio.h>
//int fib(int n)
//{
//	return n <= 2? n:fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	printf("%d", fib(n));
//}



//递归法分解质因数// 
#include <stdio.h>


/*子算法，判断整数n是否是素数，是素数则返回1，不是则返回0*/
int isPrime(int n)
{
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
/*求解符合题目要求的素数对，并将其输出到屏幕上*/
int getPrimePair(int n)
{
    int i;
    if (n % 2 != 0 && n <= 2) {
        return 0;	/*如果n不是大于2的偶数，返回0表示失败*/
    }
    for (i = 2; i <= n / 2; i++) {
        if (isPrime(i) && isPrime(n - i)) {
            printf("%d + %d = %d\n", i, n - i, n);
        }
    }
    return 1;  /*返回1表示成功*/
}

int main()
{
    int N;
    printf("Please input even number N\n");
    scanf_s("%d", &N);
    getPrimePair(N);
    getchar();
    getchar();
}

