#include<stdio.h>
#include<windows.h>
int main(){
    printf("Beeing\n");
    //音屏函数
    Beep(261.6,200);//do
    Beep(293.6,200);//re
    Beep(329.6,200);//mi
    Beep(349.2,200);//fa
    Beep(392,200);//so
    Beep(400,200);//la
    Beep(493.8,200);//si
    printf("Done\n");
    return 0;
}