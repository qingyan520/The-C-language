#include<stdio.h>
int main58()
{
    int n;
    while (~scanf_s("%d", &n))
    {
        //先打印一个正三角形
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j < n - i; j++)
            {
                printf(" ");
            }
            for (int j = 0; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        //在打印一个倒三角形
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
                printf(" ");
            for (int j = 0; j < n - i; j++)
                printf("* ");
            printf("\n");
        }
    }
    return 0;
}