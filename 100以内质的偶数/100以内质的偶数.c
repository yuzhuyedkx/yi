#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//��д�����100�����ʵ�ż���洢���ļ�
int main(int argc, char *argv[]) {
	int a,b;
	for(a=1;a<100;a++){
		for(b=2;b<a;b++)   
		    if(a%b==0)  break;
	    if(b==a&&a%2==0) 
	    	printf("100�����ʵ�ż��:%3d\n",a);
	}
	FILE *fp; 
	char ch;
	if((fp=fopen("filename.txt","w"))==NULL){      //��һ���ļ� 
		printf("cannot open this file\n");
		exit(1);
	}
	printf("\n����'#'���������"); 
	while(ch!='#'){
		fputc(ch,fp);    //������ļ����һ���ַ��� 
	    putchar(ch);    //��������ַ���ʾ����Ļ�� �� 
	    ch=getchar();
	}
	fclose(fp=NULL);      //�ر��ļ�   
	putchar(10);
	return 0;
}
