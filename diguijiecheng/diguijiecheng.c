#include<stdio.h>
int Factorial(int n);
int main(){
    int i=0;
    printf("Please enter the value of i (i>0) :");
    scanf("%d",&i);
    printf("The factorial of %d=%d",i,Factorial(i));
    return 0;
}
//用函数递归实现n的阶乘
int Factorial(int n){
    if(n>0) {
        return n*Factorial(n-1);
    }
    if(n==0){
        return 1;
    }
    else{
        printf("error\n");
        return 0;
    }
}