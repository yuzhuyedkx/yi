#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a[30]; 
	int b,n[4]={0};
	printf("�������������30���ַ�!\n");
	scanf("%s",a);
	printf("\n");
	for(b=0;b<30;b++){
		if(a[b]>='a'&&a[b]<='z')
			n[0]++;
		else   if(a[b]>='A'&&a[b]<='Z')   n[1]++;
		else   if(a[b]>='0'&&a[b]<='9')   n[2]++;
		else   n[3]++;
    }
	printf("\n");
	printf("Сд��ĸ������%d\n",n[0]);
    printf("��д��ĸ������%d\n",n[1]);
	printf("���ָ�����%d\n",n[2]);
	printf("�ַ�������%d\n",n[3]);
	return 0;
}
