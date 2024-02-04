#include<iostream>
using namespace std;
/*
指针 可以通过指针间接访问内存
指针所占内存空间 64位-8  32位-4
空指针 指针变量指向内存中编号为0的空间 空指针指向的内存是不可以访问的 0~255系统占用，因此不可访问
野指针 指针变量指向非法的内存空间
const修饰指针
指针和数组 利用指针访问数组中的元素
指针和函数 地址传递可以修改实参
*/
void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}
void swap02(int* p1, int* p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
int main7() {
	//指针和函数
	int a = 10;
	int b = 20;
	swap(a, b);
	swap02(&a, &b);
	cout << a << "  " << b << endl;
	//指针和数组
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << arr[0] << endl;
	int* p3 = arr;
	cout << *p3 << endl;
	p3++;//指针向下偏移四个字节
	cout << *p3 << endl;
	int* p4 = arr;
	for (int i = 0; i < 10; i++) {
		cout << *p4++ << endl;
	}
	//const修饰指针 --常量指针
	//int a = 10;
	//int b = 10;
	const int* p = &a;//指针的指向可以修改，但指针指向的值不可更改
	// const修饰常量 --指针常量
	//int* const p1 = &a;//指针的指向不可以修改，但指针指向的值可以改
	// const即修饰指针有修饰常量
	const int* const p2 = &a;//两个都不能更改
	//野指针
	//避免出现野指针
	//int* p2 = (int*)0x1100;
	//空指针用于给指针初始化
	//int* p1 = null;
	//定义指针
	//int a = 10;
	//int* p;
	//p = &a;
	//cout << &a << endl;
	//cout << p << endl;
	//cout << *p << endl;//解引用
	//*p = 1000;
	//cout << a << endl;
	//cout << *p << endl;//解引用
	//cout << sizeof(p) << endl;
	//cout << sizeof(*p) << endl;

	return 0;
}