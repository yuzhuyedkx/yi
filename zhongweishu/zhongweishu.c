#include<stdio.h>
#include<string.h>
double median(double a[],int r);
int main(){
    double arr[]={1,2,3,4,5,6,7,8,9,10};
    int right=sizeof(arr)/sizeof(arr[0])-1;
    double n=median(arr,right);
    printf("median=%.2f",n);
    getchar();
    return 0;
}
//求中位数
double median(double a[],int r){
    if(r/2!=0){
        return (a[r/2]+a[r/2+1])/2;
    }
    else{
        return a[r/2];
    }
}