#include<stdio.h>
void math(unsigned int n){
    if(n>9){
        math(n/10);
    }
    printf("%d  ",n%10);
}
int main(){
    unsigned int num=12345;
    math(num);
    getchar();
    return 0;
}