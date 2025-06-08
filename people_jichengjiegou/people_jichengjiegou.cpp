#include<iostream>
#include<string>
using namespace std;
//建立如下的继承结构：
//（1）定义一个类People，其成员变量有：姓名（name）、性别(gender)、年龄(age)。
//（2）从People 类派生出学生类 Student，其成员变量有：学号(studentID)和入学成绩(grades)。
// (3）从 Peaple 类再派生出教师类 Teacher，其成员变量有：职务(position)、部门(department)。
//（4)从Student和Teacher 类共同派生出在职研究生类GradOnWork，其成员变量有研究方向(direction)、导师(mentor)。
//	要求：
//	1.采用虚基类方法完成。
//	2.分别定义以上类的构造函数和析构函数。
//	3.定义GradOnWork 类对象gdonwk，并给出所有数据的初值。
//	4.输出gdonwk的全部数据。
class People {
public:
	string name, gender;
	int age;
	People(string n, string g, int a) :name(n), gender(g), age(a) { ; }
	virtual void display();
	virtual ~People() { cout << "析构People对象占用的资源!" << endl; }
};
void People::display() {
	cout << "姓名：" << name << " , 性别：" << gender << " , 年龄：" <<age<< endl;
}
class Student :virtual public People {
public:
	string studentID;
	float grades;
	Student(string n, string g, int a, string stuID, float gra) :People(n, g, a), studentID(stuID), grades(gra) { ; }
	void display();
	~Student() { cout << "析构Student对象占用的资源!"<<endl; }
};
void Student::display() {
	People::display();
	cout << "学号：" << studentID << " ，入学成绩：" << grades << endl;
}
class Teacher :virtual public People {
public:
	string position,department;
	Teacher(string n, string g, int a, string p, string d) :People(n, g, a), position(p),department(d) { ; }
	void display();
	~Teacher() { cout << "析构Teacher对象占用的资源!" << endl; }
};
void Teacher::display() {
	People::display();
	cout << "职务：" << position << " ，部门：" << department << endl;
}
class GradOnWork :virtual public Student, virtual public Teacher {
private:
	string direction,mentor;
public:
	GradOnWork(string n, string g, int a, string stuID, float gra, string p, string d,string dir,string m) :People(n, g, a), Student(n,g,a,stuID, gra), Teacher(n,g,a,p, d),direction(dir),mentor(m) { ; }
	void display();
	~GradOnWork() { cout << "析构GradOnWork对象占用的资源!" << endl; }
};
void GradOnWork::display() {
	Student::display();
	Teacher::display();
	cout << "研究方向：" << position << " ，导师：" << department << endl;
}
int main() {
	GradOnWork gdonwk_1("limi", "woman", 28, "1001", 89.0, "讲师", "计算机学院", "人工智能", "李教授");
	gdonwk_1.display();
	return 0;
}