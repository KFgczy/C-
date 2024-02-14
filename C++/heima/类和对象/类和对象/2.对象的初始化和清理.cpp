#include<iostream>
using namespace std;
/*
可由编译器实现 空实现   编译器自动调用
  构造函数    初始化  主要作用于创建对象时为对象的成员赋值，构造函数由编译器自动调用，无需手动
  析构函数    清理    主要作用在于对象销毁前系统自动调用，执行一些清理工作
构造函数的分类及调用
  两种分类方式：
    有参构造和无参构造
	普通构造和拷贝构造
  三种调用方式：
    括号法
	显示法
	隐式转换法
*/
//class Person {
//	//构造函数
//public:
//	Person() {//可以有参数，可以发生重载   默认无参
//		cout << "构造函数的调用" << endl;
//	}
//	Person(int a) {
//		age = a;
//		cout << "有参构造函数的调用" << endl;
//	}
//	//拷贝构造函数
//	Person(const Person &p) {
//		age = p.age;
//		cout << "拷贝构造函数的调用" << endl;
//	}
//	//析构函数
//	~Person() {//不可以有参数，不可以发生重载
//		cout << "析构函数调用" << endl;
//	}
//	int age;
//};
////调用
//void test01() {
//	//括号法
//	//Person p1;//栈上的数据，函数执行完释放这个对象 
//	//Person p2(10);
//	//Person p3(p2);
//	/*cout << p2.age << endl;
//	cout << p3.age << endl;*/
//	//显示法
//	//Person p1;
//	//Person p2 = Person(10);//有参构造
//	//Person p3 = Person(p2);//拷贝构造
//	//Person(10);//匿名对象  当前行执行结束后，系统会立即回收匿名对象
//	//cout << "aaaaaaaaa" << endl;
//	// 不要里有拷贝函数，初始化匿名函数
//	//隐式转换法
//	Person p2 =10;//有参构造
//	Person p3 = Person(p2);
//}
//int main2() {
//	test01();
//	system("pause");
//	return 0;
//}