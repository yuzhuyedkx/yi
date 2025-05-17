#include<iostream>
#include<stdexcept>//包含标准异常头文件
using namespace std;
//设计一个日期类 Date 并重载自增运算符：定义日期类 Date，
//包含私有成员变量 year（年，整型）、month（月，整型）、day（日，整型）。
//提供有参构造函数，用于初始化年、月、日，并处理非法日期（如月份不在 1 - 12 之间，
//日期不符合对应月份的天数等情况，可抛出异常）。
//编写成员函数 bool isValid() 用于判断当前日期是否合法。
//重载前置自增运算符 “++” 和后置自增运算符 “++(int)”，
//实现日期的自增操作（考虑不同月份的天数以及闰年的情况，如 2 月在闰年有 29 天，平年有 28 天）。
//在主程序中创建 Date 对象，分别使用前置和后置自增运算符对日期进行操作，
//并调用 isValid() 函数检查日期的合法性，同时输出自增后的日期。
class Date {
private:
	int year, month, day;
public:
	Date() { year = 0; month = 0; day = 0; }
	Date(int y, int m, int d) :year(y), month(m), day(d){
		if (!isValid()) {
			throw invalid_argument("Date anomaly!");//抛出标准异常数据
		}
	}
	bool isValid();
	int daysInMonth(int m);
	Date operator++ ();//声明前置自增运算符函数
	Date operator++ (int);//声明后置自增运算符函数
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
Date Date::operator++ () {   //定义前置自增运算符重载函数
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
Date Date::operator++ (int) {    //定义后置自增运算符重载函数
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
		cout << "原始日期：";
		cout << date;
		cout << "前置自增后的日期：";
		cout << ++date;
		Date date_1(2024, 4, 30);
		cout << "原始日期：";
		cout << date_1;
		cout << "后置自增后的日期：";
		cout << date_1++;
	}
	catch (invalid_argument) {
		cerr << "Date anomaly!" << endl;
	}
	return 0;
}