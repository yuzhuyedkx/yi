#include<stdio.h>
int leastCommonMultiple(int m,int n);
int main(){
    int x=0;
    int y=0;
    printf("please enter any two integers:");
    scanf("%d %d",&x,&y);
    printf("least common multiple is:%d",leastCommonMultiple(x,y));
    return 0;
}
//求两个数的最小公倍数
int leastCommonMultiple(int m,int n){
    int max=n;
    int min=0;
    int j=m*n;
    while(m%n!=0){
        max=m%n;
        m=n;
        n=max;
    }
    min=j/max;
    return min;
}