#include<iostream>
using namespace std;
/*
�������� ���� const
	�������ڲ����޸ĳ�Ա����
	��Ա��������ʱ�ӹؼ���mutable���ڳ���������Ȼ�����޸�
������
	��������ǰ��const
	������ֻ�ܵ��ó�����
*/
class Person {
public:
	//thisָ��ı���:ָ�볣����ָ���ָ���ǲ������޸ĵ�
	//const Person * const this
	//�ڳ�Ա��������Ӵ���ͼ�����ε���thisָ������this��ָ��ָ���ֵ���������޸�
	void showPerson() const{
		this ->m_B = 100;
		//m_A = 100;
		//this = NULL;//thisָ�벻���޸�ָ��
	}
	void func() {

	}
	int m_A;
	mutable int m_B;//�����������ʹ�ڳ������У�Ҳ�����޸����ֵ,�ӹؼ���mutable
};
void test01() {
	Person p;
	p.showPerson();
}
void test01() {
	const Person p;//�ڶ���ǰ��const����Ϊ������
	//p.m_A = 100;
	p.m_B = 100;//m_B������ֵ����������Ҳ�����޸�
	//������ֻ�ܵ��ó�����
	p.showPerson();
	//p.func();
}
int main() {
	return 0;
}