#include<iostream>
using namespace std;
/*
继承方式
	公共继承
	保护继承
	私有继承
继承中的对象模型
继承中的构造和析构顺序
继承同名成员处理方式
同名静态成员
*/
class Base {
public:
	static int m_A;
	static void func() {
		cout << "BS" << endl;
	}
	Base() {
		a = 100;
		cout << "Base构造" << endl;
	}
	void func1() {
		cout <<"Base函数" << endl;
	}
	void func(int a ) {
		cout << "aBase函数" << endl;
	}
	~Base(){
		cout << "Base析构" << endl;
	}
	int a;
protected:
	int b;
private:
	int c;
};
int Base::m_A = 100;
class Son :public Base {
public:
	static int m_A;
	static void func() {
		cout << "SS" << endl;
	}
	int a;
	Son() {
		a = 200;
		cout << "Son构造" << endl;
	}
	void func1() {
		cout << "Son函数" << endl;
	}
	~Son() {
		cout << "Son析构" << endl;
	}
	int d;
};
int Son::m_A = 200;
class BasePage {
public:
	void header() {
		cout << "公共头部" << endl;
	}
	void footer() {
		cout << "公共底部" << endl;
	}
	void left() {
		cout << "公共分类列表" << endl;
	}
};
class Java:public BasePage {
public:
	void content() {
		cout << "Java" << endl;
	}
};
class Python :public BasePage {
public:
	void content() {
		cout << "Python" << endl;
	}
};
class CPP:public BasePage{
public:
	void content() {
		cout << "C++" << endl;
	}
};
void test02() {
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();
}
void test01() {
	//cout << sizeof(Son) << endl;
	//cout << sizeof(Base) << endl;
	////Base b;
	//Son s;
	//cout << s.Base::a << endl;
	//s.func();
	//s.Base::func(100);
	Son s;
	//通过对象访问
	//cout << s.m_A << endl;
	//cout << s.Base::m_A << endl;
	////通过类名访问
	//cout << Son::m_A << endl;
	//cout << Son::Base::m_A << endl;
	s.func();
	s.Base::func();
}
int main() {
	test01();
	return 0;
}