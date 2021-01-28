//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d", a);
//	return 0;
//}


//int main()
//{
//	int a = 0x11223344;
//	//如果P是整型变量，解引用访问4个字节
//	int* p = &a;
//	*p = 0;
//	//如果p是字符变量，解引用只能访问1个字节
//	char* p = &a;
//	*p = 0;
//	//指针类型的第一个作用：决定了指针解引用能够访问几个字节
//	//int*  访问4个字节；
//	//char* 访问1个字节
//	//double* 访问8个字节
//	//short* 访问2个字节
//}
//数组名是数组首元素的地址
//指针类型决定了指针+/-1走多大的距离


//#include<stdio.h>
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	//野指针：p得到地址之后，地址指向的空间已经释放了，所以这时候p就为野指针了
//	int* p = test();
//	printf("%d", *p);
//	printf("hehe\n");
//	printf("%d", *p);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int* p = 20;//野指针：没有初始化，故打印位随机值
//	printf("%d", *p);
//	return 0;
//}

//指针越界访问也会导致野指针


//控指针：指向为空的指针，空指针不可以被访问


//#include<stdio.h>
//int main()
//{
//	int arr[5] = { 0 };
//	int* p = arr;
//	for (int i = 0; i < 5; i++)
//	{
//		*(p + i) = i;
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[5] = { 0 };
//	int* p = arr;
//	for (int i = 0; i < 5; i++)
//	{
//		*p++ = i;
//	}
//	//p = arr;
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//指针-指针的绝对值是指针与指针之间的元素个数
//计算前提是：两个指针指向同一块内存空间
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d ", &arr[9] - &arr[0]);
//	return 0;
//}

//模拟实现strlen的3种方法
#include<stdio.h>
//1.计数器方法
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//2.递归方法
//int my_strlen(char* str)
//{
//	return *str == 0 ? 0 : 1 + strlen(str + 1);
//}
//3.指针-指针
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++ ;
//	}
//	return str - start;
//}
//int main()
//{
//	char str[] = "hello bit";
//	int ret = my_strlen(str);
//	printf("%d", ret);
//	return 0;
//}

//int arr[2][3]:二维数组的数组名也是数组首元素的地址
//arr为arr[0]的地址

//一级指针指向元素地址
//二级指针指向一级指针
//三级指针指向二级指针

//数组：用来存放具有相同类型元素的集合
//整形数组：用来存放整形的数组
//字符指针：用来存放字符的数组
//指针数组：用来存放指针的数组
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* p1 = &a;
//	int*p2 = &b;
//	int* p3 = &c;
//	int* p[3] = { p1,p2,p3 };
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d ", *p[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	//存放字符指针得数组：存放每个字符串的首地址，根据首地址打印字符串
//	char* str[] = { "abc","bcd","def" };
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%s ", str[i]);
//	}
//	printf("\n");
//	char* p = "abcdef";
//	printf("%s", p);
//	return 0;
//}

//结构体变量的访问：
//与传值比较，传地址更加高效
//

//#include<stdio.h>
//#include<string.h>
//void change(char* str)
//{
//    char* left = str;
//    char* right = str + strlen(str)-1;
//    while (left < right)
//    {
//        char temp = *left;
//        *left = *right;
//        *right = temp;
//        left++;
//        right--;
//    }
//}
//int main()
//{
//    char str[] = "I am a student";
//    change(str);
//    printf("%s", str);
//    return 0;
//}
//void Reverse(char* str)
//{
//    char* left = str;
//    char* right = str + strlen(str) - 1;
//    while (left < right)
//    {
//        char temp = *left;
//        *left = *right;
//        *right = temp;
//        ++left;
//        --right;
//    }
//}
//
//
//int main()
//{
//    char str[] = "hello bit";
//    //在这里完成下面函数，参数自己设计，要求：使用指针
//    Reverse(str);
//    printf("%s", str);
//    return 0;
//}

//写一个函数打印arr数组的内容，不使用数组下标，使用指针。arr是一个整形一维数组。
//#include<stdio.h>
//void Print(int* p)
//{
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	Print(p);
//	return 0;
//}

//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	for (int i = 0; i<100000; i++)
//	{
//		int sum = 0;
//		int count = 1;
//		int m = i;
//		while (m/10)
//		{
//			count++;
//			m =m/ 10;
//		}
//		m = i;
//		while (m)
//		{
//			sum += pow(m%10, count);
//			m =m/ 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 999999; i++)
//	{
//		int count = 1;
//		int tmp = i;
//		int sum = 0;
//		//判断i是否为水仙花数
//		//1. 求判断数字的位数
//		while (tmp / 10)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//
//		//2. 计算每一位的次方和
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//
//		//3. 判断
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}

