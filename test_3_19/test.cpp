//#include<iostream>
//using namespace std;
//class person
//{
//public:
//	person()
//	{
//		cout << "person的默认构造函数调用" << endl;
//	}
//	person(int a)
//	{
//		cout << "person的有参构造函数调用" << endl;
//	}
//	person(const person& p)
//	{
//		cout << "person的拷贝函数调用" << endl;
//		age = p.age;
//	}
//	~person()
//	{
//		cout << "person的析构函数的调用" << endl;
//	}
//
//
//
//	int age;
//};
////构造函数与析构函数的调用
//void test01()
//{
//	person p;
//	person p1(10);
//	person p3(p1);
//	person p4 = p3;
//}
//int main()
//{
//	test01();
//	return 0;
//}