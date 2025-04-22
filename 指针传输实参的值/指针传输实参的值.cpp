#include<stdio.h> 
#include<iostream>
using namespace std;
//用指针传输实参的值 
void exchange(int *p,int *q); 
int main(){
	int a=10;
	int b=20;
	cout<<"交换前：a="<<a<<",b="<<b<<endl;
    exchange(&a,&b);
	cout<<"交换后：a="<<a<<",b="<<b<<endl;
	return 0;
}
void exchange(int *p,int *q){
	int z=*p;
	*p=*q;
	*q=z;
}
