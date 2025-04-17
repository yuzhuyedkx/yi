// 类和派生 圆类.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
#include <iostream> 
#include <iomanip>
using namespace std;
const double Pi = 3.1415926;
class Circle {
protected:
	double radii;
public:
	Circle(double radii) : radii(radii) {}
	double area() {
		return Pi * radii * radii;
	}
	double perineter() {
		return 2 * Pi * radii;
	}
	~Circle() {}
};
class Ball : public Circle {
protected:
	double radii;
public:
	Ball(double radii) :Circle(radii), radii(radii) {
		surfacedrea();
		volune();
		cout << "---------------------------------" << endl;
	}
	void surfacedrea() {
		cout << "球的表面积近似为：" << setprecision(7) << (4 * Pi * radii * radii) << endl;
	}
	void volune() {
		cout << "球的体积近似为：" << setprecision(7) << (4 * Pi * radii * radii * radii) / 3 << endl;
	}
	~Ball() {}
};
class Cylinder : public Circle {
protected:
	double hight;
	double radii;
public:
	Cylinder(double radii, double hight) :Circle(radii), hight(hight) {
		surfacedrea();
		volune();
		cout << "---------------------------------" << endl;
	}
	void surfacedrea() {
		Circle::area();
		Circle::perineter();
		cout << "圆柱体的表面积近似为：" << setprecision(7) << 2 * area() + hight * perineter() << endl;
	}
	void volune() {
		Circle::area();
		cout << "圆柱体的体积近似为：" << setprecision(7) << area() * hight << endl;
	}
	~Cylinder() {}
};
class Cob : public Circle {
protected:
	double generatrix;
	double hight;
public:
	Cob(double radii, double generatrix, double hight) :Circle(radii), generatrix(generatrix), hight(hight) {
		surfacedrea();
		volune();
		cout << "---------------------------------" << endl;
	}
	void surfacedrea() {
		Circle::area();
		cout << "圆锥的表面积近似为：" << setprecision(7) << area() + Pi * radii * generatrix << endl;
	}
	void volune() {
		Circle::area();
		cout << "圆锥的体积近似为：" << setprecision(4) << (area() * hight) / 3 << endl;
	}
	~Cob() {}
};
int main() {
	Circle circle(2.7);
	Ball ball(2.7);
	Cylinder cylinder(2.7, 3.4);
	Cob cob(2.7, 3.5, 2.9);
	return 0;
}