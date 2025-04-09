#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	printf("请任意输入一个星期几的阿拉伯数字：\n");
	scanf("%d",&n);
	switch(n){
		case 1:printf("星期一");break; 
		case 2:printf("星期二");break;
		case 3:printf("星期三");break;
		case 4:printf("星期四");break;
		case 5:printf("星期五");break;
		case 6:printf("星期六");break;
		case 7:printf("星期七");break;
		default:printf("输入错误！");break;
	}
	return 0;
}
