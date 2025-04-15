#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("任意输入一个数，若能被2整除则'Yes',否则就'No'。\n"); 
    while(1) {
	    int a;
	    printf("----------------------------------(输入0结束)\n");
		scanf("%d",&a);
		if (a%2==0)
		{
			printf("Yes\n");
		}
		if (a%2!=0)
		{
			printf("No\n");
		}
	    if (a==0)
	    break;   
    }
	return 0;
}
