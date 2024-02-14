#include<iostream>
using namespace std;
/*
多态
	静态多态：函数重载，运算符重载  复用函数名		编译阶段确定函数地址
	动态多态：派生类和虚函数的实现运行时多态		运行阶段确定函数地址
动态多态满足条件
	1.有继承关系
	2.子类重写父类的虚函数
动态多态使用
	父类的指针或引用执行子类对象
纯虚函数和抽象类
虚析构和纯虚析构
*/
class Animal {
public:
	/*virtual void speak() {
		cout << "动物说话" << endl;
	}*/
	virtual void speak() = 0;//抽象类 无法实例化对象
};
class Cat :public Animal {
public:
	void speak() {
		cout << "Cat说话" << endl;
	}
};
class Dog :public Animal {
public:
	virtual void speak() {
		cout << "Dog说话" << endl;
	}
};
//地址早绑定 编译阶段确定函数地址
void doSpeak(Animal& animal) {//父类的指针或引用执行子类对象
	animal.speak();
}
void test() {
	//Animal a;
	Cat c;
	Dog d;
	doSpeak(c);
	doSpeak(d);
}
int main() {
	test();
	return 0;
}