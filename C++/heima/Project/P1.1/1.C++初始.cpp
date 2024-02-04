#include<iostream>
using namespace std;
#define day 7
/*
cout<<""<<endl;
注释
变量 (方便我们管理内存空间) 数据类型 变量名=变量初始值
常量 记录程序中不可更改的数据 #define 宏常量  const 修饰变量
关键字（标识符） C++中预先保留的单词
标识符命名规则 不能是关键字；只能由字母数字下划线；第一个字符必须是字母和下划线；区分大小写
*/
int main1()//程序的入口，有且只有一个 
{
	const int mouth = 12;
	int a = 10;
	cout << "hello world!" << endl;
	cout << a << endl;
	cout << "a=" << a << endl;
	cout << "一周有多少天：" << day << endl;
	cout << "一年有几个月：" << mouth << endl;
	system("pause");
	return 0;
}