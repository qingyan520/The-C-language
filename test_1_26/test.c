//���������������в�ͬλ�ĸ���
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
//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
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
//	printf("�����У�");
//	for (int i = 31; i>=1;i-=2)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	printf("ż���У�");
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//ͳ�ƶ�������1�ĸ���
//���������������������λÿһλ��1���а�λ���������ͬ�Ļ�count++�����Ǵ���һ�����⣬���ǵ���������Ϊ����ʱ
//ÿ�����������ƶ������λ������λ��һֱΪ1�����򽫻�������ѭ��
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
//�Ż���:��1�Ķ�����λһֱ���ƺ������ֵĶ�����λ���бȽϣ���ʱ������ֶ�����λΪ1����ô����1��λ���𰸲�Ϊ0
//֮�󣬵��������Ƶ���32λʱ�������λΪ����λ����Ϊ-0��ѭ��ֹͣ�����ᷢ������������ѭ���Ľ��
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

