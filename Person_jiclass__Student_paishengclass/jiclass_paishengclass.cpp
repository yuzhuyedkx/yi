#include<iostream>
#include<string>
using namespace std;
//设计一个Person基类和Student派生类
//Person基类：包含私有成员变量name（姓名，字符串类型）、age（年龄，整数类型）。提供有参构造函数用于初始化姓名和年龄，以及成员函数void displayInfo() 用于显示姓名和年龄信息。
//Student派生类：公有继承自Person类，增加私有成员变量studentId（学号，字符串类型）和grade（年级，整数类型）。实现派生类构造函数，调用基类构造函数初始化姓名和年龄，并初始化学号和年级。重写基类的displayInfo() 函数，在显示姓名和年龄的基础上，显示学号和年级信息。
//编写主程序测试：创建Student对象，调用displayInfo()函数，检查信息显示是否正确。
class Person {
private:
	string name;
	int age;
public:
	Person(string n, int a) :name(n), age(a) { ; }
	void displayInfo();
};
void Person::displayInfo() {
	cout << "姓名：" << name << " ,	年龄："<<age << endl;
}
class Student :public Person {
private:
	string studentId;
	int grade;
public:
	Student(string n, int a, string stuId, int g) :Person(n, a), studentId(stuId), grade(g) { ; }
	//重写基类的displayInfo() 函数
	void displayInfo();
};
void Student::displayInfo() {
	Person::displayInfo();
	cout << "学号：" << studentId << " ,	年级："<<grade<< endl;
}
int main() {
	Student stu_1("limi", 18, "1001", 2024);
	stu_1.displayInfo();
	return 0;
}