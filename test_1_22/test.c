//1.�ݹ�ͷǵݹ����ַ�ʽʵ��strlen���ַ�������
//�ǵݹ鷨:
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
//�ݹ鷨:
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
//2.�ݹ���������ַ�����ӡ쳲���������
//�ݹ鷨:
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
//3.����ĳ�ʼ��������
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
//��ά����Ķ�����ʹ��
//#include<stdio.h>
//int main()
//{
//	int arr[2][3] = { 1,2,3,4,5,6 };
//	int arr[][3] = { 1,2,3,4,5 };
//	//arr[m][n]��m����ʡ�ԣ�n������ʡ��
//	return 0;
//}
//4.��˳���ӡ1234ÿһλ
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
//5.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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
//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
//�ݹ鷨:
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
//�ǵݹ鷨��
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
//7.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//�ݹ鷨:
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
//�ǵݹ鷨:
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
//8.��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
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
//9.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//�ݹ鷨:
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
//�ǵݹ鷨:
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
//10.дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//   ���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//   ���룺1729�������19
//�ǵݹ��:
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
//�ݹ��:
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
//��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
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
