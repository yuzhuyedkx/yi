#include<iostream>
#include<iomanip>
#include<array>
#include<vector>
using namespace std;
class Matrix {
private:
	array<array<int, 3>, 2>mat;
public:
	Matrix();
	friend istream& operator>> (istream&, Matrix&);
	friend ostream& operator<< (ostream&, Matrix&);
	~Matrix() {}
};
Matrix::Matrix() {
	for (int i = 0; i < mat.size(); i++) {
		for (int j = 0; j < mat.size(); j++) {
			mat[i][j] = 0;
		}
	}
}
istream& operator>> (istream& in, Matrix& m) {
	for (int i = 0; i < m.mat.size(); i++) {
		for (int j = 0; j <3; j++) {
			in >> m.mat[i][j];
		}
	}
	return in;
}
ostream& operator<< (ostream& out, Matrix& m) {
	for (int i = 0; i < m.mat.size(); i++) {
		for (int j = 0; j < 3; j++) {
			out << left << setw(5) << m.mat[i][j];
		}
		out << endl;
	}
	return out;
}
int main() {
	Matrix m;
	cout << "2行3列的数组！" << endl;
	cout << "input m:" << endl;
	cin >> m; //operator>>(cin,m);
	cout << "output m:" << endl;
	cout << m;//operator<<(cout,m);
	return 0;
}