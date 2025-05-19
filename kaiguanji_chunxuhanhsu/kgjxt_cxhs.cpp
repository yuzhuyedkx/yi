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
	virtual ~ElectronicDevice() { cout << deviceName << ":��Դ���ͷ�" <<endl; };
};
class Smartphone :public ElectronicDevice {
public:
	Smartphone(string deName) :ElectronicDevice(deName){}
	void turnOn() { cout << deviceName << "���������У��Ե�Ƭ��" << endl; }
	void turnOff() { cout << deviceName << "�ʼǱ����������ػ�" << endl; };
};
class Laptop :public ElectronicDevice {
public:
	Laptop(string deName) :ElectronicDevice(deName) {}
	void turnOn() { cout << deviceName << "�ѿ�������ӭʹ�ã�" << endl; }
	void turnOff() { cout << deviceName << "�ѹػ����ټ���" << endl; };
};
int main() {
	Smartphone phone("��Ϊ�ֻ�");
	Laptop laptop("�����ʼǱ�");
	phone.turnOn();
	phone.turnOff();
	laptop.turnOn();
	laptop.turnOff();
	return 0;
}