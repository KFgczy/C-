#include<iostream>
using namespace std;
/*
�û��Զ����������� struct
�ṹ������ ���Զ���Ľṹ����������з���ά��
�ṹ��ָ�� ͨ��ָ����ʽṹ���еĳ�Ա ->
�ṹ��Ƕ�׽ṹ��
�ṹ������������
  ֵ����
  ��ַ����
�ṹ����constʹ�ó���
*/
struct Student
{
	string name;
	int age;
	int score;
};
struct Teacher {
	int id;
	string name;
	int age;
	Student stu;
};
void printStu1(Student s) {
	s.name = "����";
	cout << s.name << endl;
}
void printStu2(const Student* s) {//��const�����޸�
	//s->name = "����";
	cout << s->name << endl;
}
int main() {

	Student s = { "����",18,100 };

	cout << "main   " << s.name << endl;
	//printStu1(s);
	printStu2(&s);
	cout << "main   " << s.name << endl;
	Teacher tea = {10000,"����",50,s};
	cout << tea.stu.age << endl;
	/*Student* p = &s;/*
	cout << p->name << endl;
	Student stu[3] = {
		{"����",18,100},{"����",28,99},{"����",38,66}
	};
	for (int i = 0; i < 3; i++) {
		cout << stu[i].name << " " << stu[i].age << " " << stu[i].score << endl;
	}
	Student stu1 = { "����",13,100 };
	cout << stu1.name << endl;
	stu1.name = "����";
	cout << stu1.name << endl;
	s3.age = 20;
	s3.name= "����";
	s3.score = 120;*/
	return 0;
}