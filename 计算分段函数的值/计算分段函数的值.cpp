#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//计算分段函数的值 
int main(int argc, char** argv) {
    float x,y;
    cout<<"请任意输入一个x的值:"<<endl;
    cin>>x;
    if( 0 <= x < 5 ){
        y=-x+2.5;
    }
    else{
    if(5<=x<10){
        y=2-1.5*(x-3)*(x-3);  
    }
    else{
        if(10 <= x < 20){
            y=x/2-1.5;     
        }
    }
    }
    cout<<"y="<<y<<endl;
    return 0;
}

