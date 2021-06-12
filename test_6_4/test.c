////指针（1） 1 ，2
////（1）输入3个整数，按小到大的顺序输出，然后将程序改为输入3个字符串，按照由小到大顺序输出
//#include<stdio.h>
//void sort(int* x, int* y, int* z)
//{
//    int temp;
//    if (*x > *y) temp = *x, * x = *y, * y = temp;
//    if (*x > *z) temp = *x, * x = *z, * z = temp;
//    if (*y > *z) temp = *y, * y = *z, * z = temp;
//}
//
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf_s("%d%d%d", &a, &b, &c);
//    printf("排序前:");
//    printf("a=%d,b=%d,c=%d\n", a, b, c);
//	sort(&a, &b, &c);
//    printf("排序后;");
//    printf("a=%d,b=%d,c=%d\n",a, b, c);
//}

//(2)改成输入3个字符串，由小到大输出
//#include<stdio.h>
//
//#include<string.h>
//#define _CRT_SECURE_NO_WARNINGS
//
//int main()
//
//{
//	void swap(char* p, char* q); //声明函数
//
//	char a[80], b[80], c[80]; //定义变量
//
//	printf("请输入三个字符串：\n"); //输出要求
//
//	gets(a);
//
//	gets(b);
//
//	gets(c);
//
//	if (strcmp_s(a, b) > 0) //开始比较
//
//	{
//		swap(a, b);
//
//	}
//
//	if (strcmp_s(a, c) > 0)
//
//	{
//		swap(a, c);
//
//	}
//
//	if (strcmp_s(b, c) > 0)
//
//	{
//		swap(b, c);
//
//	}
//
//	printf("三个字符串从小到大排序为：\n"); //输出结果
//
//	printf("%s\n%s\n%s\n", a, b, c);
//
//	return 0;
//
//}
//
//void swap(char* p, char* q) //定义比较函数
//
//{
//	char a[80];
//
//	strcpy(a, p);
//
//	strcpy(p, q);
//
//	strcpy(q, a);
//
//}

//#include<stdio.h>
//#include<string.h>
//void sort1(char* p1, char* p2, char* p3)//指针
//{
//    char* a;
//    if (strcmp(p1, p2) > 0)
//    {
//
//        strcpy(a, p1);
//        strcpy(p1, p2);
//        strcpy(p2, a);
//        /*
//        a=*p1;
//        *p1=*p2;
//        *p2=a;*/
//    }
//    if (strcmp(p2, p3) > 0)
//    {
//        strcpy(a, p2);
//        strcpy(p2, p3);
//        strcpy(p3, a);
//        /*
//        a=*p2;
//        *p2=*p3;
//        *p3=a;*/
//    }
//    if (strcmp(p1, p2) > 0)
//    {
//        strcpy(a, p1);
//        strcpy(p1, p2);
//        strcpy(p2, a);
//        /*
//        a=*p1;
//        *p1=*p2;
//        *p2=a;*/
//    }
//}
//int main()
//{
//    void sort1(char*, char*, char*);
//
//    void sort2(string&, string&, string&);
//
//    char s1[100], s2[100], s3[100];
//
//    char* p1, * p2, * p3;
//
//    string r1, r2, r3;
//
//    cin >> s1 >> s2 >> s3;
//
//    r1 = string(s1);
//
//    r2 = string(s2);
//
//    r3 = string(s3);
//
//    p1 = s1;
//
//    p2 = s2;
//
//    p3 = s3;
//
//    sort1(p1, p2, p3);
//
//    cout << s1 << endl << s2 << endl << s3 << endl;
//
//    sort2(r1, r2, r3);
//
//    cout << r1 << endl << r2 << endl << r3 << endl;
//
//    return 0;
//
//
//}
//
//
//
//


////输入三个字符串，按由小到大的 顺序输出，用指针来实现
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#define M 100
//int main()
//{
//    char a[M], b[M], c[M];
//    int* p, * q, * t;
//    int x[M];
//    printf("请输入三个字符串:\n");
//    gets(a);
//    gets(b);
//    gets(c);
//    p = a;
//    q = b;
//    t = c;
//    //  printf("输出%d\n",strcmp(p,q));
//    if ((strcmp(p, q)) > 0)
//    {
//        strcpy(x, p);
//        strcpy(p, q);
//        strcpy(q, x);
//
//    }
//    if ((strcmp(p, t)) > 0)
//    {
//        strcpy(x, p);
//        strcpy(p, t);
//        strcpy(t, x);
//
//    }
//    if ((strcmp(q, t)) > 0)
//    {
//        strcpy(x, q);
//        strcpy(q, t);
//        strcpy(t, x);
//
//    }
//
//
//    printf("请输出由小到大排序好的三个字符串:%s\t%s\t%s\n", p, q, t);
//    return 0;
//}
#include<stdio.h>
void convert(int(*p)[3])
{
    int i, j, temp;
    for (i = 0; i < 3; i++)
        for (j = 0; j < i; j++)
        {
            temp = *(*(p + i) + j);
            *(*(p + i) + j) = *(*(p + j) + i);
            *(*(p + j) + i) = temp;
        }
}
int main()
{
    int a[3][3];
    int(*p)[3], i, j, temp;
    p = a;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf_s("%d", &a[i][j]);
    convert(p);
    printf("after convert:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d ", *(*(p + i) + j));
        printf("\n");
    }
    return 0;
}