//2.设计一个 Vector 类，要求：
//实现友元函数 dotProduct 计算两个向量的点积（公式：v1.x*v2.x + v1.y*v2.y）。
#include <iostream>
using namespace std;
class Vector {
private:
    double x, y;
public:
    Vector(double x, double y) :x(x), y(y) {};
    /*Vector(double x, double y) { x = x; y = y; };*/
    friend double dot_Product(Vector v1, Vector v2);
    ~Vector() { ; }
};
double dot_Product(Vector v1, Vector v2) {
    return v1.x * v2.x + v1.y * v2.y;
}
int main()
{
    Vector V1(5.4, 3.4), V2(5.2, 4.8);
    cout << "两个向量的点积为：" << dot_Product(V1, V2) << endl;
    return 0;
}
