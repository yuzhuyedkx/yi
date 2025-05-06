#include<stdio.h>
void yichuyuansu(int a[],int *e,int *b);
int main(){
    int arr[]={1,3,6,8,9,3,6,7};
    int v=3;
    int c=sizeof(arr)/sizeof(arr[0]);
    yichuyuansu(arr,&c,&v);
    return 0;
}
//移除元素
void yichuyuansu(int a[],int *e,int *b){
    int i=0;
    printf("remove the numbers before:");
    for(i=0;i<*e;i++){
        printf("%d",a[i]);
    }
    printf("\nThe numbers to be removed are:%d",*b);
    for(i=0;i<*e;i++){
        if(a[i]==*b){
            int j;
            for(j=1;j<*e-i;j++){
                a[i+j-1]=a[i+j];
            }
            a[i+j-1]=0;
            printf("\ni_=%d,j_=%d",i,j);
            printf("\narr[i+j]_=%d",a[i+j-1]);
        }
    }
    printf("\nThe numbers after removal are:");
    for(i=0;i<*e;i++){
        printf("%d",a[i]);
    }
}