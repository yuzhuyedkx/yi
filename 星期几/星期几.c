#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	printf("����������һ�����ڼ��İ��������֣�\n");
	scanf("%d",&n);
	switch(n){
		case 1:printf("����һ");break; 
		case 2:printf("���ڶ�");break;
		case 3:printf("������");break;
		case 4:printf("������");break;
		case 5:printf("������");break;
		case 6:printf("������");break;
		case 7:printf("������");break;
		default:printf("�������");break;
	}
	return 0;
}
