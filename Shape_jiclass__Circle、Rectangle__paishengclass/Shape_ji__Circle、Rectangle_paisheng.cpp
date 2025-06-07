#include<iostream>
#include<string>
using namespace std;
//���һ������Shape��������Circle��Rectangle
//Shape���ࣺ����������Ա����color����ɫ���ַ������ͣ������ڱ�ʾͼ�ε���ɫ���ṩ���ι��캯�����ڳ�ʼ����ɫ���Լ���Ա����void displayArea() ���ú���������ʾͼ�ε�������ڻ����пɼ������ʾ��Ϣ���� ������һ��ͼ�Σ����δ���塱����
//Circle�����ࣺ�̳���Shape�࣬����˽�г�Ա����radius���뾶�����������ͣ���ʵ�ֹ��캯�������û��๹�캯����ʼ����ɫ������ʼ���뾶����д����ĳ�Ա����void displayArea()������Բ�������ʽS = ��r^2����ȡ 3.14�����㲢��ʾԲ�������
//Rectangle�����ࣺ�̳���Shape�࣬����˽�г�Ա����width����ȣ����������ͣ���height���߶ȣ����������ͣ���ʵ�ִ��ι��캯�������û��๹�캯����ʼ����ɫ������ʼ����Ⱥ͸߶ȡ���д������麯��void displayArea() �����վ��������ʽS = width��height���㲢��ʾ���ε������
//��д��������ԣ�����Circle�����Rectangle���󣬷ֱ����displayArea()��������֤����������ʾ����ȷ�ԡ�
class Shape {
protected:
	string color;
public:
	Shape(string c) :color(c) { ; }
	void displayArea();
};
void Shape::displayArea() {
	cout << "����һ��ͼ�Σ����δ���壡" << endl;
}
class Circle :public Shape {
private:
	float radius;
public:
	Circle(string c, float r) :Shape(c), radius(r) { ; }
	//��д����ĳ�Ա����void displayArea();
	void displayArea();
};
void Circle::displayArea() {
	cout <<"��ɫ��"<<Shape::color << ", �뾶��" << radius << ", Բ�����" << 3.14 * radius * radius << endl;
}
class Rectangle :public Shape{
private:
	float width,height;
public:
	Rectangle(string c, float w, float h) :Shape(c), width(w), height(h) { ; }
	void displayArea();
};
void Rectangle::displayArea() {
	cout << "��ɫ��" << Shape::color <<", ��" << width << ", �ߣ�"<<height << ", ���������" << width * height << endl;
}
int main() {
	Circle circle_1("��ɫ", 3.1);
	Rectangle rec_1("��ɫ", 2.7, 3.6);
	circle_1.displayArea();
	rec_1.displayArea();
	return 0;
}