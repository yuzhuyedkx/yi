#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//��дһ���������������ַ�������ָ����ɡ�
void lj(char *x,char *y);
int main(int argc, char *argv[]) {
	char a[1000],b[100];
	printf("�����������ַ���!\n"); 
	gets(a);
	gets(b);
	lj(a,b);
	printf("���Ӻ���ַ���Ϊ��%s",a);
	return 0;
}

void lj(char *x,char *y) {
	for(;*x!='\0';x++);
	for(;*y!='\0';)   *(x++)=*(y++);
//	while(*y!='\0'){
//		*(x++)=*(y++);      ͬ��һ���һ�� 
//	}
}
