//#include<iostream>
//using namespace std;
///*
//�������캯������ʱ��
//    ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//	ֵ���ݵķ�ʽ������������ֵ
//	ֵ��ʽ���ؾֲ�����
//*/
//class Person {
//	//���캯��
//public:
//	Person() {//�����в��������Է�������   Ĭ���޲�
//		cout << "���캯���ĵ���" << endl;
//	}
//	Person(int age) {
//		this->age = age;
//		cout << "�вι��캯��" << endl;
//	}
//	//�������캯��
//	Person(const Person& p) {
//		age = p.age;
//		cout << "�������캯���ĵ���" << endl;
//	}
//	//��������
//	~Person() {//�������в����������Է�������
//		//���������ٵ��������ͷŲ���
//		cout << "������������" << endl;
//	}
//	int age;
//};
////ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//void test01() {
//	Person p1(20);
//	Person p2(p1);
//	cout << p2.age << endl;
//}
////ֵ���ݵķ�ʽ������������ֵ
//void doWork(Person p) {
//
//}
//void test02() {
//	Person p;
//	doWork(p);
//}
////ֵ��ʽ���ؾֲ�����
//Person doWork2() {
//	Person p1;
//	cout << &p1 << endl;
//	return p1;
//}
//void test03() {
//	Person p = doWork2();
//	cout << &p << endl;
//}
//int main2.1() {
//	//test01();
//	//test02();
//	test03();
//	system("pause");
//	return 0;
//}