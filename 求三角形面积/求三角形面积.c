#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float d,g,s;
	printf("请意输入底和高：\n");
	scanf("%f%f",&d,&g);//任意输入底和高 
	s=(d*g)/2;//三角形面积公式 
	printf("底：%.2f 高：%.2f 三角形面积：%.2f",d,g,s);
	return 0;
}
