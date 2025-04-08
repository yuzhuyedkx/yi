#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,d;
    for(a=1;a<=5;a++){
    	for(b=1;b<=5-a;b++)
    	printf(" ");
    	for(c=1;c<=(a*2-1);c++)
    	printf("*");
    	printf("\n");
	}
	for(a=4;0<=a;a--){
    	for(b=1;b<=5-a;b++)
    	printf(" ");
    	for(c=1;c<=(a*2-1);c++)
    	printf("*");
    	printf("\n");
	}
	return 0;
}

//      *
//     ***
//    *****
//   *******
//  *********
//   *******
//    *****
//     ***
//      *
