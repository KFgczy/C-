//#include<iostream>
//using namespace std;
///*
//C++中空指针也可以调用成员函数，但是也要注意有没有用到this指针
//*/
//class Person {
//public:
//	void showClassName() {
//		cout << "this is person class" << endl;
//	}
//	void showPersonAge() {
//		if (this == NULL) {
//			return;
//		}
//		cout << Age << endl;//默认this->Age  报错的原因是因为传入的指针为空
//	}
//	int Age;
//};
//void test01() {
//	Person* p = NULL;
//	p->showClassName();
//	p->showPersonAge();
//}
//int main() {
//	test01();
//	return 0;
//}