#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//������������ 
char lj(char a[],char b[]);
int main(int argc, char *argv[]) {
	char a[100]="asadfgf243������",b[50]="sfdnbjgkl3456";
	lj(a,b);//���ú��� 
	return 0;
}

char lj(char a[],char b[]){//���庯�� 
    int c,d;
	for(c=0;a[c];c++);//����a�ĸ��� 
	for(d=0;b[d];d++)//����b�ĸ��� 
	a[c++]=b[d];
	printf("%s",a);
} 

//ʹ��strcat()���� �� 
//int main(int argc, char *argv[]) {
//	char a[50]="asadfgf243  ",b[50]="sfdnbjgkl3456";
//	printf("%s",strcat(a,b));    //�ַ������� 
//	return 0;
//}
