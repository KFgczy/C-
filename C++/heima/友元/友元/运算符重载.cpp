#include<iostream>
using namespace std;
/*
���������
	�����е���������¶��壬��������һ�ֹ��ܣ�����Ӧ��ͬ����������
�Ӻ����������+
�������������  ��������Զ������������ <<
�������������++
��ֵ���������=
��ϵ����� <,>,<=,>=,!=,==
����������������� ���� �º���
*/
//�Ӻ����������
//1.��Ա��������+
//2.ȫ�ֺ�������+
//�������������
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
	//����ǰ��++�����
	MyInt& operator++() {
		num++;
		return *this;
	}
	//���غ���++�����
	MyInt operator++(int) {//int ����ռλ����
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
	//��Ա�������� +
	/*Person operator+(Person& p) {//Person p3=p1.operator+(p2);
		Person temp;
		temp.a = this->a + p.a;
		temp.b = this->b + p.b;
		return temp;
	}*/
	//���������<<     �����ó�Ա��������
	/*void operator<<(cout) {

	}*/
public:
	//���ظ�ֵ�����=
	Person& operator=(Person &p) {
		if (this->Age != NULL) {
			delete Age;
			Age = NULL;
		}
		 Age = new int(*p.Age);//���
		 return *this;
	}
};
//ȫ�ֺ�������+
Person operator+ (Person p1, Person p2) {//Person p3=operator+(p1,p2); Person p3=p1.operator+(p2);
	Person temp;
	temp.a = p1.a + p2.a;
	temp.b = p1.b + p2.b;
	return temp;

}
//ȫ�����ظ�ֵ����=
//ȫ�ֺ�������<<
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
		cout << "���" << endl;
	}
	else {
		cout << "����" << endl;
	}
}
void test01() {
	MyPrient my;
	my("hello world");
}
//������������ ��ǰ�����꼴�ͷ�
int main() {
	test01();
	/*int a = 10;
	int b = 20;
	int c = 30;
	c = b = a;
	cout << c << endl;*/
	return 0;
}