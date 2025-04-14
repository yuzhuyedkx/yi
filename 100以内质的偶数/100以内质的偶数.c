#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//编写程序把100以内质的偶数存储到文件
int main(int argc, char *argv[]) {
	int a,b;
	for(a=1;a<100;a++){
		for(b=2;b<a;b++)   
		    if(a%b==0)  break;
	    if(b==a&&a%2==0) 
	    	printf("100以内质的偶数:%3d\n",a);
	}
	FILE *fp; 
	char ch;
	if((fp=fopen("filename.txt","w"))==NULL){      //打开一个文件 
		printf("cannot open this file\n");
		exit(1);
	}
	printf("\n输入'#'则结束程序！"); 
	while(ch!='#'){
		fputc(ch,fp);    //向磁盘文件输出一个字符。 
	    putchar(ch);    //将输出的字符显示在屏幕上 。 
	    ch=getchar();
	}
	fclose(fp=NULL);      //关闭文件   
	putchar(10);
	return 0;
}
