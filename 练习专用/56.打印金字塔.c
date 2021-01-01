#include<stdio.h>
int main56() {
    int a, i, j;
    while (scanf_s("%d", &a) != EOF)
    {
        for (i = 0; i < a; i++)
        {
            for (j = a - i - 1; j > 0; j--)
            {
                printf(" ");
            }
            for (j = 0; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}