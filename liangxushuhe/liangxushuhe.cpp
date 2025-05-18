#include<iostream>
using namespace std;
//求两个虚数的和
class Complex {
private:
    float real, imag;
public:
    Complex(float real, float imag) :real(real), imag(imag) { ; }
    float Real() { return real; }
    float Imag() { return imag; }
    void display();
};
float Add_1(Complex* ptr1, Complex* ptr2) {
    return (ptr1->Real() + ptr2->Real());
}
float Add_2(Complex* ptr1, Complex* ptr2) {
    return (ptr1->Imag() + ptr2->Imag());
}
void Complex::display() {
    if (imag != 0) {
        cout << real << "+" << imag << "i" << endl;
    }
    else {
        cout << real << endl;
    }
}
int main() {
    Complex complex_1(3.6, 7.5);
    Complex complex_2(4.2, -3.4);
    float a = Add_1(&complex_1, &complex_2);
    float b = Add_2(&complex_1, &complex_2);
    Complex complex_3(a, b);
    complex_3.display();
    return 0;
}
