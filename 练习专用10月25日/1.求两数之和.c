#include<stdio.h>
int main1()
{
    int nums[] = { 556,901,482,1771 };
    for (int i = 0; i < 4; i++)
    {
        for (int a=0;nums[i] % 2 == 0;a++)
        {
            printf("%d\n", a);
            break;
        }
       
    }
    return 0;
}