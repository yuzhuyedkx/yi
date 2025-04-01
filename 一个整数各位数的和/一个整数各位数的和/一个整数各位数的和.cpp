//定义一个函数计算一个正整数各位数字之和，要求不使用函数返回值和指针返回运算结果。

#include <iostream>
using namespace std;
void Sum(int a, int &s);
int main()
{
    int a = 132453;
    int s = 0;
    Sum(a, s);
    cout << a << "各位数的和为：" << s << endl;
    return 0;
}

void Sum(int a, int &s) {
    s = 0;
    while (a > 0) {
        s += a % 10;
        a/=10;
    }
}