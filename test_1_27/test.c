//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d", a);
//	return 0;
//}


//int main()
//{
//	int a = 0x11223344;
//	//���P�����ͱ����������÷���4���ֽ�
//	int* p = &a;
//	*p = 0;
//	//���p���ַ�������������ֻ�ܷ���1���ֽ�
//	char* p = &a;
//	*p = 0;
//	//ָ�����͵ĵ�һ�����ã�������ָ��������ܹ����ʼ����ֽ�
//	//int*  ����4���ֽڣ�
//	//char* ����1���ֽ�
//	//double* ����8���ֽ�
//	//short* ����2���ֽ�
//}
//��������������Ԫ�صĵ�ַ
//ָ�����;�����ָ��+/-1�߶��ľ���


//#include<stdio.h>
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	//Ұָ�룺p�õ���ַ֮�󣬵�ַָ��Ŀռ��Ѿ��ͷ��ˣ�������ʱ��p��ΪҰָ����
//	int* p = test();
//	printf("%d", *p);
//	printf("hehe\n");
//	printf("%d", *p);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int* p = 20;//Ұָ�룺û�г�ʼ�����ʴ�ӡλ���ֵ
//	printf("%d", *p);
//	return 0;
//}

//ָ��Խ�����Ҳ�ᵼ��Ұָ��


//��ָ�룺ָ��Ϊ�յ�ָ�룬��ָ�벻���Ա�����


//#include<stdio.h>
//int main()
//{
//	int arr[5] = { 0 };
//	int* p = arr;
//	for (int i = 0; i < 5; i++)
//	{
//		*(p + i) = i;
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[5] = { 0 };
//	int* p = arr;
//	for (int i = 0; i < 5; i++)
//	{
//		*p++ = i;
//	}
//	//p = arr;
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//ָ��-ָ��ľ���ֵ��ָ����ָ��֮���Ԫ�ظ���
//����ǰ���ǣ�����ָ��ָ��ͬһ���ڴ�ռ�
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d ", &arr[9] - &arr[0]);
//	return 0;
//}

//ģ��ʵ��strlen��3�ַ���
#include<stdio.h>
//1.����������
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//2.�ݹ鷽��
//int my_strlen(char* str)
//{
//	return *str == 0 ? 0 : 1 + strlen(str + 1);
//}
//3.ָ��-ָ��
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++ ;
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

//int arr[2][3]:��ά�����������Ҳ��������Ԫ�صĵ�ַ
//arrΪarr[0]�ĵ�ַ

//һ��ָ��ָ��Ԫ�ص�ַ
//����ָ��ָ��һ��ָ��
//����ָ��ָ�����ָ��

//���飺������ž�����ͬ����Ԫ�صļ���
//�������飺����������ε�����
//�ַ�ָ�룺��������ַ�������
//ָ�����飺�������ָ�������
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* p1 = &a;
//	int*p2 = &b;
//	int* p3 = &c;
//	int* p[3] = { p1,p2,p3 };
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d ", *p[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	//����ַ�ָ������飺���ÿ���ַ������׵�ַ�������׵�ַ��ӡ�ַ���
//	char* str[] = { "abc","bcd","def" };
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%s ", str[i]);
//	}
//	printf("\n");
//	char* p = "abcdef";
//	printf("%s", p);
//	return 0;
//}

//�ṹ������ķ��ʣ�
//�봫ֵ�Ƚϣ�����ַ���Ӹ�Ч
//

//#include<stdio.h>
//#include<string.h>
//void change(char* str)
//{
//    char* left = str;
//    char* right = str + strlen(str)-1;
//    while (left < right)
//    {
//        char temp = *left;
//        *left = *right;
//        *right = temp;
//        left++;
//        right--;
//    }
//}
//int main()
//{
//    char str[] = "I am a student";
//    change(str);
//    printf("%s", str);
//    return 0;
//}
//void Reverse(char* str)
//{
//    char* left = str;
//    char* right = str + strlen(str) - 1;
//    while (left < right)
//    {
//        char temp = *left;
//        *left = *right;
//        *right = temp;
//        ++left;
//        --right;
//    }
//}
//
//
//int main()
//{
//    char str[] = "hello bit";
//    //������������溯���������Լ���ƣ�Ҫ��ʹ��ָ��
//    Reverse(str);
//    printf("%s", str);
//    return 0;
//}

//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣arr��һ������һά���顣
//#include<stdio.h>
//void Print(int* p)
//{
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	Print(p);
//	return 0;
//}

//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ��������� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	for (int i = 0; i<100000; i++)
//	{
//		int sum = 0;
//		int count = 1;
//		int m = i;
//		while (m/10)
//		{
//			count++;
//			m =m/ 10;
//		}
//		m = i;
//		while (m)
//		{
//			sum += pow(m%10, count);
//			m =m/ 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 999999; i++)
//	{
//		int count = 1;
//		int tmp = i;
//		int sum = 0;
//		//�ж�i�Ƿ�Ϊˮ�ɻ���
//		//1. ���ж����ֵ�λ��
//		while (tmp / 10)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//
//		//2. ����ÿһλ�Ĵη���
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//
//		//3. �ж�
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}

