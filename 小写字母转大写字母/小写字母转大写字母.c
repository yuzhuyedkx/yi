#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a[30];
	int b,i;
	printf("请任意输入最多30个字母！\n"); 
	scanf("%s",a);
	for(i=0;a[i];i++);
	for(b=0;b<i;b++){
		if(a[b]>='a'&&a[b]<='z')  a[b]=a[b]-32;
		printf("%c",a[b]);
	}
	return 0;
}
