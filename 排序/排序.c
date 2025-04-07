#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//从大到小排序 
int main(int argc, char *argv[]) {
	int a[10],b,max,e; 
	printf("请任意输入十个数字!(降序)\n");
	for(b=0;b<=9;b++)
	scanf("%d",&a[b]);
	printf("\n排序前：");
	for(b=0;b<=9;b++)  printf("%d   ",a[b]);//输出这十个数字 
	printf("\n"); 
    max=0;
    for(e=0;e<10;e++)
    	for(b=0;b<9;b++)
    	    if(a[b]<a[b+1]){
    	    	max=a[b+1];a[b+1]=a[b];a[b]=max;
			}
	printf("排序后："); 
	for(b=0;b<=9;b++)   printf("%d   ",a[b]);
	return 0;
}




