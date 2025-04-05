#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//链接两个函数 
char lj(char a[],char b[]);
int main(int argc, char *argv[]) {
	char a[100]="asadfgf243！！！",b[50]="sfdnbjgkl3456";
	lj(a,b);//调用函数 
	return 0;
}

char lj(char a[],char b[]){//定义函数 
    int c,d;
	for(c=0;a[c];c++);//数组a的个数 
	for(d=0;b[d];d++)//数组b的个数 
	a[c++]=b[d];
	printf("%s",a);
} 

//使用strcat()函数 ： 
//int main(int argc, char *argv[]) {
//	char a[50]="asadfgf243  ",b[50]="sfdnbjgkl3456";
//	printf("%s",strcat(a,b));    //字符串连接 
//	return 0;
//}
