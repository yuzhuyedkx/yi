#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("��������һ���������ܱ�2������'Yes',�����'No'��\n"); 
    while(1) {
	    int a;
	    printf("----------------------------------(����0����)\n");
		scanf("%d",&a);
		if (a%2==0)
		{
			printf("Yes\n");
		}
		if (a%2!=0)
		{
			printf("No\n");
		}
	    if (a==0)
	    break;   
    }
	return 0;
}
