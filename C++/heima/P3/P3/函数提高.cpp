#include<iostream>
using namespace std;
/*
����Ĭ�ϲ���
����ռλ����
��������  ������������ͬ����߸�����
   ͬһ����������
   ��������ͬ
   �����������Ͳ�ͬ�������ͬ��˳��ͬ
ע������ ������Ϊ��������
         ����������������Ĭ�ϲ���
*/
void func() {
	cout << "func�ĵ���" << endl;
}
void func(int& a) {
	cout << "func(int& a)�ĵ���" << endl;
}
void func(const int& a) {
	cout << "func(const int& a)�ĵ���" << endl;
}
//void func(int a) {
//	cout << "func(int a)�ĵ���" << endl;
//}
void func(double a) {
	cout << "func(double a)�ĵ���" << endl;
}
void func3(int a, int =10) {
	cout<<"����ռλ"<<endl;
}
int func1(int a=12, int b = 20, int c = 30);//������ʵ��ֻ����һ����Ĭ�ϲ���
int func2(int a, int b = 20, int c=0) {
	return a + b + c;
}
int main() {
	func();
	int a = 10;
	func(a);
	func(10);
	func(10.0);
	func3(10,20);
	cout << func1(10,30) << endl;//�����ô��룬Ϊ������Ĭ��ֵ
	return 0;
}
int func1(int a, int b , int c ) {
	return a + b + c;
}