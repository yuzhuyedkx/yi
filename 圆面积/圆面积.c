#include <stdio.h>
#include <stdlib.h>
#include <math.h>  //M_PI的头文件 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//求圆面积   
int main(int argc, char *argv[]) {
	int r,c,s;
	r=12;
	c=2*M_PI*r; //求园周长 
	s=M_PI*r*r; //求圆面积 
	printf("半径：%-3d 周长：%-3d 面积：%-3d",r,c,s);
	return 0;
} 
