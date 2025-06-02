#include<iostream>
#include<string>
using namespace std;
class Circle {
private:
	int r;
public:
	Circle(int r):r(r){}
	void area();
	void perimeter();
	~Circle() { cout << "circle" << endl; }
};
void Circle::area() {
	cout << "面积：" << 3.14*r*r<< endl;
}
void Circle::perimeter() {
	cout << "周长：" << 2 * 3.14 * r << endl;
}
int main(){
	Circle circle_1(3);
	circle_1.area();
	circle_1.perimeter();
	return 0;
}