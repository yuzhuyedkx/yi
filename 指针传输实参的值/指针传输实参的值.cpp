#include<stdio.h> 
#include<iostream>
using namespace std;
//��ָ�봫��ʵ�ε�ֵ 
void exchange(int *p,int *q); 
int main(){
	int a=10;
	int b=20;
	cout<<"����ǰ��a="<<a<<",b="<<b<<endl;
    exchange(&a,&b);
	cout<<"������a="<<a<<",b="<<b<<endl;
	return 0;
}
void exchange(int *p,int *q){
	int z=*p;
	*p=*q;
	*q=z;
}
