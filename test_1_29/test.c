//1.模拟实现strlen函数
//#include<stdio.h>
//#include<assert.h>
//size_t my_strlen(const char* str)
//{
//	assert(str != NULL);
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	char str[] = "hello bit";
//	int ret = my_strlen(str);
//	printf("%d", ret);
//	return 0;
//}
//strlen函数的返回值是size_t,即unsigned int,在进行大小比较时
//会将另一个值强转成unsigned int
//例：
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)//很多人会认为3-6<0,可程序真的是这样吗?
//	{
//		printf(">");
//	}
//	else
//	{
//		printf("<");
//	}
//	return 0;
//}
//通过上述例子可以看出，strlen的返回值是unsigned int ,两个无符号整形
//相减仍然是无符号整形，即永远>0
//再比如：
//#include<stdio.h>
//#include<string.h>
//int i;
//int main()
//{
//	i--;
//	if (i > strlen("abc"));
//	{
//		printf("hehe");
//	}
//	if(i<strlen("abc"))
//	{
//		printf("haha");
//	}
//	return 0;
//}
//上面这个例子首先就会认为i没有进行初始化，程序会报错，然而并不会，i为全局变量，全局变量未进行初始化会默认为0，
//i--后变为-1，然后strlen求字符串abc的长度为3，-1>3为假打印哈哈
//然而结果并不是这样，strlen的返回值为unsigned int ,即返回无符号整形，而在进行比较时会将-1也强制转换成unsigned int
//而-1的二进制补码为11111111111111111111111111111110，当其强转成无符号整形时原，反，补码相同，此时-1就会变成一个非常大的数字，肯定大于3
//故打印hehe
//这就是关于strlen返回值的问题，很多人都认为strlen返回值为int ,其实不是这样的


//2.逆序字符串
//#include<stdio.h>
//#include<string.h>
//void change(char* str)
//{
//	char* left = str;
//	char* right = str + strlen(str) - 1;
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char str[] = "abcdef";
//	change(str);
//	printf("%s", str);
//	return 0;
//}

//调整数组使奇数全部都位于偶数前面。
#include<stdio.h>
//void test(int arr[], int len)
//{
//	int left = 0;
//	int sz = len -1 ;
//	int right =sz;
//	while (left < right)
//	{
//		while (left < right && arr[left] % 2 == 0)
//		{
//			left++;
//		}
//		while (left < right && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	test(arr, len);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//i和arr都是局部变量，都是在栈上的
//栈区内存的使用习惯：先使用高地址出的地址，再使用低地址处的空间
//随着数组下标的增长，地址由低到高变化
//所以，当数组适当的越界的情况下，就会导致越界访问循环变量i,改变i,就i可能导致死循环
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0; i <=10; i++)
//	{
//		//arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}


