#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//��һ����a��1�η���n�η��ĺ͡� 
int main(int argc, char *argv[]) {
	int a,b,c,n,d,sum;
	printf("����������һ������Ϊ���� a :\n");
	scanf("%d",&a);
	printf("����������һ������Ϊ���� n :\n");
	scanf("%d",&n);
	c=1;sum=0;
	for(b=1;b<=n;b++){
		c=c*a;      //�ֱ����a��n�η�ֵ 
	    printf("%d��%d�η�Ϊ%d\n",a,b,c);   
	    sum=sum+c;    //���ǰb��a��n�η��� 
	    }
	printf("\n%d��1��%d�η���Ϊ��sum=%d",a,n,sum);
	system("pause");
	return 0;
}
