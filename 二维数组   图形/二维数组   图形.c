#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//按照如下形式输出。 
//      0 i 0
//      i i i
//		0 i 0 
int main(int argc, char *argv[]) {
	int a[3][3],i,j;
	printf("请任意输入九个数：\n");
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++)
		scanf("%d",&a[i][j]);
		printf("\n");
	}
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			if(i==1||j==1){
			printf("%d",a[i][j]);
			printf("  ");
			}
		else   printf("  ");
		}
		printf("\n");
	}
	
	return 0;
}



