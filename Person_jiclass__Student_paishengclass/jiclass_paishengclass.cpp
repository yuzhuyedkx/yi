#include<iostream>
#include<string>
using namespace std;
//���һ��Person�����Student������
//Person���ࣺ����˽�г�Ա����name���������ַ������ͣ���age�����䣬�������ͣ����ṩ�вι��캯�����ڳ�ʼ�����������䣬�Լ���Ա����void displayInfo() ������ʾ������������Ϣ��
//Student�����ࣺ���м̳���Person�࣬����˽�г�Ա����studentId��ѧ�ţ��ַ������ͣ���grade���꼶���������ͣ���ʵ�������๹�캯�������û��๹�캯����ʼ�����������䣬����ʼ��ѧ�ź��꼶����д�����displayInfo() ����������ʾ����������Ļ����ϣ���ʾѧ�ź��꼶��Ϣ��
//��д��������ԣ�����Student���󣬵���displayInfo()�����������Ϣ��ʾ�Ƿ���ȷ��
class Person {
private:
	string name;
	int age;
public:
	Person(string n, int a) :name(n), age(a) { ; }
	void displayInfo();
};
void Person::displayInfo() {
	cout << "������" << name << " ,	���䣺"<<age << endl;
}
class Student :public Person {
private:
	string studentId;
	int grade;
public:
	Student(string n, int a, string stuId, int g) :Person(n, a), studentId(stuId), grade(g) { ; }
	//��д�����displayInfo() ����
	void displayInfo();
};
void Student::displayInfo() {
	Person::displayInfo();
	cout << "ѧ�ţ�" << studentId << " ,	�꼶��"<<grade<< endl;
}
int main() {
	Student stu_1("limi", 18, "1001", 2024);
	stu_1.displayInfo();
	return 0;
}