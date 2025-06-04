#include<iostream>
#include<string>
using namespace std;
class Counter {
private:
	int value;
public:
	Counter(int val=0):value(val){}
	Counter& operator++();   //前置自增  ++a
	Counter& operator++(int);   //后置自增  a++
	Counter& operator--();   //前置自减
	Counter& operator--(int);   //后置自减
	void display();
	~Counter() { ; }
};
Counter& Counter::operator++() {
	value++;
	return *this;//返回引用，支持链式操作
}
Counter& Counter::operator++(int) {
	Counter temp = *this;  //保存原值
	value++;
	return temp;
}
Counter& Counter::operator--() {
	value--;
	return *this;
}
Counter& Counter::operator--(int) {
	Counter temp = *this; 
	value--;
	return temp;
}
void Counter::display() {
	cout<< value << endl;
}
int main() {
	Counter counter(6);
	cout << "原数值:";
	counter.display();

	cout << "前置自增:";
	++counter;
	counter.display();

	cout << "value:";
	counter++.display();
	cout << "后置自增:";
	counter.display();

	cout << "前置自减:";
	--counter;
	counter.display();

	cout << "value:";
	counter--.display();
	cout << "后置自减:";
	counter.display();
	return 0;
}