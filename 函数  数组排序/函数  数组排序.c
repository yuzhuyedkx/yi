#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int px(int a[10]); 
int main(int argc, char *argv[]) {
	int a[10],b;  
	printf("����������ʮ������!(����)\n");
	for(b=0;b<10;b++)
	scanf("%d",&a[b]);
	printf("����ǰ��");
	for(b=0;b<10;b++)  printf("%d   ",a[b]);
	printf("\n");
    px(a);
	return 0;
}

int px(int a[10]){     //�������� 
    int c,d,max;
    max=0;
	for(c=0;c<10;c++)
		for(d=0;d<9;d++)
		    if(a[d]<a[d+1]){
			  max=a[d+1];a[d+1]=a[d];a[d]=max; 
		    }
	printf("�����"); 
	for(d=0;d<10;d++)  printf("%d   ",a[d]);
} 
