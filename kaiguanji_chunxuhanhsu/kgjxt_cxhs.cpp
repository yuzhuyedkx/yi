#include<iostream>
#include<string>
using namespace std;
class ElectronicDevice {
protected:
	string deviceName;
public:
	ElectronicDevice(string deName):deviceName(deName){}
	virtual void turnOn()=0;
	virtual void turnOff() = 0;
	virtual ~ElectronicDevice() { cout << deviceName << ":资源已释放" <<endl; };
};
class Smartphone :public ElectronicDevice {
public:
	Smartphone(string deName) :ElectronicDevice(deName){}
	void turnOn() { cout << deviceName << "电脑启动中，稍等片刻" << endl; }
	void turnOff() { cout << deviceName << "笔记本电脑正常关机" << endl; };
};
class Laptop :public ElectronicDevice {
public:
	Laptop(string deName) :ElectronicDevice(deName) {}
	void turnOn() { cout << deviceName << "已开机，欢迎使用！" << endl; }
	void turnOff() { cout << deviceName << "已关机，再见！" << endl; };
};
int main() {
	Smartphone phone("华为手机");
	Laptop laptop("戴尔笔记本");
	phone.turnOn();
	phone.turnOff();
	laptop.turnOn();
	laptop.turnOff();
	return 0;
}