//�����壺����һ���ڴ�ռ�
//�ؼ��֣�union
// #include<stdio.h>
//union u
//{
//	char i;
//	int c;
//};
//int main()
//{
//	printf("%d", sizeof(union u));
//	return 0;
//}
//�������ڴ��С�ļ��㣺
//������Ĵ�С������������Ա�Ĵ�С��
//�������������Ա��С����������������������ʱ�򣬾�Ҫ
//���뵽����������������
//���磺
//#include<stdio.h>
//union u
//{
//	char arr[5];
//	int c;
//};//��СΪ8
//union u1
//{
//	char arr1[10];
//	int i;
//};//12
//union u2
//{
//	short arr3[7];
//	char i;
//};//14
//int main()
//{
//	printf("%d", sizeof(union u2));
//	return 0;
//}
//�������Ӧ�ˣ��жϻ�е��С��
//1.ָ��ķ���
//#include<stdio.h>
//int main()
//{
//	int i = 1;//0X 00 00 00 01
//	char* p =(char*)&i;
//	if (*p == 1)
//	{
//		printf("С��");
//	}
//	else
//	{
//		printf("���");
//	}
//}
//2.������ķ�����
//#include<stdio.h>
//union u
//{
//	char a;
//	int i;
//};
//int main()
//{
//	union u k;
//	k.i = 2;
//	k.a = 1;
//	if (k.i == 1)
//	{
//		printf("С��");
//	}
//
//
//	return 0;
//}
//λ�Σ�λ�γ�Ա������int ,unsigned int ,signed int ,char
//λ���е�λָ���Ƕ�����λ
//λ�γ�Ա����ð�ź�һ������
//���磺
//struct Q
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//int main()
//{
//
//	return 0;
//}

//�ṹ���ڴ����
//#include<stdio.h>
//struct stu
//{
//	char a;
//	int i;
//};
//int main()
//{
//	printf("%d", sizeof(struct stu));
//	return 0;
//}
//��������ܶ��˴����Ϊ��5���������Ǻ����˽ṹ���ڴ����
//�����˽�ṹ���ڴ����Ļ�������
//1.��һ����Ա���ڽṹ�����ƫ����Ϊ0�ĵ�ַ��
//2.������ԱҪ���뵽ĳ�����֣������������������ĵ�ַ��
//������=������Ĭ�ϵ�һ����������ó�Ա��С�Ľ�Сֵ
//vs��Ĭ�ϵ�ֵΪ8��
//linux��Ĭ��ֵΪ4
//3.�ṹ���ܴ�СΪ����������������
//4.�������Ƕ�׽ṹ�壬Ƕ�׵Ľṹ����뵽�Լ��������������������
//���ṹ��������С����������������������Ƕ�׽ṹ�壩��������
//Ϊʲô�����ڴ����?
// //�󲿷ֵĲο����϶�������˵�ģ�
// 1. ƽ̨ԭ��(��ֲԭ��)�� �������е�Ӳ��ƽ̨���ܷ��������ַ�ϵ��������ݵģ�ĳЩӲ��ƽֻ̨����ĳЩ��ַ��ȡĳЩ�ض����͵����ݣ������׳�Ӳ���쳣��
// 2. ����ԭ�� ���ݽṹ(������ջ)Ӧ�þ����ܵ�����Ȼ�߽��϶��롣 ԭ�����ڣ�Ϊ�˷���δ������ڴ棬��������Ҫ�������ڴ���ʣ���������ڴ���ʽ���Ҫһ�η��ʡ�
//�ܵ���˵��Ϊʲô�����ڴ����
//�ṹ����ڴ�������ÿռ�����ȡʱ���������
//��ƽṹ���ʱ�����Ǽ�Ҫ������룬��Ҫ��ʡ�ռ䣬���������
//��ռ�ÿռ�С�ĳ�Ա����������һ��

//ģ��ʵ��stract
//#include<stdio.h>
//#include<assert.h>
//void my_strcat(char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 != '\0')
//	{
//		str1++;
//	}
//	while (*str1 ++= *str2++);
//}
//
//int main()
//{
//	char str1[20] = "****";
//	char str2[10] = "hello bit";
//	my_strcat(str1, str2);
//	printf("%s", str1);
//	return 0;
//}

//ģ��ʵ��strcpy
//#include<stdio.h>
//#include<assert.h>
//int my_strcpy(char* str1, char* str2)
//{
//	assert(str1 && str2);
//	while (1)
//	{
//		if (*str1 == *str2)
//		{
//			return 0;
//		}
//		else
//		{
//			return * str1 - *str2;
//		}
//		str1++;
//		str2++;
//	}
//}
//int main()
//{
//	char str1[10] = "hello";
//	char str2[10] = "bit";
//	int ret = my_strcpy(str1, str2);
//	printf("%d", ret);
//	return 0;
//}