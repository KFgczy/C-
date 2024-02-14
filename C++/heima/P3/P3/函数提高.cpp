#include<iostream>
using namespace std;
/*
函数默认参数
函数占位参数
函数重载  函数名可以相同，提高复用性
   同一个作用域下
   函数名相同
   函数参数类型不同或个数不同或顺序不同
注意事项 引用作为重载条件
         函数重载遇到函数默认参数
*/
void func() {
	cout << "func的调用" << endl;
}
void func(int& a) {
	cout << "func(int& a)的调用" << endl;
}
void func(const int& a) {
	cout << "func(const int& a)的调用" << endl;
}
//void func(int a) {
//	cout << "func(int a)的调用" << endl;
//}
void func(double a) {
	cout << "func(double a)的调用" << endl;
}
void func3(int a, int =10) {
	cout<<"函数占位"<<endl;
}
int func1(int a=12, int b = 20, int c = 30);//声明和实现只能有一个有默认参数
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
	cout << func1(10,30) << endl;//传入用传入，为传入用默认值
	return 0;
}
int func1(int a, int b , int c ) {
	return a + b + c;
}