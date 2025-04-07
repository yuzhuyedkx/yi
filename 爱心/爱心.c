#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,c;
	int d;
	for(a=1.4;a>-1.1;a-=0.1){
		for(b=-1.5;b<1.5;b+=0.05){
			c=b*b+a*a-1;
			putchar(c*c*c-a*a*a*b*b<=0.0?'*':' ');
		}
        color(4);
		putchar('\n');
	}
	printf("%d",ys(d));
	return 0;
}

int ys(int d){
	for(d=0;d<17;d++)
	printf(" "); 
	color(7);
	printf("世间万物都有爱与被爱的权力！\n");
	for(d=0;d<19;d++)
	printf(" ");   
	printf("送给每一个拥有爱的生物。\n"); 
}

void color(int m){
	HANDLE consolehend = GetStdHandle(STD_OUTPUT_HANDLE);    //获取输出流的句柄 
	SetConsoleTextAttribute(consolehend,m);
}
