//1.ģ��ʵ��strlen����
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
//strlen�����ķ���ֵ��size_t,��unsigned int,�ڽ��д�С�Ƚ�ʱ
//�Ὣ��һ��ֵǿת��unsigned int
//����
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)//�ܶ��˻���Ϊ3-6<0,�ɳ��������������?
//	{
//		printf(">");
//	}
//	else
//	{
//		printf("<");
//	}
//	return 0;
//}
//ͨ���������ӿ��Կ�����strlen�ķ���ֵ��unsigned int ,�����޷�������
//�����Ȼ���޷������Σ�����Զ>0
//�ٱ��磺
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
//��������������Ⱦͻ���Ϊiû�н��г�ʼ��������ᱨ��Ȼ�������ᣬiΪȫ�ֱ�����ȫ�ֱ���δ���г�ʼ����Ĭ��Ϊ0��
//i--���Ϊ-1��Ȼ��strlen���ַ���abc�ĳ���Ϊ3��-1>3Ϊ�ٴ�ӡ����
//Ȼ�����������������strlen�ķ���ֵΪunsigned int ,�������޷������Σ����ڽ��бȽ�ʱ�Ὣ-1Ҳǿ��ת����unsigned int
//��-1�Ķ����Ʋ���Ϊ11111111111111111111111111111110������ǿת���޷�������ʱԭ������������ͬ����ʱ-1�ͻ���һ���ǳ�������֣��϶�����3
//�ʴ�ӡhehe
//����ǹ���strlen����ֵ�����⣬�ܶ��˶���Ϊstrlen����ֵΪint ,��ʵ����������


//2.�����ַ���
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

//��������ʹ����ȫ����λ��ż��ǰ�档
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

//i��arr���Ǿֲ�������������ջ�ϵ�
//ջ���ڴ��ʹ��ϰ�ߣ���ʹ�øߵ�ַ���ĵ�ַ����ʹ�õ͵�ַ���Ŀռ�
//���������±����������ַ�ɵ͵��߱仯
//���ԣ��������ʵ���Խ�������£��ͻᵼ��Խ�����ѭ������i,�ı�i,��i���ܵ�����ѭ��
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


