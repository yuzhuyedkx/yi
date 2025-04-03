#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//编写一函数，链接两个字符串，用指针完成。
void lj(char *x,char *y);
int main(int argc, char *argv[]) {
	char a[1000],b[100];
	printf("请输入两个字符串!\n"); 
	gets(a);
	gets(b);
	lj(a,b);
	printf("连接后的字符串为：%s",a);
	return 0;
}

void lj(char *x,char *y) {
	for(;*x!='\0';x++);
	for(;*y!='\0';)   *(x++)=*(y++);
//	while(*y!='\0'){
//		*(x++)=*(y++);      同上一语句一样 
//	}
}
