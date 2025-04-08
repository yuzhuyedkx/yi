#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int a, b, c, d, days, i;
    printf("请任意输入年、月、日：\n");
    scanf("%d%d%d", &a, &b, &c);
    i = 1;
    days = c;
    while (i < b) {
    if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
    d = 31;
    else {
    if (i == 2) {
        if ( a % 400 == 0 || a % 100 != 0 && a % 4 == 0)
            d = 29;
        else
            d = 28;
    } else
        d = 30;
    }
    days = days + d;
    printf("\n%d,%d", i, d);
    i = i + 1;
    }
    printf("\n%d,%d\n天数：%d", b, c, days);
	return 0;
}
