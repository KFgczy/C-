#include<iostream>
using namespace std;
/*
ָ�� ����ͨ��ָ���ӷ����ڴ�
ָ����ռ�ڴ�ռ� 64λ-8  32λ-4
��ָ�� ָ�����ָ���ڴ��б��Ϊ0�Ŀռ� ��ָ��ָ����ڴ��ǲ����Է��ʵ� 0~255ϵͳռ�ã���˲��ɷ���
Ұָ�� ָ�����ָ��Ƿ����ڴ�ռ�
const����ָ��
ָ������� ����ָ����������е�Ԫ��
ָ��ͺ��� ��ַ���ݿ����޸�ʵ��
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
	//ָ��ͺ���
	int a = 10;
	int b = 20;
	swap(a, b);
	swap02(&a, &b);
	cout << a << "  " << b << endl;
	//ָ�������
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << arr[0] << endl;
	int* p3 = arr;
	cout << *p3 << endl;
	p3++;//ָ������ƫ���ĸ��ֽ�
	cout << *p3 << endl;
	int* p4 = arr;
	for (int i = 0; i < 10; i++) {
		cout << *p4++ << endl;
	}
	//const����ָ�� --����ָ��
	//int a = 10;
	//int b = 10;
	const int* p = &a;//ָ���ָ������޸ģ���ָ��ָ���ֵ���ɸ���
	// const���γ��� --ָ�볣��
	//int* const p1 = &a;//ָ���ָ�򲻿����޸ģ���ָ��ָ���ֵ���Ը�
	// const������ָ�������γ���
	const int* const p2 = &a;//���������ܸ���
	//Ұָ��
	//�������Ұָ��
	//int* p2 = (int*)0x1100;
	//��ָ�����ڸ�ָ���ʼ��
	//int* p1 = null;
	//����ָ��
	//int a = 10;
	//int* p;
	//p = &a;
	//cout << &a << endl;
	//cout << p << endl;
	//cout << *p << endl;//������
	//*p = 1000;
	//cout << a << endl;
	//cout << *p << endl;//������
	//cout << sizeof(p) << endl;
	//cout << sizeof(*p) << endl;

	return 0;
}