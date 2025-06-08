#include<iostream>
#include<string>
using namespace std;
//�������µļ̳нṹ��
//��1������һ����People�����Ա�����У�������name�����Ա�(gender)������(age)��
//��2����People ��������ѧ���� Student�����Ա�����У�ѧ��(studentID)����ѧ�ɼ�(grades)��
// (3���� Peaple ������������ʦ�� Teacher�����Ա�����У�ְ��(position)������(department)��
//��4)��Student��Teacher �๲ͬ��������ְ�о�����GradOnWork�����Ա�������о�����(direction)����ʦ(mentor)��
//	Ҫ��
//	1.��������෽����ɡ�
//	2.�ֱ���������Ĺ��캯��������������
//	3.����GradOnWork �����gdonwk���������������ݵĳ�ֵ��
//	4.���gdonwk��ȫ�����ݡ�
class People {
public:
	string name, gender;
	int age;
	People(string n, string g, int a) :name(n), gender(g), age(a) { ; }
	virtual void display();
	virtual ~People() { cout << "����People����ռ�õ���Դ!" << endl; }
};
void People::display() {
	cout << "������" << name << " , �Ա�" << gender << " , ���䣺" <<age<< endl;
}
class Student :virtual public People {
public:
	string studentID;
	float grades;
	Student(string n, string g, int a, string stuID, float gra) :People(n, g, a), studentID(stuID), grades(gra) { ; }
	void display();
	~Student() { cout << "����Student����ռ�õ���Դ!"<<endl; }
};
void Student::display() {
	People::display();
	cout << "ѧ�ţ�" << studentID << " ����ѧ�ɼ���" << grades << endl;
}
class Teacher :virtual public People {
public:
	string position,department;
	Teacher(string n, string g, int a, string p, string d) :People(n, g, a), position(p),department(d) { ; }
	void display();
	~Teacher() { cout << "����Teacher����ռ�õ���Դ!" << endl; }
};
void Teacher::display() {
	People::display();
	cout << "ְ��" << position << " �����ţ�" << department << endl;
}
class GradOnWork :virtual public Student, virtual public Teacher {
private:
	string direction,mentor;
public:
	GradOnWork(string n, string g, int a, string stuID, float gra, string p, string d,string dir,string m) :People(n, g, a), Student(n,g,a,stuID, gra), Teacher(n,g,a,p, d),direction(dir),mentor(m) { ; }
	void display();
	~GradOnWork() { cout << "����GradOnWork����ռ�õ���Դ!" << endl; }
};
void GradOnWork::display() {
	Student::display();
	Teacher::display();
	cout << "�о�����" << position << " ����ʦ��" << department << endl;
}
int main() {
	GradOnWork gdonwk_1("limi", "woman", 28, "1001", 89.0, "��ʦ", "�����ѧԺ", "�˹�����", "�����");
	gdonwk_1.display();
	return 0;
}