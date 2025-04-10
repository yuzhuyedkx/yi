//设计一个Plant（植物）类，包含私有成员name（植物名称）、height（当前高度，单位：厘米）、growthRate（生长速度，单位：厘米 / 月）；
//公有成员构造函数——初始化植物名称、初始高度和生长速度；
//grow(int months)函数——根据生长时间和生长速度计算新的高度；
//showStatus()——显示植物当前状态，格式为 { 植物名称 } 高度: {高度}cm。

#include <iostream>
using namespace std;
class Plant {
private:
    string  name;
    float height;
    float growthRate;
public:
    void input() {
        cin >> name >> height >> growthRate;
    }
    void grow(int months);
    void showStatus();
    ~Plant() {
        cout << "Destructoring an object" << " " << name << endl;
    }
};
void Plant::grow(int months) {
    height += growthRate * months;    //计算每一个植株分别的新植株高度
}
void Plant::showStatus() {
    cout << "" << name << " 高度：" << height << endl;    //显示当前新株高
}
int main()
{
    cout << "请输入植株名称、当前高度（单位：厘米）、生长速度（单位：厘米 / 月）：" << endl;
    const int n = 3;
    Plant p[n];
    int i = 0;
    for (i = 0; i <= n - 1; i++) p[i].input();
    for (i = 0; i <= n - 1; i++) p[i].grow(3);
    for (i = 0; i <= n - 1; i++) p[i].showStatus();
    return 0;
}
