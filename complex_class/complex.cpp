#include<iostream>
#include<string>
using namespace std;
//���һ�������� Complex �����ؼӷ��������
//���帴���� Complex������˽�г�Ա���� real��ʵ����˫���ȸ����ͣ��� imag���鲿��˫���ȸ����ͣ���
//�ṩ�вι��캯�����ڳ�ʼ��ʵ�����鲿���Լ���Ա���� void display() ������ʾ��������ʽΪ a + bi�����鲿Ϊ 0 ��ֻ��ʾʵ������
//���ؼӷ������ �� + ����ʹ���ܹ�ʵ������������ӡ�
//���������д������� Complex ���󣬽��мӷ����㣬������ display() ����������Ƿ���ȷ��
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
