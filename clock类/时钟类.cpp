//定义（Time）时钟类，包括私有成员：时、分、秒。
// 公有成员函数：setTime()设置时钟的时分秒，showTime（）显示当前时间。
//在main中，输入时分秒，显示当前时间；

#include <iostream>
using namespace std;
class Time {
private:
    int hour;
    int minute;
    int second;
public:
    void setTime();
    void showTime();
    ~Time() { ; }
};
void Time::setTime() {
    cin >> hour >> minute >> second;
    if (0 <= hour && hour <= 24)  ;
    else {
        cout << "hour输入格式错误！ " << endl;
        hour = 00;
    } 
    if (0 <= minute && minute <= 60)  ;
    else {
        cout << "minute输入格式错误！ " << endl;
        minute = 00;
    }
    if (0 <= second && second <= 60)  ;
    else {
        cout << "second输入格式错误！ " << endl;
        second = 00;
    }
}
void Time::showTime() {
    cout << hour << " 时" << minute << " 分" << second << " 秒" << endl;
}
int main()
{
    Time time;
    cout << "请输入时、分、秒:" << endl;
    time.setTime();
    time.showTime();
    return 0;
}
