#include<iostream>
#include<string>
using namespace std;
//设计一个分数类 Fraction 并重载乘法运算符：创建分数类 Fraction，
//包含私有成员变量 numerator（分子，整型）和 denominator（分母，整型）。
//编写有参构造函数对分子和分母进行初始化，并在构造函数中处理分母为 0 的情况（如抛出异常）。
//提供成员函数 void simplify() 用于化简分数（将分子和分母同时除以它们的最大公约数），
//以及 void display() 用于显示分数（格式为 a / b）。重载乘法运算符 “ * ”，实现两个分数相乘，
//并在相乘后调用 simplify() 函数化简结果。在主程序中创建两个 Fraction 对象，
//执行乘法运算，再调用 display() 函数验证结果。
class Fraction {
private:
    int numerator, denominator;
public:
    Fraction() { numerator = 0; denominator = 0; }
    Fraction(int n, int d) :numerator(n), denominator(d) {
        if (d == 0) {
            n = 0;
            d = 1;
        }
    }
    Fraction operator*(Fraction& c2);
    void simplify();
    void display();
    ~Fraction() { ; }
};
Fraction Fraction::operator*(Fraction& c2) {
    Fraction c;
    c.numerator = numerator * c2.numerator;
    c.denominator = denominator * c2.denominator;
    return c;
}
void Fraction::simplify() {
    int n = numerator;
    int d = denominator;
    int max = n;
    while (d % n != 0) {
        max = d % n;
        d = n;
        n = max;
    }
    Fraction::numerator /= max;
    Fraction::denominator /= max;
}
void Fraction::display() {
    cout << "c1*c2 = " << numerator << "/" << denominator << endl;
}
int main() {
    Fraction c1(3, 7), c2(4, -3), c3;
    c3 = c1 * c2;
    c3.simplify();
    c3.display();
    return 0;
}
