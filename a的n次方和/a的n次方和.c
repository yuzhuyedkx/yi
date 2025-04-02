#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//求一个数a从1次方到n次方的和。 
int main(int argc, char *argv[]) {
	int a,b,c,n,d,sum;
	printf("请任意输入一个数作为底数 a :\n");
	scanf("%d",&a);
	printf("请任意输入一个数作为次数 n :\n");
	scanf("%d",&n);
	c=1;sum=0;
	for(b=1;b<=n;b++){
		c=c*a;      //分别求出a的n次方值 
	    printf("%d的%d次方为%d\n",a,b,c);   
	    sum=sum+c;    //求出前b个a的n次方和 
	    }
	printf("\n%d的1到%d次方和为：sum=%d",a,n,sum);
	system("pause");
	return 0;
}
