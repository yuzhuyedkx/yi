#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	printf("����������һ�����: ");
	scanf("%d",&a);
	if(a%4==0&&a%100==0||a%400==0)
	   printf("����"); 
	else
	   printf("��������"); 
	return 0;
}
