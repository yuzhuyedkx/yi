#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void jh(int *x,int *y);
int main(int argc, char *argv[]) {
	int a,b;
	a=3;b=4;
	printf("����ǰ�� a:%d  b:%d\n",a,b);
	jh(&a,&b);
	printf("������ a:%d  b:%d",a,b);
	return 0;
}

void jh(int *x,int *y){
	int z;
	z=*x;*x=*y;*y=z;      //������������λ�� 
}
