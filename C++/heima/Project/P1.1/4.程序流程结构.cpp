#include<iostream>
using namespace std;
#include<ctime>
/*
˳��ṹ
ѡ��ṹ ��Ŀ�����
ѭ���ṹ while dowhile for
��ת��� break contiun goto
*/
int main4() {

	//ѡ��ṹ ��ֻС�������
	int a, b, c = 0;
	cout << "��һֻС���������";
	cin >> a;
	cout << "�ڶ�ֻС���������";
	cin >> b;
	cout << "����ֻС���������";
	cin >> c;
	int max = 0;
	max=(c>(a > b ? a : b)?a: (a > b ? a : b));
	cout << c << endl;

	if (a > b&&a>c) {
		cout << a << "��һֻС������" << endl;
	}
	else if(b > a && b > c) {
		cout << b << "�ڶ�ֻС������" << endl;
	}
    else if(c > a && c > b) {
		cout << c << "����ֻС������" << endl;
	}
	else {
		cout <<"һ����" << endl;
	}
	cout << "���֣�";
	int m = 0;
	cin >> m;
	switch (m) {
	case 1:
	case 2: cout << "��" << endl;
		break;
	case 3:

	case 4:cout << "��" << endl;

	}
	while (m >= 1) {
		cout << m << endl;
		m--;
	}
	srand((unsigned int)time(NULL));
	int num = rand() % 100+1;
	bool flag = 1;
	while (flag) {
		int i = 0;
		cin >> i;
		if (i> num) {
			cout << "�´���" << endl;
		}
		else if(i<num) {
			cout << "��С��" << endl;
		}
		else {
			cout << "�¶���" << endl;
			flag = 0;
		}
	}

	system("pause");
	return 0;
}