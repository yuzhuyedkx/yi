#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[10],i,max;
	printf ("请任意输入10个数：\n");
	for(i=1;i<=10;i++) {
		scanf("%d",&a[i]);
	}
	max=a[1];
	for(i=2;i<=10;i++){
		if(max<a[i])
			max=a[i];
	}
	printf("\nmax=%d",max);
	return 0;
}
