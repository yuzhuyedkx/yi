#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void jh(int *x,int *y);
int main(int argc, char *argv[]) {
	int a,b;
	a=3;b=4;
	printf("交换前： a:%d  b:%d\n",a,b);
	jh(&a,&b);
	printf("交换后： a:%d  b:%d",a,b);
	return 0;
}

void jh(int *x,int *y){
	int z;
	z=*x;*x=*y;*y=z;      //交换两个数的位置 
}
