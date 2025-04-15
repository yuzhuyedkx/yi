#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,c;
	printf("请任意输入两个数字,将会输出最大的数字。\n");
	scanf("%f%f",&a,&b);
	if (a>b)
	    c=a; 
	else
		c=b;
	printf("最大的数字为%.2f",c);
	return 0;
}
