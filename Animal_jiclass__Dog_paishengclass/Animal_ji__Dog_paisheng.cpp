#include<iostream>
#include<string>
using namespace std;
//定义基类 Animal 和派生类 Dog
//定义基类 Animal，包含公有成员变量 name（动物名字）和公有成员函数 makeSound，在 makeSound 函数中简单输出 “An animal makes a sound.”。
//定义派生类 Dog，以公有继承的方式继承自 Animal 类。Dog 类添加一个私有成员变量 breed（品种），并提供公有成员函数 displayInfo，用于输出狗的名字和品种信息。在 displayInfo 函数中，先调用基类的 makeSound 函数，再输出狗的名字和品种。
//编写主程序进行测试：创建一个 Dog 类的对象，初始化其名字和品种信息。通过该对象调用从基类继承的 makeSound 函数，检查能否正确访问；然后调用 Dog 类自身的 displayInfo 函数，查看输出的信息是否正确
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
	cout << "狗的姓名：" << name << " ，	狗的品种：" << breed << endl;
}
int main() {
	Dog dog_1("糖豆", "中华田园犬");
	cout << "检查访问：";
	dog_1.makeSound();
	dog_1.displayInfo();
	return 0;
}