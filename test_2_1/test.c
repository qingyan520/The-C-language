
//����ָ�룺int (*p)=&arr;
//ָ�������ָ�루*p��==>������
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

//�ַ�ָ��
//�÷�һ��
//#include<stdio.h>
//int main()
//{
//	char a = 'a';
//	char* p = &a;
//
//	return 0;
//}
//�÷�����
//#include<stdio.h>
//int main()
//{
//	char* p = "abcdef";
//	//pָ��abcdef��������ַ������׵�ַ��֪���׵�ַλ������ӡ�����ַ���
//	printf("%s", p);
//	printf("\n%c", *p);
//	return 0;
//}
//����
//#include<stdio.h>
//int main()
//{
//	char str1[] = "hello world";
//	char str2[] = "hello world";
//	char* str3 = "hello world";
//	char* str4 = "hello world";
//	if (str1 == str2)
//	{
//		printf("str1��str2���\n");
//	}
//	else
//	{
//		printf("str1��str2�����\n");
//	}
//	if (str3 == str4)
//	{
//		printf("str3��str4���\n");
//	}
//	else
//	{
//		printf("str3��str4�����\n");
//	}
//		return 0;
//}
//�������Ӻ�����str1��str2����ȣ���Ϊ��������������Ԫ�صĵ�ַ
//�����ַ�������ĵ�ַ�϶������
//str3��str4����ָ�룬ָ��ͬһ�������ַ�����c/c++��ѳ����ַ����洢��һ��
//�������ڴ����򣬵�����ָ��ͬʱָ������ַ�������ʱ��ʵָ��ͬһ���ڴ棬����ͬ


//ָ�����飺���ָ�������
//#include<stdio.h>
//int main()
//{
//	int* att[10];
//	int** arr[10];
//	return 0;
//}


//����ָ��:ָ�������ָ��
//int*p[10];  ���10��ָ��Ԫ�ص�����
//int(*p)[10]; ָ����10��Ԫ���ڴ�ռ������ָ��
//����:p����*��ϣ�˵��p��һ��ָ�������Ȼ��ָ�����һ��
//��СΪ10�����ε����飬����p��һ��ָ�룬ָ��һ�����飬���Խ�����ָ��
//����ע�⣺[]���ȼ�����*�ţ����Ա�����ϣ�������֤p����*���

//&��������������������:
//&��������ȡ��������������ĵ�ַ��+1��������������
//��������������Ԫ�صĵ�ַ����int arr[10],������������Ԫ��arr[0]�ĵ�ַ
//        �ٱ���int arr[3][5],�����������һ��arr[0]���׵�ַ

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

//��ӡ��ά����
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
//          p+iΪ��i�У�+j��λ��Ԫ��
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
//	test(&a);//���ԣ�һ��ָ����ܱ����ĵ�ַ
//	test(pa);//һ��ָ�봫�ͣ�һ��ָ����ܣ�Ҫ��&p,��Ҫ�ö���ָ�����
//	test(arr);//arrΪ��ַ��������ָ�����
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


//һά���鴫�εļ��ַ�ʽ
//#include<stdio.h>
////�������ʹ���
//void test1(int arr[])
//{
//
//}
//void test2(int arr[5])
//{
//
//}
////ָ�����ʹ���
//void test3(int* arr)
//{
//
//}
//void test4(int** arr)
//{
//	//ָ������������10��int���͵�ָ�룬�������ö���ָ�����
//}
//void test5(int* arr[10])
//{
//	//�����鶨��һ��
//}
//int main()
//{
//	int arr[5] = { 0 };
//	test1(arr);
//	test2(arr);
//	test3(arr);
//	int* arr2[10] = { 0 };//ָ�����飺���ָ�������
//	test4(arr2);
//	test5(arr2);
//	return 0;
//}


//��ά���鴫��
//#include<stdio.h>
//void test1(int arr[3][5])
//{
//
//}
//void test2(int arr[][5])
//{
//
//}
////void test(int arr[][])�����У��������û���У�����������
////void test(int*arr):���У�����һά���鴫��ʱ��˵��
////void test(int* arr[5]):���У�����5��int���͵�ָ��
////void test(int**arr):���У�����ָ��ֻ�ܽ���һ��ָ��
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


//һ��ָ�봫��
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
////����һ������ָ��
//void test2(char*p)
////�����ַ���ָ��


//����ָ�봫��
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


//����ָ��:ָ������ָ��
//��ź����ĵ�ַ
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
//&�������ͺ��������Ǻ����ĵ�ַ
//������ַ�Ĵ洢��int(*p)(int ,int)=&test;
//                ��������ֵ��*p��(��������)=&������
//��ӡ����*p��(2,3)��Ϳ��Ե��ú���
//ʾ����
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

//����1
//(*(void (*)())0)();
//����2
//void (*signal(int , void(*)(int)))(int);


//����ָ������:��ź���ָ�������
//int(*p[4])(int int) = { ADD,SUM,MUL,DIV };
//int* arr[5];
//char* (*pf)(char*, const char*);
//char* (*pf[4])(char*, const char*);
