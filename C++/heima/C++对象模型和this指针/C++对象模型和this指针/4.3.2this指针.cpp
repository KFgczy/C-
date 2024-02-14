//#include<iostream>
//using namespace std;
///*
//this指针指向被调用的成员函数所属的对象
//	隐藏在每一个非静态成员函数内
//	不需要定义，直接使用即可
//	用途：
//		当形参和成员变量同名时，可用this指针区分
//		在类的非静态成员函数中返回对象本身时，可使用 return *this
//*/
//class Person {
//public:
//	Person(int age) {
//		//this指针指向  被调用的成员函数  所属的对象
//		this->age = age;//指向对象
//	}
//	Person& pAp( Person & p) {
//		this->age += p.age;
//		return *this;//this指向篇的指针，而*this指向的就是p2这个对象的本体
//	}
//	int age;
//};
//void test01() {
//	Person p1(18);
//	cout << p1.age << endl;
//}
//void test02() {
//	Person p1(10);
//	Person p2(10);
//	p2.pAp(p1).pAp(p1).pAp(p1);//链式编程思想
//	cout << p2.age << endl;
//}
//int main() {
//	test02();
//	return 0;
//}