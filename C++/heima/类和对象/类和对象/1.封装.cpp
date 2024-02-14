#include<iostream>
using namespace std;
/*
C++三大特性 封装，继承，多态
封装 
    将属性和行为作为一个整体
	将属性和行为加以权限控制
封装意义
    在类设计时，可以把属性和行为放在不同的权限下，加以控制
	public    公共权限  类内可以访问   类外可以访问
	protected 保护权限  类内可以访问   类外不可以访问   子类可以访问父类
	private   私有权限  类内可以访问   类外不可以访问   子类不可以访问父类
struct和class区别在于默认的访问权限不同
struct 默认公有
class  默认私有
*/
//class Person {
//public:
//	string name;
//protected:
//	string Car;
//private:
//	int password;
//public:
//	void func() {
//		name = "张三";
//		Car = "拖拉机";
//		password = 123456;
//	}
//};
//const double PI = 3.14;
//class circle {
//	//访问权限
//public:
//	//属性
//	int m_r;
//	//行为(方法)
//	double calculateZC() {
//		return 2 * PI * m_r;
//	}
//};
//class Student {//类中的属性和成员统称为成员
//public:
//	int id;//成员属性，成员变量
//	string name;
//	void showStu() {//成员函数 成员方法
//		cout <<"name:"<<name<<"   " << "id:" << id << endl;
//	}
//	void setName(string name) {
//		this->name = name;
//	}
//	void setId(int id) {
//		this->id = id;
//	}
//};
//int main1() {
//	Person p1;
//	p1.name = "李四";
//	
//	circle c1;
//	c1.m_r = 10;
//	cout << c1.calculateZC ()<< endl;
//	Student stu = { 1234,"张三" };
//	stu.setName("李四");
//	stu.showStu();
//	return 0;
//}