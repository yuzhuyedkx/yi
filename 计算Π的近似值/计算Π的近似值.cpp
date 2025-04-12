#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//计算Π的近似值。 
int main(int argc, char** argv) {
    double a,b=1.0;    //初始值为1
    double term=1.0;    //第一项为1
    int i=1;            //从第一项开始
    while(term>=0.0001){
        term*=(double)(i)/(2*i+1);//计算下一项
        b+=term;                  //累加到近似值
        i++;
    }
    a=b*2;           //乘2得Π的近似值
    cout<<"Π的近似值为："<<a<<endl;
    return 0;
}

