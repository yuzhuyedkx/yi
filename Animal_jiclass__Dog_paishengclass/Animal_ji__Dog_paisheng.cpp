#include<iostream>
#include<string>
using namespace std;
//������� Animal �������� Dog
//������� Animal���������г�Ա���� name���������֣��͹��г�Ա���� makeSound���� makeSound �����м���� ��An animal makes a sound.����
//���������� Dog���Թ��м̳еķ�ʽ�̳��� Animal �ࡣDog �����һ��˽�г�Ա���� breed��Ʒ�֣������ṩ���г�Ա���� displayInfo����������������ֺ�Ʒ����Ϣ���� displayInfo �����У��ȵ��û���� makeSound ������������������ֺ�Ʒ�֡�
//��д��������в��ԣ�����һ�� Dog ��Ķ��󣬳�ʼ�������ֺ�Ʒ����Ϣ��ͨ���ö�����ôӻ���̳е� makeSound ����������ܷ���ȷ���ʣ�Ȼ����� Dog ������� displayInfo �������鿴�������Ϣ�Ƿ���ȷ
class Animal {
public:
	string name;
	Animal(string n) :name(n) { ; }
	void makeSound();
	~Animal() { ; }
};
void Animal::makeSound() {
	cout << "An animal makes a sound." << endl;
}
class Dog:public Animal{
private:
	string breed;
public:
	Dog(string n, string b) :Animal(n), breed(b) { ; }
	void displayInfo();
};
void Dog::displayInfo() {
	Animal::makeSound();
	cout << "����������" << name << " ��	����Ʒ�֣�" << breed << endl;
}
int main() {
	Dog dog_1("�Ƕ�", "�л���԰Ȯ");
	cout << "�����ʣ�";
	dog_1.makeSound();
	dog_1.displayInfo();
	return 0;
}