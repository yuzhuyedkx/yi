#include<iostream>
#include<string>
using namespace std;
class Counter {
private:
	int value;
public:
	Counter(int val=0):value(val){}
	Counter& operator++();   //ǰ������  ++a
	Counter& operator++(int);   //��������  a++
	Counter& operator--();   //ǰ���Լ�
	Counter& operator--(int);   //�����Լ�
	void display();
	~Counter() { ; }
};
Counter& Counter::operator++() {
	value++;
	return *this;//�������ã�֧����ʽ����
}
Counter& Counter::operator++(int) {
	Counter temp = *this;  //����ԭֵ
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
	cout << "ԭ��ֵ:";
	counter.display();

	cout << "ǰ������:";
	++counter;
	counter.display();

	cout << "value:";
	counter++.display();
	cout << "��������:";
	counter.display();

	cout << "ǰ���Լ�:";
	--counter;
	counter.display();

	cout << "value:";
	counter--.display();
	cout << "�����Լ�:";
	counter.display();
	return 0;
}