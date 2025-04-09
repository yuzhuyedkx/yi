#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a[100];
	int b[10]={0},d,c,i;
	printf("请任意输入一串数字！最多100个字符!\n");
	scanf("%s",a);
	for(i=0;a[i];i++);
	for(c=0;c<i;c++)   b[a[c]-'0']++;
	for(d=0;d<10;d++)
		printf("%d   %d个\n",d,b[d]);
	return 0;
}
