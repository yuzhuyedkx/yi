#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	#include <stdio.h>
    int a,b,c,number ; //定义变量
    number = 123 ;
    printf("%d\n",number);
    a = number/100 ; //计算百位数
    b = (number - a * 100) / 10 ; //计算十位数
    c = number%10 ; //计算个位数
    printf("反序数是：%d%d%d\n", c, b, a);//输出反序数
	return 0;
}
