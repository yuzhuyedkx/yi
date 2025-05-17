#include<iostream>
#include<stdexcept>//������׼�쳣ͷ�ļ�
using namespace std;
//���һ�������� Date ��������������������������� Date��
//����˽�г�Ա���� year���꣬���ͣ���month���£����ͣ���day���գ����ͣ���
//�ṩ�вι��캯�������ڳ�ʼ���ꡢ�¡��գ�������Ƿ����ڣ����·ݲ��� 1 - 12 ֮�䣬
//���ڲ����϶�Ӧ�·ݵ���������������׳��쳣����
//��д��Ա���� bool isValid() �����жϵ�ǰ�����Ƿ�Ϸ���
//����ǰ����������� ��++�� �ͺ������������ ��++(int)����
//ʵ�����ڵ��������������ǲ�ͬ�·ݵ������Լ������������� 2 ���������� 29 �죬ƽ���� 28 �죩��
//���������д��� Date ���󣬷ֱ�ʹ��ǰ�úͺ�����������������ڽ��в�����
//������ isValid() ����������ڵĺϷ��ԣ�ͬʱ�������������ڡ�
class Date {
private:
	int year, month, day;
public:
	Date() { year = 0; month = 0; day = 0; }
	Date(int y, int m, int d) :year(y), month(m), day(d){
		if (!isValid()) {
			throw invalid_argument("Date anomaly!");//�׳���׼�쳣����
		}
	}
	bool isValid();
	int daysInMonth(int m);
	Date operator++ ();//����ǰ���������������
	Date operator++ (int);//���������������������
	friend ostream& operator<< (ostream& out, const Date& date);
};
bool Date::isValid() {
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		if (month == 2&& day > 29) {
			return false;
		}
	}
	if (year < 0 || month < 1 || month>12 || day < 1||day>daysInMonth(month)) {
		return false;
	}
}
int Date::daysInMonth(int m) {
	static const int days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if (m == 2 && year % 400 == 0) {
		return 29;
	}
	return days[m];
}
Date Date::operator++ () {   //����ǰ��������������غ���
	day++;
	if (day > daysInMonth(month)) {
		day = 1;
		month++;
		if (month > 12) {
			month = 1;
			year++;
		}
	}
	return *this;
}
Date Date::operator++ (int) {    //�������������������غ���
	Date temp = *this;
	++(*this);
	return temp;
}
ostream& operator<< (ostream& out, const Date& date) {
	out << date.year << "-" << date.month << "-" << date.day << endl;
	return out;
}
int main() {
	try {
		Date date(2024, 4, 30);
		cout << "ԭʼ���ڣ�";
		cout << date;
		cout << "ǰ������������ڣ�";
		cout << ++date;
		Date date_1(2024, 4, 30);
		cout << "ԭʼ���ڣ�";
		cout << date_1;
		cout << "��������������ڣ�";
		cout << date_1++;
	}
	catch (invalid_argument) {
		cerr << "Date anomaly!" << endl;
	}
	return 0;
}