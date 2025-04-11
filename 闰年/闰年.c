#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	printf("请任意输入一个年份: ");
	scanf("%d",&a);
	if(a%4==0&&a%100==0||a%400==0)
	   printf("闰年"); 
	else
	   printf("不是闰年"); 
	return 0;
}
