//#include<iostream>
//using namespace std;
///*
//thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
//	������ÿһ���Ǿ�̬��Ա������
//	����Ҫ���壬ֱ��ʹ�ü���
//	��;��
//		���βκͳ�Ա����ͬ��ʱ������thisָ������
//		����ķǾ�̬��Ա�����з��ض�����ʱ����ʹ�� return *this
//*/
//class Person {
//public:
//	Person(int age) {
//		//thisָ��ָ��  �����õĳ�Ա����  �����Ķ���
//		this->age = age;//ָ�����
//	}
//	Person& pAp( Person & p) {
//		this->age += p.age;
//		return *this;//thisָ��ƪ��ָ�룬��*thisָ��ľ���p2�������ı���
//	}
//	int age;
//};
//void test01() {
//	Person p1(18);
//	cout << p1.age << endl;
//}
//void test02() {
//	Person p1(10);
//	Person p2(10);
//	p2.pAp(p1).pAp(p1).pAp(p1);//��ʽ���˼��
//	cout << p2.age << endl;
//}
//int main() {
//	test02();
//	return 0;
//}