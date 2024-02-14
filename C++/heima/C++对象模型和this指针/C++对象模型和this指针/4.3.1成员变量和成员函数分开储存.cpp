//#include<iostream>
//using namespace std;
///*
//只有非静态成员变量才属于类的对象上
//*/
//class Person {
//public:
//	int m_A;//非静态成员变量，           属于类的对象上
//	static int m_B;//静态成员函数		 不属于类的对象上
//	void func() {}//非静态成员函数       不属于类的对象上
//	static void func2() {}//静态成员函数 不属于类的对象上
//};
//int Person::m_B = 0;
//void test01() {
//	Person p;//空对象占用内存空间为1字节	为了区分空对象占内存的位置	每个空对象也应该有一个独一无二的内存地址
//	cout << sizeof(p) << endl;
//}
//void test02() {
//	Person p;//占用内控空间4字节
//	cout << sizeof(p) << endl;
//}
//int main1() {
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}