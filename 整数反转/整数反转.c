#include<stdio.h>
#include<string.h>
void reverseInteger(char a[],int r);
int main(){
    char arr[100]="120034000";
    printf("倒序前的数字：");
    int right=strlen(arr)-1;
    for(int i=0;i<=right;i++){
        printf("%c",arr[i]);
    }
    reverseInteger(arr,right);
    getchar();
    return 0;
}

void reverseInteger(char a[],int r){
    while(0<=r){
        if(a[r]=='0'){
            r--; 
        }
        else{
            break;
        }
    }
    printf("\n倒序后的数字：");
    for(int i=r;0<=i;i--){
        printf("%c",a[i]);
    }
}