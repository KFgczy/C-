#include<iostream>
using namespace std;
/*
��̬
	��̬��̬���������أ����������  ���ú�����		����׶�ȷ��������ַ
	��̬��̬����������麯����ʵ������ʱ��̬		���н׶�ȷ��������ַ
��̬��̬��������
	1.�м̳й�ϵ
	2.������д������麯��
��̬��̬ʹ��
	�����ָ�������ִ���������
���麯���ͳ�����
�������ʹ�������
*/
class Animal {
public:
	/*virtual void speak() {
		cout << "����˵��" << endl;
	}*/
	virtual void speak() = 0;//������ �޷�ʵ��������
};
class Cat :public Animal {
public:
	void speak() {
		cout << "Cat˵��" << endl;
	}
};
class Dog :public Animal {
public:
	virtual void speak() {
		cout << "Dog˵��" << endl;
	}
};
//��ַ��� ����׶�ȷ��������ַ
void doSpeak(Animal& animal) {//�����ָ�������ִ���������
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