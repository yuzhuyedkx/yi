#include<iostream>
#include<string>
using namespace std;
//���һ�������� Fraction �����س˷������������������ Fraction��
//����˽�г�Ա���� numerator�����ӣ����ͣ��� denominator����ĸ�����ͣ���
//��д�вι��캯���Է��Ӻͷ�ĸ���г�ʼ�������ڹ��캯���д����ĸΪ 0 ����������׳��쳣����
//�ṩ��Ա���� void simplify() ���ڻ�������������Ӻͷ�ĸͬʱ�������ǵ����Լ������
//�Լ� void display() ������ʾ��������ʽΪ a / b�������س˷������ �� * ����ʵ������������ˣ�
//������˺���� simplify() ���������������������д������� Fraction ����
//ִ�г˷����㣬�ٵ��� display() ������֤�����
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
