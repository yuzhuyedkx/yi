#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//��100���ڵ��������� 
int main(int argc, char *argv[]) {
	int a,b;
	for(a=1;a<100;a++){
		for(b=2;b<a;b++)
    	   if(a%b==0)  break;
	    if(b==a)  printf("%5d",a);
	}
	return 0;
}
