#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	#include <stdio.h>
    int a,b,c,number ; //�������
    number = 123 ;
    printf("%d\n",number);
    a = number/100 ; //�����λ��
    b = (number - a * 100) / 10 ; //����ʮλ��
    c = number%10 ; //�����λ��
    printf("�������ǣ�%d%d%d\n", c, b, a);//���������
	return 0;
}
