#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("�����������һ�����ִ���0����'Yes',�����'No'��");
	while(1) 
	{
	printf("\n----------------------------------(����0����)\n");
	float a;
	printf("����������һ������");
	scanf("%f",&a);
	if (a>0)
	{
		printf("Yes\n");
	}
	if (a<=0)
	{
		printf("No\n");
	}
	if (a==0)
	break; 
    }
	return 0;
}
