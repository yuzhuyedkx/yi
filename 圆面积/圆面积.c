#include <stdio.h>
#include <stdlib.h>
#include <math.h>  //M_PI��ͷ�ļ� 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//��Բ���   
int main(int argc, char *argv[]) {
	int r,c,s;
	r=12;
	c=2*M_PI*r; //��԰�ܳ� 
	s=M_PI*r*r; //��Բ��� 
	printf("�뾶��%-3d �ܳ���%-3d �����%-3d",r,c,s);
	return 0;
} 
