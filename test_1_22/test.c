//1.递归和非递归两种方式实现strlen求字符串长度
//非递归法:
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//#include<stdio.h>
//int main()
//
//{
//	char str[] = "hello bit";
//	int ret = my_strlen(str);
//	printf("%d", ret);
//	return 0;
//}
//递归法:
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	return *str == '\0' ? 0 : 1 + my_strlen(str + 1);
//}
//int main()
//{
//	char str[] = "hello bit";
//	int ret = my_strlen(str);
//	printf("%d", ret);
//	return 0;
//}
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	return *str == '\0' ? 0 : 1 + my_strlen(str+1);
//}
//int main()
//{
//	char str[] = "hello bit";
//	int ret = my_strlen(str);
//	printf("%d", ret);
//	return 0;
//}
//2.递归与迭代两种方法打印斐波那契数列
//递归法:
//#include<stdio.h>
//int f(int n)
//{
//	return n <= 2 ? 1 : f(n - 1) + f(n - 2);
//}
//int main()
//{
//	/*int n = 0;
//	scanf_s("%d", &n);*/
//	for (int i = 1; i < 10; i++)
//	{
//		int ret = f(i);
//		printf("%d ", ret);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	printf("%d", c);
//	return 0;
//}
//3.数组的初始化及访问
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	int* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	return 0;
//}
//二维数组的定义与使用
//#include<stdio.h>
//int main()
//{
//	int arr[2][3] = { 1,2,3,4,5,6 };
//	int arr[][3] = { 1,2,3,4,5 };
//	//arr[m][n]中m可以省略，n不可以省略
//	return 0;
//}
//4.按顺序打印1234每一位
//#include<stdio.h>
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d  ", n % 10);
//}
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	print(n);
//	return 0;
//}
//5.递归方式实现打印一个整数的每一位
//#include<stdio.h>
//void Print(int n)
//{
//	if (n > 9)
//	{
//		Print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	Print(n);
//	return 0;
//}
//6.递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//递归法:
//#include<stdio.h>
//int f(int n)
//{
//	return n <= 1 ? 1 : n * f(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int ret = f(n);
//	printf("%d", ret);
//	return 0;
//}
//非递归法：
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int result = 1;
//	for (int i =1; i <=n; i++)
//	{
//		result *= i;
//	}
//	printf("%d", result);
//	return 0;
//}
//7.递归和非递归分别实现strlen
//递归法:
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	return *str == '\0' ? 0 : 1 + my_strlen(str + 1);
//}
//int main()
//{
//	char str[] = "hello bit";
//	int ret = my_strlen(str);
//	printf("%d", ret);
//	return 0;
//}
//非递归法:
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char str[] = "hello bit";
//	int ret = my_strlen(str);
//	printf("%d", ret);
//	return 0;
//}
//8.编写一个函数实现n的k次方，使用递归实现。
//#include<stdio.h>
//int Pow(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	return k <=1 ? n: n * Pow(n, k - 1);
//	
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf_s("%d%d", &n, &k);
//	int ret = Pow(n, k);
//	printf("%d", ret);
//	return 0;
//}
//9.递归和非递归分别实现求第n个斐波那契数
//递归法:
//#include<stdio.h>
//int f(int n)
//{
//	return n <= 2 ? 1 : f(n - 1) + f(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int ret = f(n);
//	printf("%d", ret);
//	return 0;
//}
//非递归法:
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while(n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	printf("%d", c);
//	return 0;
//}
//10.写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//   例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//   输入：1729，输出：19
//非递归版:
//#include<stdio.h>
//int DigitSum(int n)
//{
//	int sum = 0;
//	while (n)
//	{
//		int m = n % 10;
//		sum += m;
//		n /= 10;
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d", ret);
//	return 0;
//}
//递归版:
//#include<stdio.h>
//int DigitSum(int n)
//{
//	if (n > 9)
//		return DigitSum(n / 10) + n % 10;
//	else
//		return n;
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d", ret);
//	return 0;
//}
//编写一个函数 reverse_string(char* string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
//#include<stdio.h>
//#include<string.h>
//void reverse_string(char* string)
//{
//	int len = strlen(string);
//	char tmp = *string;
//	*string = *(string + len - 1);
//
//	*(string + len - 1) = '\0';
//	if (strlen(string + 1) >= 2)
//		reverse_string(string + 1);
//
//	*(string + len - 1) = tmp;
//}
//int main()
//{
//	char str[] = "hello bit";
//	printf("%s\n", str);
//	reverse_string(str);
//	printf("%s", str);
//	return 0;
//}
