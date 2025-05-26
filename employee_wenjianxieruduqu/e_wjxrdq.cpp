#include<iostream>
#include<fstream>
#include<string>
using namespace std;
//文件流操作：文本文件的写入与读取
//创建一个Employee类，包含id（整数int）、name（字符串string）、salary（双精度浮点数double）成员变量。
//使用文件输出流（ofstream）将员工信息写入文本文件employee.txt，每行存储一条记录，字段间用逗号分隔（如1, Alice, 8000.00）。
//使用文件输入流（ifstream）读取文件内容，并输出员工信息。
class Employee {
private:
	int id;
	string name;
	double salary;
public:
	Employee(int id, string name, double salary):id(id),name(name),salary(salary){ ; }
	int ID() { return id; }
	string Name() { return this->name; }
	double Salary() { return salary; }
};
int main() {
	Employee emp1(001, "limi", 9000);
	ofstream outfile("employee.txt");//打开文件
	if (!outfile) {
		cout << "文件打开失败！" << endl;
	}
	outfile << "工号   " << "姓名   " << "工资" << endl;    //将员工信息写入文本
	outfile << emp1.ID() << ", " << emp1.Name() << ", " << emp1.Salary() << endl;
	ifstream infile("employee.txt");
	if (!infile) {
		cout << "文件打开失败！" << endl;
	}
	string strid, strname, strsalary;
	int id;
	string name;
	double salary;
	infile >> strid >> strname >> strsalary;
	infile >> id>>name>>salary;  //读取文件内容，并输出员工信息
	outfile.close();
	infile.close();
	return 0;
}
