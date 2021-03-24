//#include<stdio.h>
//int main()
//{
//	char a[1000];
//	int i;
//	for ( i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}

//
//#include<stdio.h>
//arr(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	printf("%d", arr(2,3));
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	const int a = 1;
//	int const b = 1;
//	switch (b)
//	{
//	case :
//		;
//
//	}
//	return 0;
//}


//写一个宏，可以将一个整数字的奇数位和偶数位交换
//#include<stdio.h>
//#define SwapIntBit(n) n=n%10*10+n/10
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	printf("%d", SwapIntBit(a));
//	return 0;
//}

//写一个宏，计算结构体中某变量相对于首地址的偏移，并给出说明
//#include<stdio.h>
//#define OFFSETOF( stu,c)   (int) &(((stu*)0)->c))
//struct stu
//{
//	char c;
//	int a;
//	double b;
//};
//int main()
//{
//	//struct stu p;
//	printf("%d", OFFSETOF(struct stu , c);
//	return 0;
//}


//
//#include <stdio.h>
//#include <stddef.h>
//#define OFFSETOF(struct_name, mem_name)     (int)&(((struct_name*)0)->mem_name)
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//int main()
//{
//	printf("%d\n", OFFSETOF(struct S, c));
//	printf("%d\n", (int)&(((struct S*)0)->c));
//	printf("%d\n", OFFSETOF(struct S, i));
//	printf("%d\n", OFFSETOF(struct S, d));
//	return 0;
//}

//
//#include<stdio.h>
//#define OFFSETOF(stu,c)    (int)&(((stu*)0)->c)
//struct stu
//{
//	double a;
//	int c;
//	char d;
//};
//int main()
//{
//	printf("%d", 3 << 2 | 3);
//	return 0;
//}



//
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j <=i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
 

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	for (int i = n; i>0; i--)
//	{
//		int flag = 0;
//		for (int j = 2; j <=sqrt(i) ; j++)
//		{
//			if (i % j == 0)
//			{
//				flag += 1;
//			}
//		}
//		if (flag != 0 && i == n)
//		{
//			printf("No\n");
//		}
//		if (flag == 0)
//		{
//			if (i == n)
//			{
//				printf("Yes\n");
//			}
//			else
//			{
//				printf("%d ", i);
//			}
//		}
//	}
//	return 0;
//}


#include<stdio.h>
int main()
{
	int n = 0;
	int count = 0;
	int arr[100] = { 0 };
	scanf_s("%d", &n);
	int c = n;
	if (n < 0)
	{
		n = -n;
	}
	while (n)
	{
		arr[count] = n % 10;
		n = n / 10;
		count++;
	}
	for (int i = 0; i <count ; i++)
	{
		printf("%d ", arr[i]);
	}
	if (c < 0)
	{
		printf("-\n");
	}
	return 0;
}