//#include<iostream>
//using namespace std;
///*
//拷贝构造函数调用时机
//    使用一个已经创建完毕的对象来初始化一个新对象
//	值传递的方式给函数参数传值
//	值方式返回局部对象
//*/
//class Person {
//	//构造函数
//public:
//	Person() {//可以有参数，可以发生重载   默认无参
//		cout << "构造函数的调用" << endl;
//	}
//	Person(int age) {
//		this->age = age;
//		cout << "有参构造函数" << endl;
//	}
//	//拷贝构造函数
//	Person(const Person& p) {
//		age = p.age;
//		cout << "拷贝构造函数的调用" << endl;
//	}
//	//析构函数
//	~Person() {//不可以有参数，不可以发生重载
//		//将堆区开辟的数据做释放操作
//		cout << "析构函数调用" << endl;
//	}
//	int age;
//};
////使用一个已经创建完毕的对象来初始化一个新对象
//void test01() {
//	Person p1(20);
//	Person p2(p1);
//	cout << p2.age << endl;
//}
////值传递的方式给函数参数传值
//void doWork(Person p) {
//
//}
//void test02() {
//	Person p;
//	doWork(p);
//}
////值方式返回局部对象
//Person doWork2() {
//	Person p1;
//	cout << &p1 << endl;
//	return p1;
//}
//void test03() {
//	Person p = doWork2();
//	cout << &p << endl;
//}
//int main2.1() {
//	//test01();
//	//test02();
//	test03();
//	system("pause");
//	return 0;
//}