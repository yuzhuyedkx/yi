#include<iostream>
#include<fstream>
#include<string>
using namespace std;
//�ļ����������ı��ļ���д�����ȡ
//����һ��Employee�࣬����id������int����name���ַ���string����salary��˫���ȸ�����double����Ա������
//ʹ���ļ��������ofstream����Ա����Ϣд���ı��ļ�employee.txt��ÿ�д洢һ����¼���ֶμ��ö��ŷָ�����1, Alice, 8000.00����
//ʹ���ļ���������ifstream����ȡ�ļ����ݣ������Ա����Ϣ��
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
	ofstream outfile("employee.txt");//���ļ�
	if (!outfile) {
		cout << "�ļ���ʧ�ܣ�" << endl;
	}
	outfile << "����   " << "����   " << "����" << endl;    //��Ա����Ϣд���ı�
	outfile << emp1.ID() << ", " << emp1.Name() << ", " << emp1.Salary() << endl;
	ifstream infile("employee.txt");
	if (!infile) {
		cout << "�ļ���ʧ�ܣ�" << endl;
	}
	string strid, strname, strsalary;
	int id;
	string name;
	double salary;
	infile >> strid >> strname >> strsalary;
	infile >> id>>name>>salary;  //��ȡ�ļ����ݣ������Ա����Ϣ
	outfile.close();
	infile.close();
	return 0;
}
