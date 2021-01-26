//求两个数二进制中不同位的个数
//#include<stdio.h>
//int main()
//{
//	int  a = 0;
//	int b = 0;
//	scanf_s("%d%d", &a, &b);
//	int c = a ^ b;
//	int count = 0;
//	while (c)
//	{
//		if ((c & 1) == 1)
//		{
//			count++;
//		}
//		c = c >> 1;
//	}
//	printf("%d", count);
//}
//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	int arr[32] = { 0 };
//	for (int i = 0; i < 32; i++)
//	{
//		if ((a & 1) == 1)
//		{
//			arr[i] = 1;
//		}
//		else
//		{
//			arr[i] = 0;
//		}
//		a=a >> 1;
//	}
//	printf("奇数列：");
//	for (int i = 31; i>=1;i-=2)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	printf("偶数列：");
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//统计二进制中1的个数
//最基础的做法：将二进制位每一位与1进行按位与操作，相同的话count++，但是存在一个问题，就是当所求数字为负数时
//每次数字向右移动，最高位补符号位，一直为1，程序将会陷入死循环
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	int count = 0;
//	while (a)
//	{
//		if ((a & 1) == 1)
//		{
//			count++;
//		}
//		a >> 1;
//	}
//	printf("%d", count);
//	return 0;
//}
//优化后:将1的二进制位一直左移后与数字的二进制位进行比较，此时如果数字二进制位为1，那么它与1按位或后答案不为0
//之后，当以做左移到第32位时，其最高位为符号位，即为-0，循环停止，不会发生上述陷入死循环的结果
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	int flag = 1;
//	int count = 0;
//	while (flag)
//	{
//		if ((a & flag) != 0)
//		{
//			count++;
//		}
//		flag = flag << 1;
//	}
//	printf("%d", count);
//	return 0;
//}

