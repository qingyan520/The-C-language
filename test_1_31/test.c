//��Ŀ���ƣ�
//��ӡˮ�ɻ���
//��Ŀ���ݣ�
//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ���������
//�� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	for (int i = 0; i < 100000; i++)
//	{
//		int temp = i;
//		int count = 1;
//		int sum = 0;
//		while (temp / 10)
//		{
//			count++;
//			temp = temp / 10;
//		}
//		temp = i;
//		while (temp)
//		{
//			sum += pow(temp % 10, count);
//			temp = temp / 10;
//		}
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 20;
//	//ԭ�룺00000000 00000000 00000000 00010100
//	//���룺00000000 00000000 00000000 00010100
//	//���룺00000000 00000000 00000000 00010100
//	int b = -10;
//	//ԭ�룺10000000 00000000 00000000 000001010
//	//���룺11111111 11111111 11111111 111110101
//	//���룺11111111 11111111 11111111 111110110
//	int c = a + b;
//	//�ӷ�ԭ���ǲ�����ӣ�
//	//a�Ĳ��룺00000000 00000000 00000000 00010100
//	//b�Ĳ��룺11111111 11111111 11111111 11110110
//	//���     11111111 11111111 11111111 11101010
//	//����ԭ�� 11111111 11111111 11111111 11101000
//	//         10000000 00000000 00000000 00010100
//	return 0;
//}

//�������ڴ��еĴ洢��ʽ������
//��˴洢����λ���ݷ��ڸߵ�ַ������λ���ݷ��ڵ͵�ַ��
//С�˴洢����λ���ݷ��ڵ͵�ַ������λ���ݷ��ڸߵ�ַ����һ�����С�˴洢��
//int a=0x11223344
//�͵�ַ------------------------------->�ߵ�ַ
//��˴洢��11 22 33 44
//С�˴洢��44 33 22 11
//��Ƴ���֤�������Ǵ�˴洢����С�˴洢
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	//����a��00 00 00 01
//	//��˴洢:00 00 00 01
//	//С�˴洢:01 00 00 00
//	char* p = &a;
//	if (*p == 1)
//	{
//		printf("С�˴洢");
//	}
//	else
//	{
//		printf("��˴洢");
//	}
//	return 0;
//}


//����Ļ�ϴ�ӡ������ǡ�
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int arr[20][20] = { 0 };
//	for (int i = 0; i <= n; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			arr[i][0] = 1;
//			if (i > 1 && j > 0)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	for (int i = 0; i <= n; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			printf("%-2d  ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//

//#include<stdio.h>
//int main()
//{
//	printf("%d", sizeof(float));
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int member[4] = { 0 }; 
//	int i;
//	for ( i = 0; i < 4; i++)
//	{
//		member[i] = 1; 
//		if ((member[0] != 1) +(member[2] == 1) +(member[3] == 1) +(member[3] != 1) == 3)
//		{
//			break;
//		}
//		member[i] = 0;
//	}
//	putchar('A' + i); 
//	return 0;
//}
