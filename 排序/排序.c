#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//�Ӵ�С���� 
int main(int argc, char *argv[]) {
	int a[10],b,max,e; 
	printf("����������ʮ������!(����)\n");
	for(b=0;b<=9;b++)
	scanf("%d",&a[b]);
	printf("\n����ǰ��");
	for(b=0;b<=9;b++)  printf("%d   ",a[b]);//�����ʮ������ 
	printf("\n"); 
    max=0;
    for(e=0;e<10;e++)
    	for(b=0;b<9;b++)
    	    if(a[b]<a[b+1]){
    	    	max=a[b+1];a[b+1]=a[b];a[b]=max;
			}
	printf("�����"); 
	for(b=0;b<=9;b++)   printf("%d   ",a[b]);
	return 0;
}




