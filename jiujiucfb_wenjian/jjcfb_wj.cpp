#include<iostream>
#include<fstream>
#include<string>
using namespace std;
//将九九乘法表写入文件并从文件中读到显示器上进行显示。
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
		cout << "文件打开失败！" << endl;
	}   
	for (int i = 1; i < 10; i++) {      //将内容写入文件
		for (int j = 1; j <= i; j++) {
			outfile << j << " * " << i << " = " << i * j << "   ";
		}
		outfile << endl;
	}
	ifstream infile("jiujiuchengfabiao.txt");
	if (!infile) {
		cout << "文件打开失败！" << endl;
	}
	string line;
	while (getline(infile, line)) {
		cout << line << endl;
	}
	outfile.close();
	infile.close();
	return 0;
}
