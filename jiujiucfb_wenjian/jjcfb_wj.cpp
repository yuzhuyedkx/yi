#include<iostream>
#include<fstream>
#include<string>
using namespace std;
//���žų˷���д���ļ������ļ��ж�����ʾ���Ͻ�����ʾ��
void jiujiuchengfabiao() {
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j <= i; j++) {
			cout << j << " * " << i << " = " << i * j <<"   ";
		}
		cout << endl;
	}
}
int main() {
	ofstream outfile("jiujiuchengfabiao.txt");
	if (!outfile) {
		cout << "�ļ���ʧ�ܣ�" << endl;
	}   
	for (int i = 1; i < 10; i++) {      //������д���ļ�
		for (int j = 1; j <= i; j++) {
			outfile << j << " * " << i << " = " << i * j << "   ";
		}
		outfile << endl;
	}
	ifstream infile("jiujiuchengfabiao.txt");
	if (!infile) {
		cout << "�ļ���ʧ�ܣ�" << endl;
	}
	string line;
	while (getline(infile, line)) {
		cout << line << endl;
	}
	outfile.close();
	infile.close();
	return 0;
}
