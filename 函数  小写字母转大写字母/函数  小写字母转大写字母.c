#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("请任意输入一串个数小于100的字母！\n"); 
	char a[100];
	scanf("%s",a);
	char axzxx(char a[100]);
	printf("%c",axzxx(a));
	return 0;
}

char axzxx(char a[100]){
	int i,n;
	for(n=0;a[n];n++);
	for(i=0;i<n;i++){
		if(a[i]<='z'&&a[i]>='a')  a[i]=a[i]-32;
        printf("%c",a[i]);
	}
} 
