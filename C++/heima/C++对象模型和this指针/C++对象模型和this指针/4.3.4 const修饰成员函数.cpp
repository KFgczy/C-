#include<iostream>
using namespace std;
/*
常函数： 函数 const
	常函数内部可修改成员属性
	成员属性声明时加关键字mutable后，在常函数中依然可以修改
常对象
	声明对象前加const
	常对象只能调用常函数
*/
class Person {
public:
	//this指针的本质:指针常量，指针的指向是不可以修改的
	//const Person * const this
	//在成员函数后面加从上图，修饰的是this指向，修饰this的指向，指向和值都不可以修改
	void showPerson() const{
		this ->m_B = 100;
		//m_A = 100;
		//this = NULL;//this指针不能修改指向
	}
	void func() {

	}
	int m_A;
	mutable int m_B;//特殊变量，即使在常函数中，也可以修改这个值,加关键字mutable
};
void test01() {
	Person p;
	p.showPerson();
}
void test01() {
	const Person p;//在对象前加const，变为常函数
	//p.m_A = 100;
	p.m_B = 100;//m_B是特殊值，常对象下也可以修改
	//常对象只能调用常函数
	p.showPerson();
	//p.func();
}
int main() {
	return 0;
}