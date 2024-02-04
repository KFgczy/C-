#include<iostream>
using namespace std;
//C++规定在创建一个变量或者常量时，必须要指定出相应的数据类型，否则无法分配内存
/*
整形 int（整形-4字节）short（短整型-2字节）long（长整型-win4字节，Linux4字节（32位），8字节（64位））long long（长长整形-8字节）
sizeof 统计数据类型所占内存大小 sizeof(数据类型/变量)
实型（浮点型）float单精度-4位 7位有效数字 double双精度-8字节 15~16位有效数字 默认情况下输出一个小数，会显示出6位有效数字
科学计数法
字符型 用于显示单个字符 char=''; 1个字节 字符型变量是将对应的ASCII编码放入存储单元里(int强制转化)
转义字符
字符串型
布尔数据类型 true--1;false--0  1字节 bool 非零都为真
数据的输入 cin>>变量
*/
int main2(void) {
	int a = 0;
	cin >> a;
	cout << a << endl;
	bool flag = 100;
	cout << flag << endl;
	char str1[] = "hello";//C语言风格
	cout << str1 << endl;
	string str2 = "world";//C++风格
	cout << str2 << endl;
	char ch = 'A';
	cout << ch << endl;
	cout << (int)ch << endl;
	cout << sizeof(char) << endl;
	float f2 = 3e-2;
	cout << f2 << endl;
	float f1 = 3.1415926f;
	double d1 = 3.1415926;
	cout << f1 << endl;
	cout << d1 << endl;
	cout << sizeof(short) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(long long) << endl;
	cout << sizeof(float) << endl;
	cout << sizeof(double) << endl;
	system("pause");
	return 0;
}