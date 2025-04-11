#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// 1  2  3
// 4  5  6

// 1  4
// 2  5
// 3  6
int main(int argc, char *argv[]) {
	int a[2][3],b[3][2],i,j;
	printf("请任意输入六个数：\n");
	for(i=0;i<=1;i++){
		for(j=0;j<=2;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<=1;i++){
		for(j=0;j<=2;j++){
			printf("%d",a[i][j]);
			printf(" ");
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<=2;i++){
		for(j=0;j<=1;j++){
			b[i][j]=a[j][i];
			printf("%d",b[i][j]);
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
