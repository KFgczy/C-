#include<iostream>
using namespace std;
/*
作用：给变量起别名
注意事项  引用必须初始化，初始化后不可改变
引用做函数参数
引用做函数返回值
引用的本质--在C++内部实现一个指针常量int* const p=&a;
常量引用   const，修饰形参防止误操作
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
//值传递
void swap01(int a, int b) {
int temp = a;
	a = b;
	b = temp;
}
//地址传递
void swap02(int* p1, int* p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
//引用传递
void swap03(int& a,int& b) {
	int temp = a;
	a = b;
	b = temp;
}
int main() {
	const int& mn = 10;//加上const后，编译器：int temp=10;const int& mn=temp;只读不可修改
	int v = 100;

	sV(v);
	cout << v << endl;
	int& ref = test01();
	cout << ref << endl;
	cout << ref << endl;//内存已释放
	int& ref02 = test02();
	cout << ref02 << endl;
	test02() = 1000;
	cout << ref02 << endl;
	int a = 10;
	int& b = a;
	int c = 10;
	b = c;
	b = 20;
	b = c;//赋值操作，不是更改引用
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