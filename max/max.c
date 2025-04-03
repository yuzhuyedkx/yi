#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//用指针变量访问数组，求数组的最大值
int main(int argc, char *argv[]) {
	int a[10]={1,2,3,45,4,5,67,8,9,6};
	int *p,max=0;
	for(p=a;p<a+10;p++)
	if(max<*p)   max=*p;
	printf("max=%d",max);
	return 0;
}
