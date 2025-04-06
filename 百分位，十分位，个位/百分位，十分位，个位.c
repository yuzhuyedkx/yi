#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,d;
	a=123;
	b=a/100;
	c=a/10%10;
	d=a%10;
	printf("数字：%d\n百分位：%d\n十分位：%d\n个位：%d",a,b,c,d);
	return 0;
}
