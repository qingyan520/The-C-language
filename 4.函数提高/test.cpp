//1.�����������������꺯����ȱ��
//�꺯����ȱ��
//#include<iostream>
//using namespace std;
////ȱ��1����Ҫ�������������������
////#define my_add(x,y) x+y
////ȱ��2����ʹ�������ţ��е��������Ȼ��Ԥ��Ч����ͬ
////#define a<b? a:b
//void test01()
//{
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//��������:������˺꺯����ȱ�㣬��Ϊ����ͨ�������ִ����˺���ŵ㣬�Կռ任ʱ��
//�ؼ��֣�inline
//������������ʵ�ֱ��趼��inline
//���ڲ��ĳ�Ա��������������inline
//������������ͨ����ǰ���inline
//�������������Ǹ�������һ���������һ��ִ��
//#include<iostream>
//using namespace std;
//int main()
//{
//	system("pause");
//	return 0;
//}



//2.������Ĭ�ϲ���
//��c++�У��������β��б�����Ĭ��ֵ��
//�﷨������ֵ������ ������ (����=Ĭ��ֵ)
//����������ݣ����ó��������û�д������Ĭ���βΣ��β�=Ĭ��ֵ��
//ע�����1.���ĳ��Ĭ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ����󣬴����ұ��붼������Ĭ�ϲ���
//          2.�������������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ���
//            ������ʵ��ֻ����һ��Ĭ�ϲ���
//            ��:int fun(int a=10,int b=20);
//               int fun(int a,int b);
//ʵ����
//#include<iostream>
//using namespace std;
//int test01(int a,int b=20,int c=30)
//{
//	return a + b + c;
//}
//int main()
//{
//	int ret=test01(10,50,60);
//	cout << ret << endl;
//	system("pause");
//	return 0;
//}



//3.������ռλ����
//c++�ĺ����β��б���������ռλ����������ռλ�����ú���ʱ�������λ��
//�﷨������ֵ���� ���������������ͣ�{}
//Ŀǰûɶ��
//ռλ����Ҳ������Ĭ�ϲ���
//#include<iostream>
//using namespace std;
//void test01(int a,int=10)
//{
//	cout << "fet" << endl;
//}
//int main()
//{
//	test01(10, 20);
//	system("pause");
//	return 0;
//}



//4.��������
//���ã���������ͬ����߸�����
//�������������������
//1.ͬһ��������
//2.��������ͬ
//3.�����������Ͳ�ͬ��������ͬ����˳��ͬ
//ע�⣺�����ķ���ֵ��������Ϊ�������ص�����
//ʾ����
//#include<iostream>
//using namespace std;
//void fun()
//{
//	cout << "hello world" << endl;
//}
//void fun(int a)
//{
//	cout << a << endl;
//}
//void fun(double a)
//{
//	cout << a << endl;
//}
////�����ķ���ֵ��������������
////int fun()
////{
////
////}
//int main()
//{
//	int a = 10;
//	double b = 3.14;
//	fun();
//	fun(a);
//	fun(b);
//	system("pause");
//	return 0;
//}



//5.�������ص�ע������
//������Ϊ��������
//����������������Ĭ�ϲ���
//#include<iostream>
//using namespace std;
////1.������Ϊ��������
//void fun(int& a)
//{
//	cout << "int &a"<<endl;
//}
//void fun()
//{
//	cout << "  " << endl;
//}
//void fun(const int& a)
//{
//	cout << "const int&a" << endl;
//}
////2.����������������Ĭ�ϲ���
//void fun1(int a,int b=10)
//{
//	cout << "int a,int b=10" << endl;
//}
//void fun1(int a)
//{
//	cout << "int a" << endl;
//}
//int main()
//{
//	int a = 10;
//	const int b = 10;
//	fun(a);//��const
//	fun();
//	fun(b);//��const
//	fun1(a, b);
//	//fun1(a);//����Ĭ�ϲ���ʱ���׷�������
//	system("pause");
//	return 0;
//}