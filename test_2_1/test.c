
//数组指针：int (*p)=&arr;
//指向数组的指针（*p）==>数组名
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);
//		printf("%d ", *((*p) + i));
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 9;
//	float* p = (float*)&n;
//	printf("%d\n", n);
//	printf("%f\n", *p);
//	*p = 9.0;
//	printf("%d\n", n);
//	printf("%f", *p);
//
//	return 0;
//}

//字符指针
//用法一：
//#include<stdio.h>
//int main()
//{
//	char a = 'a';
//	char* p = &a;
//
//	return 0;
//}
//用法二：
//#include<stdio.h>
//int main()
//{
//	char* p = "abcdef";
//	//p指向abcdef这个常量字符串的首地址，知道首地址位置向后打印整个字符串
//	printf("%s", p);
//	printf("\n%c", *p);
//	return 0;
//}
//例题
//#include<stdio.h>
//int main()
//{
//	char str1[] = "hello world";
//	char str2[] = "hello world";
//	char* str3 = "hello world";
//	char* str4 = "hello world";
//	if (str1 == str2)
//	{
//		printf("str1与str2相等\n");
//	}
//	else
//	{
//		printf("str1与str2不相等\n");
//	}
//	if (str3 == str4)
//	{
//		printf("str3与str4相等\n");
//	}
//	else
//	{
//		printf("str3与str4不相等\n");
//	}
//		return 0;
//}
//上述例子很明显str1与str2不相等，因为数组名是数组首元素的地址
//两个字符串数组的地址肯定不相等
//str3与str4都是指针，指向同一个常量字符串，c/c++会把常量字符串存储到一个
//单独的内存区域，当几个指针同时指向这个字符串常量时其实指向同一块内存，故相同


//指针数组：存放指针的数组
//#include<stdio.h>
//int main()
//{
//	int* att[10];
//	int** arr[10];
//	return 0;
//}


//数组指针:指向数组的指针
//int*p[10];  存放10个指针元素的数组
//int(*p)[10]; 指向有10个元素内存空间数组的指针
//解释:p先与*结合，说明p是一个指针变量，然后指向的是一个
//大小为10个整形的数组，所以p是一个指针，指向一个数组，所以叫数组指针
//这里注意：[]优先级高于*号，所以必须加上（）来保证p先与*结合

//&数组名与数组名的区别:
//&数组名：取出的是整个数组的地址，+1会跳过整个数组
//数组名：数组首元素的地址，如int arr[10],数组名是其首元素arr[0]的地址
//        再比如int arr[3][5],数组名是其第一行arr[0]的首地址

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	//*p==>arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", (* p)[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*p + i));
//	}
//	printf("\n");
//	int* q = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(q + i));
//	}
//	return 0;
//}

//打印二维数组
//#include<stdio.h>
//void print1(int arr[3][5], int row, int low)
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < low; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int(*p)[5], int row, int col)
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//          p+i为第i行，+j定位到元素
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	return 0;
//}

//#include<stdio.h>
//void test(int* p)
//{
//
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int arr[10] = { 0 };
//	test(&a);//可以，一级指针接受变量的地址
//	test(pa);//一级指针传送，一级指针接受，要是&p,则要用二级指针接受
//	test(arr);//arr为地址，可以用指针接受
//	return 0;
//}

//#include<stdio.h>
//void test(int** p)
//{
//
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	int* arr[10];
//	test(&pa);
//	test(ppa);
//	test(arr);
//}


//一维数组传参的几种方式
//#include<stdio.h>
////数组类型传递
//void test1(int arr[])
//{
//
//}
//void test2(int arr[5])
//{
//
//}
////指针类型传递
//void test3(int* arr)
//{
//
//}
//void test4(int** arr)
//{
//	//指针数组里面是10个int类型的指针，传过来用二级指针接受
//}
//void test5(int* arr[10])
//{
//	//与数组定义一致
//}
//int main()
//{
//	int arr[5] = { 0 };
//	test1(arr);
//	test2(arr);
//	test3(arr);
//	int* arr2[10] = { 0 };//指针数组：存放指针的数组
//	test4(arr2);
//	test5(arr2);
//	return 0;
//}


//二维数组传参
//#include<stdio.h>
//void test1(int arr[3][5])
//{
//
//}
//void test2(int arr[][5])
//{
//
//}
////void test(int arr[][])：不行，数组可以没有行，但必须有列
////void test(int*arr):不行，这是一维数组传参时的说法
////void test(int* arr[5]):不行，含有5个int类型的指针
////void test(int**arr):不行，二级指针只能接受一级指针
//void test3(int(*p)[5])
//{
//
//}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test1(arr);
//	test2(arr);
//	test3(arr);
//	return 0;
//}


//一级指针传参
//#include<stdio.h> 
//void print(int** p, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(*p + i));
//	}
//}
//main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(&p, sz);
//	return 0;
//}
//void test1(int*p)
////接收一个整形指针
//void test2(char*p)
////接受字符型指针


//二级指针传参
//#include<stdio.h>
//void test(int**ptr)
//{
//	printf("%d ", **ptr);
//}
//int main()
//{
//	int n = 20;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}


//函数指针:指向函数的指针
//存放函数的地址
//#include<stdio.h>
//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	printf("%p\n", test);
//	printf("%p\n", &test);
//	return 0;
//}
//&函数名和函数名都是函数的地址
//函数地址的存储：int(*p)(int ,int)=&test;
//                函数返回值（*p）(函数参数)=&函数名
//打印：（*p）(2,3)后就可以调用函数
//示例：
//#include<stdio.h>
//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	void(*p)() = &test;
//	(*p)();
//	return 0;
//}

//代码1
//(*(void (*)())0)();
//代码2
//void (*signal(int , void(*)(int)))(int);


//函数指针数组:存放函数指针的数组
//int(*p[4])(int int) = { ADD,SUM,MUL,DIV };
//int* arr[5];
//char* (*pf)(char*, const char*);
//char* (*pf[4])(char*, const char*);
