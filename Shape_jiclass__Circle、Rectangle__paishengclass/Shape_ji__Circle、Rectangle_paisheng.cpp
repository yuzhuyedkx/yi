#include<iostream>
#include<string>
using namespace std;
//设计一个基类Shape和派生类Circle、Rectangle
//Shape基类：包含保护成员变量color（颜色，字符串类型），用于表示图形的颜色。提供带参构造函数用于初始化颜色，以及成员函数void displayArea() ，该函数用于显示图形的面积（在基类中可简单输出提示信息，如 “这是一个图形，面积未定义”）。
//Circle派生类：继承自Shape类，增加私有成员变量radius（半径，浮点数类型）。实现构造函数，调用基类构造函数初始化颜色，并初始化半径。重写基类的成员函数void displayArea()，按照圆的面积公式S = πr^2（π取 3.14）计算并显示圆的面积。
//Rectangle派生类：继承自Shape类，增加私有成员变量width（宽度，浮点数类型）和height（高度，浮点数类型）。实现带参构造函数，调用基类构造函数初始化颜色，并初始化宽度和高度。重写基类的虚函数void displayArea() ，按照矩形面积公式S = width×height计算并显示矩形的面积。
//编写主程序测试：创建Circle对象和Rectangle对象，分别调用displayArea()函数，验证面积计算和显示的正确性。
class Shape {
protected:
	string color;
public:
	Shape(string c) :color(c) { ; }
	void displayArea();
};
void Shape::displayArea() {
	cout << "这是一个图形，面积未定义！" << endl;
}
class Circle :public Shape {
private:
	float radius;
public:
	Circle(string c, float r) :Shape(c), radius(r) { ; }
	//重写基类的成员函数void displayArea();
	void displayArea();
};
void Circle::displayArea() {
	cout <<"颜色："<<Shape::color << ", 半径：" << radius << ", 圆面积：" << 3.14 * radius * radius << endl;
}
class Rectangle :public Shape{
private:
	float width,height;
public:
	Rectangle(string c, float w, float h) :Shape(c), width(w), height(h) { ; }
	void displayArea();
};
void Rectangle::displayArea() {
	cout << "颜色：" << Shape::color <<", 宽：" << width << ", 高："<<height << ", 矩形面积：" << width * height << endl;
}
int main() {
	Circle circle_1("蓝色", 3.1);
	Rectangle rec_1("紫色", 2.7, 3.6);
	circle_1.displayArea();
	rec_1.displayArea();
	return 0;
}