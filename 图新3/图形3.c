#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	for(c=0;c<6;c++)  printf("*");
	printf("\n");
	for(a=0;a<3;a++){
		for(b=0;b<=a;b++)
		printf("  ");
	    for(c=0;c<6;c++)  printf("*");
	    printf("\n");
	}
	
	return 0;
}


//******  
//  ******
//    ******
//      ******
