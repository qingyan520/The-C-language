#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main52()
{
    int num;
    scanf_s("%d", &num);
    int* p = (int*)malloc(num * sizeof(int));
    for (int i = 0; i < num; i++)
    {
        scanf_s("%d", &p[i]);
    }
    for (int i = 0; i < num - 1; i++)
    {
        for (int j = 0; j < num - 1 - i; j++)
        {
            if (*(p + j) < *(p + j + 1))
            {
                int temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", p[i]);
    }

    return 0;
}