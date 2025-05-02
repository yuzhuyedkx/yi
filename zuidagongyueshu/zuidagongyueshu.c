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
    int max=0;
    for(int i=1;i<=n&&i<=m;i++){
        if(m%i==0&&n%i==0){
            max=i;
        }
    }
    return max;
}