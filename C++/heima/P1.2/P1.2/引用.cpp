#include<iostream>
using namespace std;
/*
���ã������������
ע������  ���ñ����ʼ������ʼ���󲻿ɸı�
��������������
��������������ֵ
���õı���--��C++�ڲ�ʵ��һ��ָ�볣��int* const p=&a;
��������   const�������βη�ֹ�����
*/
void sV(const int& val) {
	cout << val << endl;
}
int& test01() {
	int a = 10;
	return a;
}
int& test02() {
	static int a = 10;
	return a;
}
//ֵ����
void swap01(int a, int b) {
int temp = a;
	a = b;
	b = temp;
}
//��ַ����
void swap02(int* p1, int* p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
//���ô���
void swap03(int& a,int& b) {
	int temp = a;
	a = b;
	b = temp;
}
int main() {
	const int& mn = 10;//����const�󣬱�������int temp=10;const int& mn=temp;ֻ�������޸�
	int v = 100;

	sV(v);
	cout << v << endl;
	int& ref = test01();
	cout << ref << endl;
	cout << ref << endl;//�ڴ����ͷ�
	int& ref02 = test02();
	cout << ref02 << endl;
	test02() = 1000;
	cout << ref02 << endl;
	int a = 10;
	int& b = a;
	int c = 10;
	b = c;
	b = 20;
	b = c;//��ֵ���������Ǹ�������
	cout << &a << endl;
	cout << &b<< endl;
	cout << &c << endl;
	int m = 10;
	int n = 20;
	swap01(m, n);
	cout << m << endl;
	cout << n << endl;
	swap02(&m, &n);
	cout << m << endl;
	cout << n << endl;
	swap03(m, n);
	cout << m << endl;
	cout << n << endl;
	return 0;
}