#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	printf("请任意输入三个数：\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b){
		a=b;
	    if(b<c)  a=c;
	}
	else  if(a<c)  a=c; 
	printf("max:%d",a);
	return 0;
}
