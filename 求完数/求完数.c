#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//����������֮��ǡ�õ��ڸ������� 
int main(int argc, char *argv[]) {
	int a,b,sum;
    for(a=1;a<100;a++){
        for(b=1,sum=0;b<a;b++){
            if(a%b==0){
               sum=sum+b;
           }
        }
    if(a==sum)
        printf("����:%d\n",sum);
    } 
	return 0;
}
