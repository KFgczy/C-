#include<iostream>
using namespace std;
/*
用户自定义数据类型 struct
结构体数组 将自定义的结构体放入数组中方便维护
结构体指针 通过指针访问结构体中的成员 ->
结构体嵌套结构体
结构体做函数参数
  值传递
  地址传递
结构体中const使用场景
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
	s.name = "李四";
	cout << s.name << endl;
}
void printStu2(const Student* s) {//加const不可修改
	//s->name = "李四";
	cout << s->name << endl;
}
int main() {

	Student s = { "张三",18,100 };

	cout << "main   " << s.name << endl;
	//printStu1(s);
	printStu2(&s);
	cout << "main   " << s.name << endl;
	Teacher tea = {10000,"老王",50,s};
	cout << tea.stu.age << endl;
	/*Student* p = &s;/*
	cout << p->name << endl;
	Student stu[3] = {
		{"张三",18,100},{"李四",28,99},{"王五",38,66}
	};
	for (int i = 0; i < 3; i++) {
		cout << stu[i].name << " " << stu[i].age << " " << stu[i].score << endl;
	}
	Student stu1 = { "张三",13,100 };
	cout << stu1.name << endl;
	stu1.name = "王五";
	cout << stu1.name << endl;
	s3.age = 20;
	s3.name= "李四";
	s3.score = 120;*/
	return 0;
}