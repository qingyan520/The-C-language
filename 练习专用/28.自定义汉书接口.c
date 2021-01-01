#include <stdio.h>
#define MAXN 10

int search(int list[], int n, int x)
{
    for (int i = 0; i <=n; i++)
    {
        if (list[i] == x)
        {
            return (i);
        }
        else
        {
            return -1;
        }
    }
}

int main28()
{
    int i, index, n, x;
    int a[MAXN];

    scanf_s("%d", &n);
    for (i = 0; i < n; i++)
        scanf_s("%d", &a[i]);
    scanf_s("%d", &x);
    index = search(a, n, x);
    if (index != -1)
        printf("index = %d\n", index);
    else
        printf("Not found\n");

    return 0;
}