#include<iostream>
using namespace std;
//C++�涨�ڴ���һ���������߳���ʱ������Ҫָ������Ӧ���������ͣ������޷������ڴ�
/*
���� int������-4�ֽڣ�short��������-2�ֽڣ�long��������-win4�ֽڣ�Linux4�ֽڣ�32λ����8�ֽڣ�64λ����long long����������-8�ֽڣ�
sizeof ͳ������������ռ�ڴ��С sizeof(��������/����)
ʵ�ͣ������ͣ�float������-4λ 7λ��Ч���� double˫����-8�ֽ� 15~16λ��Ч���� Ĭ����������һ��С��������ʾ��6λ��Ч����
��ѧ������
�ַ��� ������ʾ�����ַ� char=''; 1���ֽ� �ַ��ͱ����ǽ���Ӧ��ASCII�������洢��Ԫ��(intǿ��ת��)
ת���ַ�
�ַ�����
������������ true--1;false--0  1�ֽ� bool ���㶼Ϊ��
���ݵ����� cin>>����
*/
int main2(void) {
	int a = 0;
	cin >> a;
	cout << a << endl;
	bool flag = 100;
	cout << flag << endl;
	char str1[] = "hello";//C���Է��
	cout << str1 << endl;
	string str2 = "world";//C++���
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