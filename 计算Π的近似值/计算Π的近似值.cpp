#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//���㦰�Ľ���ֵ�� 
int main(int argc, char** argv) {
    double a,b=1.0;    //��ʼֵΪ1
    double term=1.0;    //��һ��Ϊ1
    int i=1;            //�ӵ�һ�ʼ
    while(term>=0.0001){
        term*=(double)(i)/(2*i+1);//������һ��
        b+=term;                  //�ۼӵ�����ֵ
        i++;
    }
    a=b*2;           //��2�æ��Ľ���ֵ
    cout<<"���Ľ���ֵΪ��"<<a<<endl;
    return 0;
}

