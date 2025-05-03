#include<stdio.h>
int greatsetCommonDivisor(int m,int n);
int main(){
    int x=0;
    int y=0;
    printf("please enter any two integers:");
    scanf("%d %d",&x,&y);
    printf("greatset common divisor is:%d",greatsetCommonDivisor(x,y));
    return 0;
}
//求两个数的最大公约数
int greatsetCommonDivisor(int m,int n){
    int max=n;
    while(m%n!=0){
        max=m%n;
        m=n;
        n=max;
    }
    return max;
}