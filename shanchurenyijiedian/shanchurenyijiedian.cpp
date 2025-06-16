#include<iostream>
using namespace std;
int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << "	";
	}
	int n = 0;
	cout << "\n删除第几个数：";
	cin >> n;
	for (int i = n - 1; i < 9; i++) {
		arr[i] = arr[i + 1];
	}
	int b[9] = { 0 };
	for (int i = 0; i < 9; i++) {
		b[i] = arr[i];
		cout << b[i] << "	";
	}
	return 0;
}