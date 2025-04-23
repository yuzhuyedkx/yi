#include<iostream>
using namespace std;
class Employee {
protected:
    string name;
    int pay;
public:
    Employee(string name, int pay) : name(name), pay(pay) { display(); }
    void display() { cout << "职工姓名：" << name << " , 工资：" << pay << endl; }
    ~Employee() { ; }
};
class Postgraduate {
protected:
    string name;
    int grade;
public:
    Postgraduate(string name, int grade) : name(name), grade(grade) { display(); }
    void display() { cout << "研究生姓名：" << name << " , 成绩：" << grade << endl; }
    ~Postgraduate() { ; }
};
class on_the_jobPostgraduate : public Employee, public Postgraduate {
protected:
    string name;
    int ID;
public:
    on_the_jobPostgraduate(int pay, int grade, string name, int ID) :Employee(name, pay), Postgraduate(name, grade), name(name), ID(ID)
    {
        display();
    }
    void display() { cout << "在职研究生姓名：" << name << " , 学号：" << ID << " , 工资：" << pay << " , 成绩：" << grade << endl; }
    ~on_the_jobPostgraduate() { ; }
};
int main() {
    on_the_jobPostgraduate on_jP1(5000, 98, "李华", 01);
    return 0;
}