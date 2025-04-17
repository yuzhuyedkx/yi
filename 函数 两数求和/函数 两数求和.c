#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float sum();
int main(int argc, char *argv[]) {
	printf("lnput two numbers and find their sum! ");
	printf("sum=%.2f",sum());  //两数之和 
	return 0;
}

float sum(){
	float a,b,s;
	scanf("%f%f",&a,&b);
	s=a+b;
    return s;
 } 
