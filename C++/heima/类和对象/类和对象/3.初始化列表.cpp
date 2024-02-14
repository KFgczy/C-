#include<iostream>
using namespace std;
/*
初始化列表
    用来初始化属性
类对象作为类成员
	对象成员
静态成员    static
	静态成员变量  所有对象共享同一份数据 编译阶段分配内存 类内声明，类外初始化
	静态成员函数  所用对象共享同一个函数  静态成员函数只能访问静态成员变量
静态成员变量也是用访问权限的
*/
class Phone {
public:
	Phone(string pName) {
		cout << "Phone构造函数" << endl;
		m_PName=pName;
	}
	string m_PName;
	~Phone() {
		cout << "Phone构造函数" << endl;
	}

};
class Person {
private:
	static int m_B;
public:
	static void func() {
		m_A = 100;
		cout << "static函数调用" << endl;
	}
	static int m_A;

	/*Person(int a, int b, int c) {传统初始化操作
		A = a;
		B = b;
		C = c;
	}*/
	//初始化列表初始化属性
	//Person(int a, int b, int c):A(a), B(b), C(c) {}
	//Person(string name,string pName):m_name(name),m_Phone(pName){
	//	cout << "Person构造函数" << endl;
	//}//Phone m_Pone=pName
	//string m_name;
	//Phone m_Phone;
	~Person() {
		cout << "Person析构函数" << endl;
	}
};
int Person::m_A = 0;
int Person::m_B = 200;
//void test01() {
//	//Person p(30,20,10);
//	////Person p;
//	//cout << p.A << " " << p.B << " " << p.C << endl;
//	/*Person p("张三", "苹果");
//	cout << p.m_name << "  " << p.m_Phone.m_PName<< endl;*/
//	Person p;
//	cout << p.m_A << endl;
//	Person p2;
//	p2.m_A = 200;
//	cout << p.m_A << endl;
//}
void test02() {
	//静态成员变量不属与某个对象上，所有对象都共享同一份数据
	//因此静态成员变量有两种访问方式
	//1.通过对象进行访问
	Person p;
	p.func();
	/*Person p;
	//cout << p.m_A << endl;*/
	//2.通过类名进行访问
	//cout << Person::m_A << endl;
	//cout << Person::m_B << endl;私有private，类外无法访问
	Person::func();
	
}
int main() {
	test02();
	system("pause");
	return 0;
}