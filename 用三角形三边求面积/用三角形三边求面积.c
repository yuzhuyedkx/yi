#include <stdio.h>
#include <stdlib.h>
//������������������������� 
int main(int argc, char *argv[]) {
	float a,b,c,s,area;
	printf("�����������������֣���Ϊ���������ߡ�\n");
	scanf("%f%f%f",&a,&b,&c);
	if((c+b)>a&&(a+c)>b&&(a+b)>c&&(a-b)<c&&(a-c)<b&&(b-c)<a){
		printf("��������������\n");
		s=(a+b+c)/2;
	    area=sqrt(s*(s-a)*(s-b)*(s-c));
	    printf("�����������%.2f",area);
	}
	else
	   printf("����������������");
	return 0;
}
