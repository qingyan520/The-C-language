//从键盘输入5个人的身高（米），求他们的平均身高（米）。
//
//输入描述 :
//一行，连续输入5个身高（范围0.00~2.00），用空格分隔。
//输出描述 :
//一行，输出平均身高，保留两位小数。
//#include<stdio.h>
//int main()
//{
//    double a, b, c, d, e;
//    scanf("%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e);
//    double f = (a + b + c + d + e) / 5;
//    printf("%.2lf", f);
//    return 0;
//}



//判断一个整数是否能5整除是一个挺简单的问题，懒惰的KiKi还是不想自己做，于是找到你帮他写代码，你就帮帮他吧。
//#include<stdio.h>
//int main()
//{
//    int M;
//    scanf("%d", &M);
//    if (M % 5 == 0)
//        printf("YES");
//    else
//        printf("NO");
//    return 0;
//}

//
//题目描述
//已知一个函数y = f(x)，当x < 0时，y = 1；当x = 0时，y = 0；当x > 0时，y = -1。
//
//输入描述 :
//一行，输入一个整数x。（ - 10000 < x < 10000）
//	输出描述 :
//一行，输出y的值。
//#include<stdio.h>
//int main()
//{
//    int X;
//    scanf("%d", &X);
//    int y;
//    if (X < 0) {
//        y = 1;
//        printf("%d", y);
//    }
//
//    if (X == 0) {
//        y = 0;
//        printf("%d", y);
//    }
//    if (X > 0) {
//        y = -1;
//        printf("%d", -1);
//    }
//    return 0;
//}


//题目描述
//输入10科成绩，换行显示输入的10科成绩。
//输入描述 :
//一行，输入10科成绩（整数表示，范围0~100），用空格分隔。
//输出描述 :
//一行，输出输入的10科成绩，用空格分隔。
//#include<stdio.h>
//int main()
//{
//    int arr[10] = { 0 };
//    for (int i = 0; i < 10; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (int i = 0; i < 10; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    return 0;
//}

//
//今年是2019年，KiKi想知道1~2019中有多少个包含数字9的数。包含数字的数是指有某一位是“9”的数，例如“2019”、“199”等。
//输入描述:
//无
//输出描述 :
//一行，一个整数，表示1~2019中共有多少个数包含数字9。
//#include <stdio.h>
//
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 1; i <= 2019; i++)
//    {
//        int t = i;
//        while (t)
//        {
//            if (t % 10 == 9)
//            {
//                count++;
//                break;
//            }
//            t = t / 10;
//        }
//    }
//    printf("%d\n", count);
//
//    return 0;
//}


//题目描述
//任意输入一个正整数N，统计1~N之间奇数的个数和偶数的个数，并输出。
//输入描述 :
//一行，一个正整数N。（1≤N≤100, 000）
//输出描述 :
//一行，1~N之间奇数的个数和偶数的个数，用空格分开。
//示例1
//输入
//5
//输出
//3 2
//#include<stdio.h>
//int main()
//{
//    int N;
//    scanf("%d", &N);
//    int a = 0;
//    int b = 1;
//    for (int i = 2; i <= N; i++)
//    {
//        if (i % 2 == 0)
//            a++;
//        else
//            b++;
//
//    }
//    printf("%d %d", b, a);
//    return 0;
//}

//题目描述
//输入n科成绩（浮点数表示），统计其中的最高分，最低分以及平均分。
//
//输入描述 :
//两行，
//
//第1行，正整数n（1≤n≤100）
//
//第2行，n科成绩（范围0.0~100.0），用空格分隔。
//输出描述 :
//输出一行，三个浮点数，分别表示，最高分，最低分以及平均分（小数点后保留2位），用空格分隔。
//示例1
//输入
//5
//99.5 100.0 22.0 60.0 88.5
//输出
//100.00 22.00 74.00
#include<stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    float* arr = (int*)malloc(n * sizeof(int));
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%f", &arr[i]);
//    }
//    float max = 0, min = arr[0];
//    float sum = 0;
//    for (int i = 0; i < n; i++)
//    {
//        if (arr[i] > max)
//        {
//            max = arr[i];
//        }
//        if (arr[i] < min)
//        {
//            min = arr[i];
//        }
//        sum += arr[i];
//    }
//    printf("%.2f %.2f %.2f", max, min, sum / n);
//
//}

//题目描述
//用户登录网站，通常需要注册，一般需要输入两遍密码。请编程判断输入的两次密码是否一致，一致输出“same”，不一致输出“different”
//
//
//输入描述 :
//每行有两个用空格分开的字符串，第一个为密码，第二个为重复密码。
//输出描述 :
//每组输出一个字符串（“same”或“different”）。
//示例1
//输入
//abc abc
//输出
//same
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char str1[100];
//    char str2[100];
//    scanf("%s%s", str1, str2);
//    if (0 == strcmp(str1, str2))
//        printf("same");
//    else
//        printf("different");
//
//    return 0;
//}

//题目描述
//输入NxM矩阵，矩阵元素均为整数，计算其中大于零的元素之和。
//
//输入描述 :
//第一行为N M(N : 矩阵行数；M : 矩阵列数, 且M, N <= 10)，接下来的N行为矩阵各行。
//输出描述 :
//一行，其中大于零的元素之和。
//示例1
//输入
//3 3
//2 3 4
//- 5 - 9 - 7
//0 8 - 4
//输出
//17
//#include<stdio.h>
//int main()
//{
//    int n, m;
//    scanf("%d%d", &n, &m);
//    int arr[10][10];
//    int sum = 0;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            if (arr[i][j] > 0)
//            {
//                sum += arr[i][j];
//            }
//
//        }
//    }
//    printf("%d", sum);
//    return 0;
//}

//题目描述
//输入10个整数，要求按输入时的逆序把这10个数打印出来。逆序输出，就是按照输入相反的顺序打印这10个数。
//输入描述 :
//一行，输入10个整数（范围 - 231~231 - 1），用空格分隔。
//输出描述 :
//一行，逆序输出输入的10个整数，用空格分隔。
//示例1
//输入
//1 2 3 4 5 6 7 8 9 10
//输出
//10 9 8 7 6 5 4 3 2 1
//#include <stdio.h>
//int main()
//{
//    int array[10] = { 0 };
//    int i = 0;
//    for (i = 0; i < 10; i++)
//        scanf("%d", &array[i]);
//    for (i = i - 1; i >= 0; i--)
//        printf("%d ", array[i]);
//    return 0;
//}


//题目描述
//输入10个整数，分别统计输出正数、负数的个数。
//输入描述 :
//输入10个整数（范围 - 231~231 - 1），用空格分隔。
//输出描述 :
//两行，第一行正数个数，第二行负数个数，具体格式见样例。
//示例1
//输入
//- 1 2 3 - 6 7 8 - 1 6 8 10
//输出
//positive : 7
//negative : 3
//#include<stdio.h>
//int main()
//{
//    int arr[10];
//    for (int i = 0; i < 10; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int a = 0, b = 0;
//    for (int i = 0; i < 10; i++)
//    {
//        if (arr[i] > 0)
//            a++;
//        if (arr[i] < 0)
//            b++;
//    }
//    printf("positive:%d\n", a);
//    printf("negative:%d\n", b);
//    return 0;
//}
//
//题目描述
//输入数字N，然后输入N个数，计算这N个数的和。
//输入描述 :
//第一行输入一个整数N(0≤N≤50)，第二行输入用空格分隔的N个整数。
//输出描述 :
//输出为一行，为第二行输入的“N个整数之和”的计算结果。
//示例1
//输入
//5
//1 2 3 4 5
//输出
//15
//#include<stdio.h>
//#include<stdio.h>
//int main()
//{
//    int N;
//    scanf("%d", &N);
//    int* arr = (int*)malloc(N * sizeof(int));
//    for (int i = 0; i < N; i++)
//    {
//        scanf("%d", (arr + i));
//    }
//    int sum = 0;
//    for (int i = 0; i < N; i++)
//    {
//        sum += *(arr + i);
//    }
//    printf("%d", sum);
//    free(arr);
//    return 0;
//}
//
//题目描述
//输入n个成绩，换行输出n个成绩中最高分数和最低分数的差。
//输入描述 :
//两行，第一行为n，表示n个成绩，不会大于10000。
//
//第二行为n个成绩（整数表示，范围0~100），以空格隔开。
//输出描述 :
//一行，输出n个成绩中最高分数和最低分数的差。
//示例1
//输入
//10
//98 100 99 97 95 99 98 97 96 100
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int* arr = (int*)malloc(n * sizeof(int));
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int min = arr[0], max = arr[0];
//    for (int i = 0; i < n; i++)
//    {
//        if (arr[i] > max)
//            max = arr[i];
//        if (arr[i] < min)
//            min = arr[i];
//    }
//    int c = max - min;
//    printf("%d", c);
//    free(arr);
//    return 0;
//}

//题目描述
//输入一个整数序列，判断是否是有序序列，有序，指序列中的整数从小到大排序或者从大到小排序。
//输入描述 :
//第一行输入一个整数N(3≤N≤50)。
//第二行输入N个整数，用空格分隔N个整数。
//输出描述 :
//输出为一行，如果序列有序输出sorted，否则输出unsorted。
//示例1
//输入
//5
//1 6 9 22 30
//输出
//sorted
//示例2
//输入
//5
//3 4 7 2 10
//输出
//unsorted
#include<stdio.h>
int main() {
    int n = 0, flag = 1;
    scanf_s("%d", &n);
    int a[50], b[50];
    for (int i = 0; i < n; i++)
        scanf_s("%d", &a[i]);
    for (int i = 0; i < n - 1; i++)
        b[i] = a[i + 1] - a[i];
    for (int i = 0; i < n - 2; i++) {
        if (b[i] * b[i + 1] < 0) {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("sorted");
    else
        printf("unsorted");
}