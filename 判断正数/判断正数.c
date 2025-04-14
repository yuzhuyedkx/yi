#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("若任意输入的一个数字大于0，则'Yes',否则就'No'。");
	while(1) 
	{
	printf("\n----------------------------------(输入0结束)\n");
	float a;
	printf("请任意输入一个数字");
	scanf("%f",&a);
	if (a>0)
	{
		printf("Yes\n");
	}
	if (a<=0)
	{
		printf("No\n");
	}
	if (a==0)
	break; 
    }
	return 0;
}
