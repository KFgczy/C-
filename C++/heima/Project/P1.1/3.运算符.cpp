#include<iostream>
using namespace std;
/*
��������� �Ӽ��˳�
��ֵ����� = += -= *= /= %=
�Ƚ������ == != < > <= >=
�߼������ ! && ||
*/
int main3() {
	int a1 = 10;
	int b1 = 3;
	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;
	cout << "=========================" << endl;
	cout << a1 % b1 << endl;//ȡ��
	cout << a1++ << endl;
	cout << a1-- << endl;
	cout << a1 << endl;
	cout << "=========================" << endl;
	a1 += b1;
	cout << a1 << endl;
	cout << "=========================" << endl;
	cout << (a1 <= b1) << endl;
	cout << (a1 != b1) << endl;
	cout << "=========================" << endl;
	int a = 10;
	int b = 0;
	cout << !a << endl;
	cout << (a||b )<< endl;
	cout << (a && b) << endl;
	system("pause");
	return 0;
}