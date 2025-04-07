#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,d,s,sum;
	a=100;sum=0;
	while(a<1000){
		b=a/100;
	    c=a/10%10;
		d=a%10;
	    s=b*b*b+c*c*c+d*d*d;
	    if(a==s) {
	    	printf("百分位：%1d  十分位：%1d  个位：%1d , 水仙花数：%3d\n",b,c,d,s);
	    	sum=sum+s;
		}
		a=a+1; 
	} 
	printf("1000以内水仙花数的和：%3d",sum);
	return 0;
}



//三位数的水仙花数：153、370、371、407 。 
