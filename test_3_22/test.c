//#include<stdio.h>
//int main()
//{
//	//int* p = NULL;
//	//printf("%d\n", sizeof(p));//4
//	//printf("%d\n", sizeof(*p));//4
//	//int a[100];
//	//printf("%d\n", sizeof(a));//400
//	//printf("%d\n", sizeof(a[100]));//4
//	//printf("%d\n", sizeof(&a));//4
//	//printf("%d\n", sizeof(&a[0]));//4
//	int arr[10] = {0};
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr[1]));
//	return 0;
//}


//
//#include<stdio.h>
//int main()
//{	
//	int n;
//	scanf_s("%d", &n);
//	int a = 0;
//	int b = 1;
//	int c = 0;
//	int left = 0;
//	int right = 0;
//	while (1)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		if (c > n)
//		{
//			right = c - n;
//		}
//		else
//		{
//			left = n - c;
//			break;
//		}
//	}
//	int min = left < right ? left : right;
//	printf("%d", min);
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 1;
//    int c = 1;
//    int n = 0;
//    scanf_s("%d", &n);
//    while (1)
//    {
//        if (n == c)
//        {
//            printf("%d", 0);
//            break;
//        }
//        if (n < b)
//        {
//            if (abs(a - n) < abs(b - n))
//            {
//                printf("%d", abs(a- n));
//            }
//            else
//            {
//                printf("%d", abs(b- n));
//            }
//            break;
//        }
//        c = a + b;
//        a = b;
//        b = c;
//    }
//    return 0;
//}


//#include<stdio.h>
//void replaceSpace(char* str, int length) {
//    //1.算出空格个数‘
//    //2.替换空格后新的长度和位置
//    int spcount = 0;
//    for (int i = 0; i < length; i++)
//    {
//        if (str[i] == ' ')
//        {
//            spcount++;
//        }
//    }
//    int newlen = length + spcount * 2;
//    int pos = newlen - 1;
//    //3.从后往前处理空格
//    for (int i = length - 1; i >= 0; i--)
//    {
//        if (str[i] == ' ')
//        {
//            str[pos--] = '0';
//            str[pos--] = '2';
//            str[pos--] = '%';
//        }
//        else
//        {
//            str[pos--] = str[i];
//        }
//    }
//}
//
//int main()
//{
//	char str[1024] = "We Are Happy.";
//	int len = strlen(str);
//    replaceSpace(str, len);
//    printf("%s", str);
//	return 0;
//}
#include<stdio.h>
void abc(char* str)
{
	int a, b;
	for (a = b = 0; str[a] != ’\0’; a++)
		if (str[a] != ’c’)
			str[b++] = str[a];
	str[b] = '\0;
}
void main()
{
	char str[] = ”abcdef”;
	abc(str);
	printf(“str[] = % s”, str);
}
