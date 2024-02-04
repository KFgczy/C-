#include<iostream>
using namespace std;
#include<ctime>
/*
顺序结构
选择结构 三目运算符
循环结构 while dowhile for
跳转语句 break contiun goto
*/
int main4() {

	//选择结构 三只小猪称体重
	int a, b, c = 0;
	cout << "第一只小猪的重量：";
	cin >> a;
	cout << "第二只小猪的重量：";
	cin >> b;
	cout << "第三只小猪的重量：";
	cin >> c;
	int max = 0;
	max=(c>(a > b ? a : b)?a: (a > b ? a : b));
	cout << c << endl;

	if (a > b&&a>c) {
		cout << a << "第一只小猪最重" << endl;
	}
	else if(b > a && b > c) {
		cout << b << "第二只小猪最重" << endl;
	}
    else if(c > a && c > b) {
		cout << c << "第三只小猪最重" << endl;
	}
	else {
		cout <<"一样重" << endl;
	}
	cout << "请打分：";
	int m = 0;
	cin >> m;
	switch (m) {
	case 1:
	case 2: cout << "差" << endl;
		break;
	case 3:

	case 4:cout << "好" << endl;

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
			cout << "猜大了" << endl;
		}
		else if(i<num) {
			cout << "猜小了" << endl;
		}
		else {
			cout << "猜对了" << endl;
			flag = 0;
		}
	}

	system("pause");
	return 0;
}