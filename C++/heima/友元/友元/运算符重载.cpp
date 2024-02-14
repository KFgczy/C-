#include<iostream>
using namespace std;
/*
运算符重载
	对已有的运算符重新定义，赋予其另一种功能，以适应不同的数据类型
加号运算符重载+
左移运算符重载  可以输出自定义的数据类型 <<
递增运算符重载++
赋值运算符重载=
关系运算符 <,>,<=,>=,!=,==
函数调用运算符重载 （） 仿函数
*/
//加号运算符重载
//1.成员函数重载+
//2.全局函数重载+
//左移运算符重载
class MyPrient {
public:
	void operator()(string test) {
		cout << test << endl;
	}
};
class MyInt {
	friend ostream& operator<<(ostream& cout, MyInt p);
public:
	MyInt(){
		num = 0;
	}
	//重载前置++运算符
	MyInt& operator++() {
		num++;
		return *this;
	}
	//重载后置++运算符
	MyInt operator++(int) {//int 代表占位参数
		MyInt temp = *this;
		num++;
		return temp;
	}
private:
	int num;
};
class Person {
public:
	int age;
public:
	string name;
	Person(string name, int age) {
		this->name = name;
		this->age = age;
	}
	bool operator==(Person &p) {
		if (this->name == p.name && this->age == p.age) {
			return true;
		}
		else {

			return false;
		}
	}
	int* Age;
	Person(int age) {
		Age = new int(age);
	}
	
	~Person() {
		if (Age != NULL) {
			delete Age;
			Age = NULL;
		}
	}
	Person(int a, int b) {
		this->a = a;
		this->b = b;
	}
	Person() {};
	friend ostream& operator<<(ostream& cout, Person& p);
	friend void test1();
private:
	friend Person operator+ (Person p1, Person p2);
	int a;
	int b;
	//成员函数重载 +
	/*Person operator+(Person& p) {//Person p3=p1.operator+(p2);
		Person temp;
		temp.a = this->a + p.a;
		temp.b = this->b + p.b;
		return temp;
	}*/
	//左移运算符<<     不能用成员函数重载
	/*void operator<<(cout) {

	}*/
public:
	//重载赋值运算符=
	Person& operator=(Person &p) {
		if (this->Age != NULL) {
			delete Age;
			Age = NULL;
		}
		 Age = new int(*p.Age);//深拷贝
		 return *this;
	}
};
//全局函数重载+
Person operator+ (Person p1, Person p2) {//Person p3=operator+(p1,p2); Person p3=p1.operator+(p2);
	Person temp;
	temp.a = p1.a + p2.a;
	temp.b = p1.b + p2.b;
	return temp;

}
//全局重载赋值函数=
//全局函数重载<<
ostream& operator<<(ostream &cout, Person &p) {
	cout << p.a << " " << p.b ;
	return cout;
}
ostream& operator<<(ostream& cout, MyInt p) {
	cout << p.num;
	return cout;
}
void test1() {
	Person p1(10, 10);
	Person p2(10, 10);
	Person p3 = p1 + p2;//Person p3=operator+(p1,p2);
	cout << p3.a << "   " << p3.b << endl;
	cout << 1 + 1 << endl;
}
void test11() {
	Person p(10, 10);
	cout << p <<endl;
}
void test111(){
	MyInt num;
	cout << ++num << endl;
	cout << num << endl;
}
void test02() {
	Person p1(18);
	Person p2(20);
	Person p3(30);
	p3 =p2 = p1;
	cout << *p1.Age << endl;
	cout << *p2.Age << endl;
	cout << *p3.Age << endl;
	
}
void test011() {
	Person pp1("Tom", 18);
	Person pp2("om", 18);
	if (pp1 == pp2) {
		cout << "相等" << endl;
	}
	else {
		cout << "不等" << endl;
	}
}
void test01() {
	MyPrient my;
	my("hello world");
}
//匿名函数对象 当前行用完即释放
int main() {
	test01();
	/*int a = 10;
	int b = 20;
	int c = 30;
	c = b = a;
	cout << c << endl;*/
	return 0;
}