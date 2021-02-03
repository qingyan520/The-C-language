//函数指针：指向函数的指针
//#include<stdio.h>
//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	printf("%p", test);
//	printf("%p", &test);
//	return 0;
//}
//函数指针语法：函数返回值类型(*指针名)(函数参数列表)=&函数名/函数名
//例：
//#include<stdio.h>
//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	int(*p)() = test;
//	(*p)();
//	p();
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//int my_strlen(char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int(*p)(char*) = &my_strlen;
//	int ret=p("hello bit");
//	printf("%d", ret);
//	printf("%d", (*p)("hello bit"));
//	return 0;
//}


//(*(void (*)())0)();
//void (*)():返回值为空，参数列表为空的函数指针类型
//将0强转成void(*)()类型后解引用使用该函数

//void  (*  signal  (int,   void(*)(int) ))   (int);
////声明的函数叫signal,signal有两个参数，一个是int,另一个是函数指针，该函数指针返回值是void ,参数是int
////signal函数的返回值是一个函数指针，该函数指针指向的函数参数是int,返回值是void
//typedef void(*fun)(int);
//fun signal(int, fun);


//函数指针数组：存放函数指针的数组
//语法：函数返回值类型(*指针名[元素个数])={元素}；

//简易计算器
//#include<stdio.h>
//void menu()
//{
//	printf("\t\t1.加法运算\n");
//	printf("\t\t2.减法运算\n");
//	printf("\t\t3.乘法运算\n");
//	printf("\t\t4.除法运算\n");
//	printf("\t\t0.退出\n");
//}
//int add(int a, int b)
//{
//	return a + b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//int mul(int a, int b)
//{
//	return a * b;
//}
//int div(int a, int b)
//{
//	return a / b;
//}
//
//int main()
//{
//	int input = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请输入操作:>");
//		scanf_s("%d", &input);
//		int x, y;
//		printf("请输入两个数");
//		scanf_s("%d %d", &x, &y);
//		switch (input)
//		{
//		case 1:
//			 ret=add(x, y);
//			 printf("ret=%d",ret);
//			break;
//		case 2:
//			ret=sub(x, y);
//			printf("ret=%d",ret );
//			break;
//		case 3:
//			ret=mul(x, y);
//			printf("ret=%d",ret );
//			break;
//		case 4:
//			ret=div(x, y);
//			printf("ret=%d", ret);
//			break;
//		case 0:
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//#include<stdio.h>
//void menu()
//{
//	printf("\t\t1.加法运算\n");
//	printf("\t\t2.减法运算\n");
//	printf("\t\t3.乘法运算\n");
//	printf("\t\t4.除法运算\n");
//	printf("\t\t0.退出\n");
//}
//int add(int a, int b)
//{
//	return a + b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//int mul(int a, int b)
//{
//	return a * b;
//}
//int div(int a, int b)
//{
//	return a / b;
//}
//
//int main()
//{
//	int input = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请输入操作:>");
//		scanf_s("%d", &input);
//		int x, y;
//		int (*p[5])(int, int) = { 0,add,sub,mul,div };
//		if (input > 0 && input < 5)
//		{
//			printf("请输入两个数");
//			scanf_s("%d %d", &x, &y);
//			int ret = p[input](x, y);
//			printf("%d", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出计算器\n");
//			break;
//		}
//		else
//		{
//			printf("输入错误，请重新输入\n");
//		}
//		
//	} while (input);
//	return 0;
//}

//函数指针数组的用途：转移表
//#include<stdio.h>
//void menu()
//{
//	printf("\t\t1.加法运算\n");
//	printf("\t\t2.减法运算\n");
//	printf("\t\t3.乘法运算\n");
//	printf("\t\t4.除法运算\n");
//	printf("\t\t0.退出\n");
//}
//int add(int a, int b)
//{
//	return a + b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//int mul(int a, int b)
//{
//	return a * b;
//}
//int div(int a, int b)
//{
//	return a / b;
//}
//void cals(int(*p)(int, int))
//{
//	int x, y;
//	printf("请输入两个数");
//	scanf_s("%d %d", &x, &y);
//	int ret = p(x, y);
//	printf("%d ", ret);
//}
//int main()
//{
//	int input = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请输入操作:>");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			cals(add);
//			break;
//		case 2:
//			cals(sub);
//			break;
//		case 3:
//			cals(mul);
//			break;
//		case 4:
//			cals(div);
//			break;
//		case 0:
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//指向函数指针数组的指针:
//int(*(*p)[10])(int)=pArr;
//#include<stdio.h>
//int main()
//{
//	in
//	return 0;
//}


//冒泡排序
//#include<stdio.h>
//void bull_sort(int* arr, int len)
//{
//	for (int i = 0; i < len-1; i++)
//	{
//		for (int j = 0; j < len-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	bull_sort(arr, 10);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}


库函数qsort排序
#include<stdio.h>
#include<stdlib.h>
int compare(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
int main()
{
	int arr[10] = { 0,1,2,3,5,6,4,7,9,8 };
	qsort(arr, sizeof(arr)/sizeof(arr[0]),sizeof(arr[0]) , compare);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
利用qsort对结构体进行排序
#include<stdio.h>
#include<stdlib.h>
struct stu
{
	char name[20];
	int age;
};
int compare(const void* e1, const void* e2)
{
	return (*(struct stu*)e1).name - (*(struct stu*)e2).name;
}
int main()
{
	struct stu con[] = { {"张三",10},{"李四",9},{"王五",5} };
	qsort(con, sizeof(con) / sizeof(con[0]), sizeof(con[0]), compare);
	for (int i = 0; i < 3; i++)
	{
		printf("%s ", con[i].name);
		printf("%d\n", con[i].age);
	}
	return 0;
}
//利用qsort对字符串进行排序
#include<stdio.h>
#include<stdlib.h>
int compare(const void* e1, const void* e2)
{
	return *(char*)e1 - *(char*)e2;
}
int main()
{
	char str[] = "hello bit";
	qsort(str, sizeof(str) / sizeof(str[0]), sizeof(str[0]), compare);
	for (int i = 0; i < sizeof(str)/sizeof(str[0]); i++)
	{
		printf("%c ", str[i]);
	}
	return 0;
}


//#include <stdio.h>
//
//int checkData(int* p)
//{
//	int tmp[7] = { 0 }; 
//
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		if (tmp[p[i]]) 
//		{
//			return 0;
//		}
//		tmp[p[i]] = 1; 
//	}
//	return 1; 
//}
//
//int main()
//{
//	int p[5]; 
//	for (p[0] = 1; p[0] <= 5; p[0]++)
//	{
//		for (p[1] = 1; p[1] <= 5; p[1]++)
//		{
//			for (p[2] = 1; p[2] <= 5; p[2]++)
//			{
//				for (p[3] = 1; p[3] <= 5; p[3]++)
//				{
//					for (p[4] = 1; p[4] <= 5; p[4]++) 
//					{
//						if ((p[1] == 2) + (p[0] == 3) == 1 && 
//							(p[1] == 2) + (p[4] == 4) == 1 &&
//							(p[2] == 1) + (p[3] == 2) == 1 && 
//							(p[2] == 5) + (p[3] == 3) == 1 && 
//							(p[4] == 4) + (p[0] == 1) == 1 && 
//							checkData(p)
//							)
//						{
//							for (int i = 0; i < 5; i++)
//							{
//								printf("%d ", p[i]);
//							}
//							putchar('\n');
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//指针和数组笔试题解析：
//整形数组
//#include<stdio.h>
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	//printf("%d\n", *a);
//	//printf("%d \n", (&a + 1));
//	printf("%d\n", sizeof(a)); //16
//	printf("%d\n", sizeof(a + 0)); //4
//	printf("%d\n", sizeof(*a));//4
//	printf("%d\n", sizeof(a + 1));//4
//	printf("%d\n", sizeof(a[1]));//4
//	printf("%d\n", sizeof(&a));//4或者8
//	printf("%d\n", sizeof(*&a));//16
//	printf("%d\n", sizeof(&a + 1));//4
//	printf("%d\n", sizeof(&a[0]));//4
//	printf("%d\n", sizeof(&a[0] + 1));//4
//
//	return 0;
//}
//字符数组
//#include<stdio.h>
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));//6
//	printf("%d\n", sizeof(arr + 0));//4
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4
//	printf("%d\n", sizeof(&arr + 1));//4
//	printf("%d\n", sizeof(&arr[0] + 1));//4
//	printf("%d\n", strlen(arr));//无法计算23
//	printf("%d\n", strlen(arr + 0));//23
//	printf("%d\n", strlen(*arr));
//	printf("%d\n", strlen(arr[1]));
//	printf("%d\n", strlen(&arr));
//	printf("%d\n", strlen(&arr + 1));
//	printf("%d\n", strlen(&arr[0] + 1));
//}

//#include<stdio.h>
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}

//#include<stdio.h>
////由于还没学习结构体，这里告知结构体的大小是20个字节
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
//int main()
//{
//	printf("%p\n", p);
//	printf("%p\n", p + 0x1);//0000014
//	printf("%p\n", (unsigned long)p + 0x1);//000001
//	printf("%p\n", (unsigned int*)p + 0x1);//000004
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x\n%x", ptr1[-1], *ptr2);
//	return 0;
//}
//
//
#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}
//笔试题5
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}
//笔试题6
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}
//笔试题7
//#include <stdio.h>
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}
//笔试题8
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);//POINT
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}
//
void _swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base, size_t sz, size_t width, int(*cmp)(const void* e1, const void* e2))
{
	size_t i = 0;
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		size_t j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//相邻2个元素的比较
			//base[j] base[j+1] 
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//如果不满足顺序就交换
				_swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

void test3()
{
	//qsort 排序整形数组
	int arr[] = { 1, 5, 2, 4, 3, 9, 8, 6, 7, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
}

//void test4()
//{
//	//使用qsort函数排序结构体
//	struct Stu arr[] = { { "zhangsan", 20 }, { "lisi", 31 }, { "wangwu", 15 } };
//	//按照名字来排序？还是按照年龄？
//	//按年龄
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
//	//按名字排序
//	//bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
//}

int main()
{
	//test1();
	//test2();
	test3();
	return 0;
}