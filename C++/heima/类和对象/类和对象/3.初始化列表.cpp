#include<iostream>
using namespace std;
/*
��ʼ���б�
    ������ʼ������
�������Ϊ���Ա
	�����Ա
��̬��Ա    static
	��̬��Ա����  ���ж�����ͬһ������ ����׶η����ڴ� ���������������ʼ��
	��̬��Ա����  ���ö�����ͬһ������  ��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
��̬��Ա����Ҳ���÷���Ȩ�޵�
*/
class Phone {
public:
	Phone(string pName) {
		cout << "Phone���캯��" << endl;
		m_PName=pName;
	}
	string m_PName;
	~Phone() {
		cout << "Phone���캯��" << endl;
	}

};
class Person {
private:
	static int m_B;
public:
	static void func() {
		m_A = 100;
		cout << "static��������" << endl;
	}
	static int m_A;

	/*Person(int a, int b, int c) {��ͳ��ʼ������
		A = a;
		B = b;
		C = c;
	}*/
	//��ʼ���б��ʼ������
	//Person(int a, int b, int c):A(a), B(b), C(c) {}
	//Person(string name,string pName):m_name(name),m_Phone(pName){
	//	cout << "Person���캯��" << endl;
	//}//Phone m_Pone=pName
	//string m_name;
	//Phone m_Phone;
	~Person() {
		cout << "Person��������" << endl;
	}
};
int Person::m_A = 0;
int Person::m_B = 200;
//void test01() {
//	//Person p(30,20,10);
//	////Person p;
//	//cout << p.A << " " << p.B << " " << p.C << endl;
//	/*Person p("����", "ƻ��");
//	cout << p.m_name << "  " << p.m_Phone.m_PName<< endl;*/
//	Person p;
//	cout << p.m_A << endl;
//	Person p2;
//	p2.m_A = 200;
//	cout << p.m_A << endl;
//}
void test02() {
	//��̬��Ա����������ĳ�������ϣ����ж��󶼹���ͬһ������
	//��˾�̬��Ա���������ַ��ʷ�ʽ
	//1.ͨ��������з���
	Person p;
	p.func();
	/*Person p;
	//cout << p.m_A << endl;*/
	//2.ͨ���������з���
	//cout << Person::m_A << endl;
	//cout << Person::m_B << endl;˽��private�������޷�����
	Person::func();
	
}
int main() {
	test02();
	system("pause");
	return 0;
}