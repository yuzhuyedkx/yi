#include<iostream>
#include<string>
using namespace std;
//设计一个复数类 Complex 并重载加法运算符：
//定义复数类 Complex，包含私有成员变量 real（实部，双精度浮点型）和 imag（虚部，双精度浮点型）。
//提供有参构造函数用于初始化实部和虚部，以及成员函数 void display() 用于显示复数（格式为 a + bi，若虚部为 0 则只显示实部）。
//重载加法运算符 “ + ”，使其能够实现两个复数相加。
//在主程序中创建两个 Complex 对象，进行加法运算，并调用 display() 函数检查结果是否正确。
class Complex {
private:
    double real, imag;
public:
    Complex() { real = 0; imag = 0; }
    Complex(double r, double i) : real(r), imag(i) { ; }
    Complex operator+(Complex& c2);
    void display();
};;
Complex Complex::operator+(Complex& c2) {
    Complex c;
    c.real = real + c2.real;
    c.imag = imag + c2.imag;
    return c;
}
void Complex::display() {
    if (imag != 0) {
        cout << "c1+c2=" << real << " + " << imag << "i" << endl;
    }
    else {
        cout << "c1+c2=" << real << endl;
    }
}
int main() {
    Complex c1(3, 7.5), c2(4.2, -3.4), c3;
    //c3 = c1.operator+(c2);
    c3 = c1 + c2;
    c3.display();
    return 0;
}
