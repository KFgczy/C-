#include<iostream>
using namespace std;
/*
�̳з�ʽ
	�����̳�
	�����̳�
	˽�м̳�
�̳��еĶ���ģ��
�̳��еĹ��������˳��
�̳�ͬ����Ա����ʽ
ͬ����̬��Ա
*/
class Base {
public:
	static int m_A;
	static void func() {
		cout << "BS" << endl;
	}
	Base() {
		a = 100;
		cout << "Base����" << endl;
	}
	void func1() {
		cout <<"Base����" << endl;
	}
	void func(int a ) {
		cout << "aBase����" << endl;
	}
	~Base(){
		cout << "Base����" << endl;
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
		cout << "Son����" << endl;
	}
	void func1() {
		cout << "Son����" << endl;
	}
	~Son() {
		cout << "Son����" << endl;
	}
	int d;
};
int Son::m_A = 200;
class BasePage {
public:
	void header() {
		cout << "����ͷ��" << endl;
	}
	void footer() {
		cout << "�����ײ�" << endl;
	}
	void left() {
		cout << "���������б�" << endl;
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
	//ͨ���������
	//cout << s.m_A << endl;
	//cout << s.Base::m_A << endl;
	////ͨ����������
	//cout << Son::m_A << endl;
	//cout << Son::Base::m_A << endl;
	s.func();
	s.Base::func();
}
int main() {
	test01();
	return 0;
}